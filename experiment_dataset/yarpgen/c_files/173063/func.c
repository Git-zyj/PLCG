/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173063
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)3)) || (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_15))), (((/* implicit */unsigned long long int) var_14)))))));
    var_21 = ((/* implicit */short) ((unsigned int) var_19));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((arr_1 [i_2]) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)-4))))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)-30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30))) : (var_18))))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((unsigned int) var_10)), (var_11))))));
                            }
                        } 
                    } 
                } 
                var_24 += ((/* implicit */short) var_15);
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        for (int i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((+(var_11))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 3985651756U)) > (min(((-9223372036854775807LL - 1LL)), (6465381351105862136LL))))))))))));
                                arr_21 [(unsigned char)10] |= ((/* implicit */long long int) 4294967283U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) (short)29);
}
