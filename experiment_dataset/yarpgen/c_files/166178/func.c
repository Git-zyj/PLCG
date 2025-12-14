/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166178
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
    var_19 = ((/* implicit */signed char) var_17);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_1 + 2] [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) 2713441764U);
                                var_20 &= ((/* implicit */unsigned short) (!(((1581525531U) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)54857), ((unsigned short)65535)))))))));
                                var_21 = max((min((((var_17) << (((((/* implicit */int) arr_7 [i_0] [i_0])) - (63497))))), (((/* implicit */int) ((1581525528U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6755)))))))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 2])) <= (((/* implicit */int) min(((unsigned short)6778), ((unsigned short)6755))))))));
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
}
