/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172106
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
    var_15 = ((/* implicit */signed char) (((((-((+(((/* implicit */int) var_10)))))) + (2147483647))) >> ((((-(((/* implicit */int) (short)32)))) + (43)))));
    var_16 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_1)) | (min((((/* implicit */int) (signed char)-85)), (var_9))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (((!(((arr_2 [i_0] [i_0]) || (((/* implicit */_Bool) var_5)))))) ? (((/* implicit */int) ((3866284032902086147LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-30518)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : ((-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) < (((((/* implicit */int) min((var_14), (arr_2 [i_0] [i_1 - 1])))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (17179869152LL))))))));
            var_17 *= ((/* implicit */_Bool) ((((arr_2 [i_0 + 1] [i_1 - 2]) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1 - 2])))) * ((+(((((/* implicit */int) (short)-11684)) * (((/* implicit */int) (short)-7902))))))));
        }
        for (long long int i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((int) min((((/* implicit */int) arr_0 [i_0 - 3])), (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (short)-7902)))))));
            arr_10 [5U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [(unsigned short)1] [i_0 - 2])) - ((+(((/* implicit */int) (unsigned char)252))))))) ? (((/* implicit */int) var_1)) : ((-(((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)-11))))))));
        }
        var_19 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0 + 1]);
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_7 [i_0]))))))) ? (((/* implicit */int) min((((short) (short)13910)), (((/* implicit */short) arr_0 [i_0 - 1]))))) : (((/* implicit */int) ((((((/* implicit */int) arr_9 [(unsigned short)0])) >> (((/* implicit */int) arr_2 [i_0] [i_0])))) <= ((+(((/* implicit */int) (short)-7917))))))))))));
    }
    var_21 |= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (short)-7889))) ^ ((~(((var_14) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (short)-7938))))))));
}
