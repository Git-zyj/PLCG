/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141649
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
    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((int) (unsigned short)27838))) ? (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_9))) : (var_2)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] [i_1] = (-(arr_6 [i_0 + 2] [i_0] [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] &= ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_4]))));
                                arr_15 [i_0] [i_2] &= ((/* implicit */unsigned long long int) min((min((arr_10 [i_1] [i_1] [i_1 + 2] [i_2] [i_2]), (arr_10 [i_0] [i_1] [i_1 - 1] [i_2] [i_4]))), (((((/* implicit */_Bool) (~(var_17)))) && (((/* implicit */_Bool) (-(6251996523409468527ULL))))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */unsigned short) min(((+(arr_4 [i_0] [i_1 - 3] [i_2]))), ((-((~(arr_4 [i_0] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}
