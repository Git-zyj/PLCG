/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124390
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((unsigned long long int) ((133693440U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1298737808)) && (((/* implicit */_Bool) (unsigned char)63)))))))));
                                arr_16 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((min((var_1), (((/* implicit */unsigned int) arr_11 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */int) ((arr_2 [i_1] [i_1 + 2]) != (max((((/* implicit */int) var_5)), (1298737784)))))) & (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? ((~(arr_3 [i_0] [i_0] [i_2]))) : (-1298737796))))))));
                    var_13 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) var_2);
                arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [(short)11] [i_6 + 4] [i_5])), (var_9)))) ? ((+(arr_0 [i_6 + 4]))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_5]))))));
            }
        } 
    } 
}
