/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13534
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_17)))))));
    var_21 = ((/* implicit */long long int) var_18);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1 + 2] [i_0] = ((/* implicit */signed char) ((unsigned short) min((var_2), (((/* implicit */unsigned long long int) var_19)))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_16))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) >= (591327231172454622LL)));
                            }
                            for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 1) 
                            {
                                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2]))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((141016533694824322LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))) ? (var_17) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_5 - 1] [0ULL] [19ULL])))))));
                                var_26 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_9))))))));
                            }
                            var_27 = ((/* implicit */unsigned long long int) (~(576460752303423487LL)));
                            arr_16 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1180800467775491582LL))));
                        }
                    } 
                } 
                var_28 += ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_3))))));
            }
        } 
    } 
}
