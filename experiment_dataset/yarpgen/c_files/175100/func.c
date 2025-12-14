/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175100
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_17)), (((var_9) ? (min((((/* implicit */unsigned long long int) 2684048736U)), (13631263869152454639ULL))) : (((/* implicit */unsigned long long int) var_13))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)30)) != (((/* implicit */int) (short)15485))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15504))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (short)-15504)) : (((/* implicit */int) arr_2 [(signed char)3]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) != (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_9 [2ULL] [i_1] [2ULL] [i_0])))))));
                            arr_12 [i_0] [i_1] [i_2] [1U] [i_3] [i_3 + 3] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_18))));
    var_23 = ((/* implicit */unsigned long long int) var_8);
}
