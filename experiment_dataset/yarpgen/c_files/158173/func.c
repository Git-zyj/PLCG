/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158173
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 += ((/* implicit */signed char) var_18);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1] [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_3 [(unsigned char)11])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_1])))))))));
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0]))));
        }
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_23 = ((arr_8 [i_0] [i_2]) ? ((~(arr_5 [(signed char)9] [i_2 - 1] [(unsigned char)15]))) : ((+(arr_5 [i_0] [i_0] [i_2]))));
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_0]))))));
            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_2])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_0])) : (arr_5 [i_0] [(unsigned short)1] [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [2U]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10485))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((arr_4 [(unsigned short)4]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_12)) - (13))))))))));
            var_26 &= ((/* implicit */unsigned char) ((arr_8 [16U] [i_2]) ? (arr_2 [(short)2] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [(unsigned char)4])) ? (((/* implicit */int) arr_1 [i_2 + 1] [18LL])) : (((/* implicit */int) arr_1 [i_2 + 1] [14])))))));
        }
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((arr_4 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_0])) + (17092))))))) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        var_28 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11760070010903094766ULL)) ? (10927941867411698380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8))))))));
        var_29 = ((/* implicit */signed char) (unsigned short)65535);
    }
}
