/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187682
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
    for (signed char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) + (arr_0 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (((arr_2 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))))))))));
                            var_13 |= ((/* implicit */short) arr_7 [i_0 + 3] [i_1] [i_2] [i_3 + 1] [i_3] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0]);
                            var_15 = ((/* implicit */short) max(((-((-(((/* implicit */int) (short)-24127)))))), (arr_6 [i_0] [i_0 - 1] [i_0] [i_0])));
                            arr_13 [i_0] [i_4] [i_1] [i_0] = ((unsigned char) max((arr_12 [i_0] [i_1] [i_4] [i_0 + 4] [i_5]), (arr_12 [i_1] [i_0 + 1] [i_0] [i_0 + 2] [i_5])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((short) (_Bool)1))) || (((/* implicit */_Bool) (short)-1)));
}
