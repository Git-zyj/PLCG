/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145630
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
    var_10 *= ((/* implicit */short) var_6);
    var_11 = ((/* implicit */int) ((long long int) ((int) var_3)));
    var_12 -= ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_2 [(unsigned char)16] [i_1 + 2] [i_1 - 2]))) ? (arr_0 [(signed char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_1 + 2] [i_1 - 2] [i_2]), (arr_6 [i_1 + 1] [i_1 - 2] [i_2])))) ? (((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) % (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 - 2]))) - (arr_6 [i_1 - 2] [i_1] [i_2]))))));
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_3 [i_1 - 2])))));
                }
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_7))))) * (((long long int) var_2))))));
            }
        } 
    } 
}
