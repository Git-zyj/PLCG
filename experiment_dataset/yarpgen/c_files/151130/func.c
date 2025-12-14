/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151130
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((7370268935099427533LL) / (7370268935099427533LL)));
                arr_5 [1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) -7370268935099427533LL));
            }
        } 
    } 
    var_15 = max((((/* implicit */unsigned int) ((unsigned short) var_7))), ((-(var_14))));
    /* LoopNest 3 */
    for (short i_2 = 4; i_2 < 9; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-18179)), (-9223372036854775788LL)));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 7; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) arr_15 [i_2] [i_3] [i_4] [i_2]);
                                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_6] [i_5 + 2] [i_4] [i_3] [i_6]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15714)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : ((+(-7370268935099427535LL)))));
                                arr_18 [i_2] [7U] [7U] [i_5] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)-12857)) > (arr_16 [i_2] [i_3] [i_4] [6] [i_6]))))));
                                arr_19 [i_2] [i_2] [i_4] [i_5 + 1] [i_6] [i_4] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
