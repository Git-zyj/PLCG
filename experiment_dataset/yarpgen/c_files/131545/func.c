/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131545
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-1))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (signed char)3))))) ? (arr_8 [i_2 - 2] [i_2 - 3] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65525))))));
                var_13 = (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])));
            }
            /* vectorizable */
            for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                var_14 |= ((/* implicit */signed char) (+(arr_8 [i_3] [i_3 + 2] [i_3] [(unsigned short)7])));
                arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(arr_8 [i_0] [i_0] [i_3] [i_3 + 1])));
                arr_12 [i_0] [0LL] [i_1] = ((/* implicit */_Bool) (unsigned char)3);
                arr_13 [i_0] [5LL] [i_3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                arr_14 [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (7494163206195367898ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_3 - 3] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31))))) : (((/* implicit */int) ((unsigned short) var_3))));
            }
            var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
            arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)255))))), (min((arr_7 [i_0] [i_1]), (var_10)))))) ? (max(((+(arr_10 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_7)))))))));
            var_16 = (_Bool)0;
        }
    }
    var_17 = ((/* implicit */signed char) min((var_10), (((/* implicit */long long int) ((int) (+(((/* implicit */int) var_9))))))));
}
