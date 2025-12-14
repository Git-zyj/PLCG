/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127100
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */short) var_10);
                arr_5 [i_0] [i_0 - 3] [i_1] = max((((arr_3 [i_0 - 1] [i_1] [i_1 - 1]) * (var_1))), (max((((((/* implicit */_Bool) var_6)) ? (1380327192U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_7)))));
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_0 [i_1 + 1])), (arr_2 [i_1 - 1])))), (max((((/* implicit */unsigned int) var_8)), (2914640106U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (2914640104U)))) : (-5583895312646159721LL)))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] [(signed char)19] [i_2] [i_2] [24U] [(_Bool)1] = ((/* implicit */short) max((((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_11 [i_2] [i_3] [i_4])))), (((/* implicit */int) min((((/* implicit */short) var_2)), (arr_11 [i_2] [i_2] [i_2]))))));
                            arr_19 [i_2] [(short)3] = ((/* implicit */_Bool) ((max((0U), (((/* implicit */unsigned int) var_6)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
                arr_20 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) -5583895312646159721LL);
            }
        } 
    } 
    var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
}
