/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184479
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_13))));
                var_18 += ((/* implicit */unsigned char) (~(((arr_2 [(signed char)0] [i_0 - 1]) << (((arr_2 [(signed char)14] [i_0 - 1]) - (3173061105387383778ULL)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */short) ((-1LL) / (((/* implicit */long long int) 4294967295U))));
                    arr_9 [i_0 - 1] [i_0] [(unsigned short)15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                    arr_10 [(_Bool)1] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_2 - 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) : (var_2)));
                }
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    arr_13 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_3]);
                    arr_14 [16ULL] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) var_9);
                    arr_15 [(unsigned char)11] [7ULL] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((-9223372036854775804LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
                }
                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_10)))))))), (min((min((((/* implicit */unsigned char) (signed char)0)), (var_14))), (((/* implicit */unsigned char) arr_12 [i_1] [(unsigned char)12] [(unsigned char)12]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (9223372036854775803LL)));
}
