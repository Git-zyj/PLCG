/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155842
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
    var_20 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned int) (unsigned short)0)), (1073741312U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((((unsigned long long int) ((unsigned char) var_14))), (((/* implicit */unsigned long long int) ((unsigned char) min((var_13), (((/* implicit */short) var_6))))))));
                                var_22 = ((/* implicit */short) max((((unsigned int) min((((/* implicit */unsigned short) var_13)), (var_12)))), (((/* implicit */unsigned int) ((short) ((unsigned long long int) var_10))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((int) ((unsigned short) 4237212859U))), (((int) max((var_2), (((/* implicit */unsigned long long int) var_15)))))));
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned short) var_19)), ((unsigned short)32838))))), (max((((long long int) 434322514)), (((/* implicit */long long int) max((var_18), (((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_0])))))))));
            }
        } 
    } 
}
