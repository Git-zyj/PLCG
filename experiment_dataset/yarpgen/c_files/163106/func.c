/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163106
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
    var_19 = ((/* implicit */int) (_Bool)1);
    var_20 = ((/* implicit */unsigned short) (signed char)120);
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((max((((/* implicit */long long int) 1867625115)), (max((var_17), (((/* implicit */long long int) (short)26791)))))) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)93)) != (min(((+(((/* implicit */int) (signed char)(-127 - 1))))), ((-(((/* implicit */int) (unsigned short)8))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((_Bool) -483738957))), (((((1323532809U) - (((/* implicit */unsigned int) -483738957)))) - (((/* implicit */unsigned int) 554821897))))));
                                arr_18 [i_2] = ((/* implicit */unsigned int) (unsigned short)1008);
                                arr_19 [i_3] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_14))))) ? (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_4] [i_4]) ? (205164657007167882LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))))));
                                var_22 = 483738959;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
