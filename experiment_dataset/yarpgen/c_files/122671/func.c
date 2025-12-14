/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122671
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-82), (((/* implicit */signed char) ((var_11) || (var_11)))))))) + (((((/* implicit */long long int) 965969221U)) ^ (1350531987411600918LL))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (signed char)56)), ((short)-31460)))) ^ (((/* implicit */int) ((9437957343529594799ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29037))))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2664631235U))) >> (((((/* implicit */int) (short)12479)) - (12467))))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_2) << (((((/* implicit */int) (signed char)-74)) + (123)))));
                    arr_12 [i_2 + 3] [i_1] = ((/* implicit */unsigned long long int) (short)11921);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_13);
    var_23 = var_15;
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_14))));
}
