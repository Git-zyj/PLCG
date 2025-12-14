/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177750
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1696929337)), (max((3221225472U), (((/* implicit */unsigned int) (_Bool)1))))))), (((1619498299502185364ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8296)))))));
                    arr_10 [i_0] [i_0] [i_0] [8LL] |= ((((((((/* implicit */_Bool) (short)27832)) ? (((/* implicit */int) (short)27832)) : (((/* implicit */int) (_Bool)1)))) * (((arr_2 [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0] [i_0])))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (5497380286448119476LL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        for (short i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_13 *= arr_21 [i_3] [i_4] [i_6] [i_7];
                                arr_25 [i_5] = ((/* implicit */_Bool) ((long long int) (~(arr_17 [i_5] [i_5 + 1] [i_5] [i_5 + 1]))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_3] [i_4] [i_4] [i_3 - 1]))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3] [(short)14] [i_3] [i_4 - 2])) | (((/* implicit */int) arr_13 [i_3] [i_4] [i_3]))))) <= (max((((/* implicit */long long int) arr_6 [i_3] [i_4])), (-5497380286448119485LL)))))), ((short)14301))))));
            }
        } 
    } 
}
