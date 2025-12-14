/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187431
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 *= ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 3] [i_1 - 1])) << (((((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2] [i_0])) - (32556))))) % (((/* implicit */int) var_3))));
                            var_15 = ((/* implicit */short) arr_9 [i_0] [i_0]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) -1663775764)) <= (4294967271U))) ? (((((/* implicit */_Bool) arr_1 [i_4 - 4])) ? (arr_1 [i_4 - 2]) : (var_9))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (arr_1 [i_4 - 4]) : (arr_1 [i_4 - 1])))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4 - 1]))))) ? (((/* implicit */int) arr_8 [i_7])) : (var_9)));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 10U))))))) : (((((/* implicit */_Bool) arr_22 [i_4 + 1] [i_5] [i_6] [i_4 - 4] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) : (min((arr_15 [i_4] [i_4]), (((/* implicit */unsigned int) arr_0 [i_7] [i_5]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
