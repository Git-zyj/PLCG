/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171566
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) (-(min((var_14), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_10)) ? (arr_5 [(unsigned char)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1]))))))) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                var_17 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_10 [i_2]) : (arr_10 [i_2]))) > (var_5)));
                /* LoopNest 3 */
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] = ((/* implicit */short) var_0);
                                arr_23 [i_6] [i_6] = (-(min((((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)-90)))), (1997757505))));
                                var_18 = (+((+(arr_14 [i_5 - 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
