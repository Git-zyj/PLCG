/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124576
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
    var_10 = ((/* implicit */signed char) (~(var_1)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */_Bool) 4294967295U);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_11 [5LL] [i_3] [(short)5] [i_3 - 2] [i_0] [(unsigned char)12] [12] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-122))));
                                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) 13020924337978428210ULL);
                                arr_13 [6] [(unsigned short)10] [(signed char)5] = (!(((/* implicit */_Bool) 1434328796)));
                                arr_14 [i_3] [i_4 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)48))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (-(5425819735731123406ULL)));
}
