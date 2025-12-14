/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150915
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
    var_18 = ((/* implicit */unsigned long long int) ((((_Bool) 2251795518717952LL)) ? ((~((~(((/* implicit */int) var_17)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) (-(min((3922289500U), (((/* implicit */unsigned int) var_7))))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_9)))) ? (min((var_12), (((/* implicit */long long int) (unsigned char)238)))) : (((/* implicit */long long int) var_14))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) var_3);
                }
                arr_9 [i_0] = ((/* implicit */int) max((min((((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [13U]))))))), (((/* implicit */long long int) max((arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 4]), (-4872107))))));
                arr_10 [(unsigned char)4] [i_0 - 3] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_2))), (var_14)))), (min(((+(arr_4 [i_1] [i_0] [i_0]))), (((/* implicit */long long int) 3228285204U))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) var_14));
}
