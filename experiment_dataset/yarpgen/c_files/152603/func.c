/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152603
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-77)))))));
                    var_13 = arr_3 [i_0] [i_1 - 1] [i_2];
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                {
                    arr_13 [i_4 - 1] [i_5] = ((/* implicit */long long int) ((2000102684U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 4; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((2168088746U) % (arr_8 [i_3] [i_3])));
                                arr_19 [i_3] [i_3] [i_5] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_7] [i_5 - 2] [i_3])) ? ((-(((((/* implicit */_Bool) arr_18 [i_3] [i_4] [14U] [i_6] [i_4 + 2])) ? (889044617U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2))))));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */_Bool) min(((unsigned short)16383), ((unsigned short)0)));
                }
            } 
        } 
    } 
}
