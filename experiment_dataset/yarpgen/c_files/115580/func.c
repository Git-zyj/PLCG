/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115580
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
    var_13 = (-(min((((unsigned int) var_7)), (((/* implicit */unsigned int) max((var_7), (var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = 4294967285U;
                                arr_15 [i_0] [i_0] = ((((var_7) - (((/* implicit */int) (unsigned char)128)))) | ((-(arr_11 [i_1] [i_2 - 2] [i_2 - 3] [i_4] [i_4] [i_4] [i_2 - 2]))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) (-(max((1671514287332330140LL), (((/* implicit */long long int) -566865230))))));
                arr_16 [i_0] [i_0] [(unsigned char)12] = ((/* implicit */long long int) (unsigned char)49);
            }
        } 
    } 
}
