/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119023
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
    var_19 = ((/* implicit */unsigned char) (((-((+(1339139946))))) / (1339139946)));
    var_20 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */long long int) max((max((var_5), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) ((-3755475497365070010LL) != (var_9)))))))));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 3928709034330372171LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (var_1))), (((/* implicit */long long int) ((unsigned char) -843870287))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [(signed char)5])), (1363299806U)))) ? (max((((/* implicit */unsigned int) arr_0 [i_1])), (3462752566U))) : (arr_4 [i_0] [i_1] [i_0])))) / (max((((7923628829336384448ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) (short)20839))))));
                arr_7 [9ULL] [9ULL] = ((/* implicit */unsigned char) 10523115244373167167ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3462752566U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (2931667489U)))))))));
                            arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] = ((/* implicit */int) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_8))))))), (max((928418482423987693LL), (((/* implicit */long long int) (unsigned char)241))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
