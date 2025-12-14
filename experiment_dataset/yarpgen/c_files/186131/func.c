/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186131
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), ((+(var_9)))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) 0U)) ? (1119711629U) : (3924446351U)))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((((/* implicit */_Bool) min((220352522U), (1523067036U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_0), (var_5))) == (((((/* implicit */_Bool) 988874726U)) ? (4294967295U) : (3924446356U))))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0] [i_0]))));
                var_16 = ((/* implicit */unsigned int) (((~(arr_10 [i_0] [i_0] [i_0] [i_1]))) != ((-(2164736136U)))));
            }
        } 
    } 
    var_17 = min((var_1), (max((((var_7) + (0U))), (((unsigned int) var_9)))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_4] = 2616594472U;
                    arr_22 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((3418428070U) != (1526342314U)));
                }
            } 
        } 
    } 
}
