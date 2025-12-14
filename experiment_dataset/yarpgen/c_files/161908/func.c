/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161908
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
    var_17 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */int) ((((var_12) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 2])))) > (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0]))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_2 [i_1 + 2]))));
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_20 = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0]));
                    var_21 = min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)27013))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0])) ? (((/* implicit */int) (short)27014)) : (((/* implicit */int) (signed char)-93))))) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_0)))));
                }
                arr_12 [10ULL] [i_1] [i_0] = ((/* implicit */unsigned int) (short)27003);
                var_22 = ((/* implicit */int) arr_9 [(signed char)10] [i_1]);
            }
        } 
    } 
    var_23 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27014)))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 838912038U)) : (var_14))))));
}
