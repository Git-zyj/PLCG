/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165895
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [14LL] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)41050)) * (((/* implicit */int) (short)-30771))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 += ((((/* implicit */_Bool) (-(arr_12 [i_1 - 3] [i_0 + 1])))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [17U])) ? (arr_0 [i_0 - 1] [i_0]) : (arr_0 [i_0] [i_4]))))) : ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24467))) > (arr_2 [1ULL] [i_3])))))));
                                var_15 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [(signed char)12]))))))) - (((/* implicit */int) ((signed char) arr_3 [i_1 + 1])))));
                                var_16 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (unsigned short)41050)))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 - 2]))));
            }
        } 
    } 
    var_18 = var_1;
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) ((arr_16 [i_5] [i_5 - 2]) / (max((arr_17 [i_6 + 2] [i_5 - 1]), (arr_17 [i_6 + 2] [i_5 + 1])))));
                arr_18 [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6 + 1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_12);
}
