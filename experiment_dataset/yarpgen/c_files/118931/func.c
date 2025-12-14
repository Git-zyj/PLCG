/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118931
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 90909075280566948LL)), (var_16)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = min((((/* implicit */unsigned long long int) min(((short)-4948), (((/* implicit */short) var_14))))), (1633418391038114784ULL));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_10 [i_0] [14ULL] [i_2 - 1] [i_2 - 1] [i_4 - 2])), (arr_0 [i_0 - 1]))))));
                                arr_11 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) ^ (var_10)));
                                var_21 += ((/* implicit */unsigned short) min((min(((((_Bool)0) ? (var_8) : (((/* implicit */int) var_3)))), (var_8))), (min((((/* implicit */int) max((arr_8 [i_2]), (((/* implicit */unsigned short) var_0))))), ((~(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (-(min((arr_6 [i_5]), (((/* implicit */unsigned int) var_17))))));
                                arr_26 [i_6] [i_5] [i_6] = ((/* implicit */short) (((+(((/* implicit */int) (signed char)-2)))) - (((/* implicit */int) min((arr_7 [i_5 + 1] [(unsigned short)13] [i_5 - 3] [i_5] [i_7 + 3] [i_7]), (((/* implicit */short) arr_19 [i_5])))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1535250110515649452ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-90909075280566974LL)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25296))) : (var_4))))))))));
                }
            } 
        } 
    } 
}
