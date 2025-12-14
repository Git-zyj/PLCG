/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108134
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
    var_10 = min((var_9), (((/* implicit */unsigned int) (((-(var_9))) < (((unsigned int) var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) 684943098U)), (max((((/* implicit */long long int) 16U)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-8650726729109694333LL) : (((/* implicit */long long int) 3634560850U))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 = arr_7 [i_1 - 3] [i_2 - 1] [i_3] [i_4];
                                var_13 = max((min((((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (arr_1 [i_0] [15U])))), (((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (1650348169U))))), (((/* implicit */unsigned int) (short)-9419)));
                                arr_13 [i_4] [i_3] [i_4] [i_4] = ((/* implicit */short) ((unsigned short) max((((((/* implicit */int) arr_12 [i_0] [i_1 - 3] [i_2] [i_1 - 3] [i_4])) * (((/* implicit */int) var_8)))), (-1))));
                                arr_14 [i_0] [i_1 - 2] [12U] [i_2 + 1] [i_3] [i_3] [i_4 - 3] = ((/* implicit */short) arr_12 [i_2] [i_2] [i_4 + 2] [i_4] [i_4]);
                                var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [1] [6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) arr_0 [i_1])))) : ((-(((/* implicit */int) var_7))))))));
                var_16 = min(((-(arr_1 [i_1 - 3] [i_1 - 2]))), (min((arr_1 [i_1 - 1] [i_1 - 2]), (arr_1 [i_1 + 2] [i_1 - 4]))));
                var_17 = ((/* implicit */short) 2147483624);
            }
        } 
    } 
}
