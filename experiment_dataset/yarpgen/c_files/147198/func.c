/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147198
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))), (((unsigned int) 18406982656005880506ULL)))), (max((((/* implicit */unsigned int) var_0)), (arr_3 [i_1] [i_1])))));
                var_17 = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) != (((((/* implicit */int) (short)-25386)) | (((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */_Bool) min((((unsigned int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3])))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_3 - 3]))));
                            var_19 = ((/* implicit */signed char) var_11);
                            var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_12))))), (644263601U)));
                            var_21 += ((/* implicit */unsigned int) (short)9645);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 4294967284U))));
                arr_10 [i_1] |= (signed char)-123;
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max((var_8), (((/* implicit */signed char) var_12))))) > (((/* implicit */int) var_7))))) > ((-(((/* implicit */int) var_3))))));
}
