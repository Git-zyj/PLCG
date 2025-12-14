/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179707
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_1)), (var_11))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max((var_14), (min(((~(var_1))), (((/* implicit */unsigned int) arr_3 [i_0] [i_3 - 2] [i_3]))))));
                            var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-570897238)))) : (max((((/* implicit */unsigned long long int) (!(var_7)))), (max((arr_1 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_8))))))));
                            arr_12 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (signed char)-35)) ? (2097151) : (0)))));
                            var_16 |= ((/* implicit */signed char) (-((+(((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [15LL] [9LL]))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) var_4);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]);
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_6 [i_0] [i_5 + 1] [i_4] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) var_8);
                                arr_30 [i_10] [i_9] [i_8] [i_7] [i_7] [14ULL] [i_6] = var_4;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    for (short i_12 = 1; i_12 < 15; i_12 += 2) 
                    {
                        {
                            var_21 *= ((unsigned int) 0U);
                            arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_7))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) var_4);
            }
        } 
    } 
}
