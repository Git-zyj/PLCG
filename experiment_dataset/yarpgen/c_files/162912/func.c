/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162912
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
    var_12 = ((/* implicit */_Bool) min((((var_1) + (var_1))), (((/* implicit */long long int) -15))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(min((((/* implicit */long long int) var_4)), (var_6))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) 3623705716731828619LL);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_15 = ((/* implicit */long long int) ((short) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) max((15), (-726182774)))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -212249233)) ? (((/* implicit */long long int) 2246287828U)) : (-8576903721380215751LL)))), (arr_4 [i_1 + 2] [i_2 - 1] [i_2 - 1])))) && (((/* implicit */_Bool) (~((+(20))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned long long int) ((short) var_6));
                                var_18 &= ((((/* implicit */unsigned long long int) ((long long int) (short)-31328))) / (((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) (short)28008)) : (((((/* implicit */unsigned long long int) 0U)) * (var_10))))));
                                var_19 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4 - 1] [i_4 + 2])))), (((_Bool) var_7))));
                            }
                        } 
                    } 
                }
                var_20 |= ((/* implicit */unsigned short) (+(((max((var_1), (((/* implicit */long long int) var_4)))) & (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) (!(var_11)))), (min((((/* implicit */unsigned char) (signed char)5)), ((unsigned char)52)))))), ((short)-3508)));
}
