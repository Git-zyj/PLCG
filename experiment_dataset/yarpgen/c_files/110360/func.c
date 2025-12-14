/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110360
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
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */int) 3293916832U);
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-47)) * (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) + (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    var_19 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (signed char)-44);
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned char)173))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) 4079699741U);
                    arr_15 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_2])), (arr_11 [i_0] [i_0] [i_2] [i_1])))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))) : ((+(0))))), (((/* implicit */int) (!(((/* implicit */_Bool) 759157405)))))));
                }
            } 
        } 
    } 
}
