/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177575
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
    var_11 = ((/* implicit */short) var_4);
    var_12 = ((/* implicit */short) ((long long int) var_5));
    var_13 = ((((/* implicit */int) var_1)) << (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_4])), (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4])))) / (arr_4 [i_0 + 2] [i_1] [i_1]))), (arr_4 [i_0] [i_1] [i_2]))))));
                                arr_12 [i_1] [i_2] [4U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))) + (max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])), (arr_5 [i_2] [i_3] [i_4]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (arr_6 [i_1] [i_2] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1])))) | (((arr_5 [i_0 + 1] [i_0 - 2] [i_1]) & (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_21 [i_1] &= ((/* implicit */long long int) ((3790898652U) <= (19U)));
                                arr_22 [i_0] [(short)12] [i_1] [i_1] [i_5] [i_6] [(short)12] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_10 [i_0])) - (((((/* implicit */int) (short)-26961)) - (580928745)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
