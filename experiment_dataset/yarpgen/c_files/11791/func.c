/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11791
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((arr_3 [i_0]) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)122)))) + (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_8 [i_4] [(short)0] [i_2] [i_1]);
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_18);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59149)) || (((/* implicit */_Bool) (signed char)-48)))))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) var_4);
                arr_20 [i_5] [i_6] = ((/* implicit */_Bool) var_11);
                arr_21 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_2))))));
            }
        } 
    } 
    var_23 = var_13;
}
