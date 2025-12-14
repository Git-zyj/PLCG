/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170682
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [10ULL])) <= (min((((unsigned long long int) 2811578776918878085ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_1)))))))));
                            var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)58734)));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) -1180845861))));
                var_14 = var_3;
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        {
                            var_15 = ((((/* implicit */int) max((max((arr_1 [i_4] [i_5]), (arr_1 [i_0] [i_4]))), (max((var_3), (((/* implicit */unsigned short) var_7))))))) & (((/* implicit */int) min((arr_8 [i_1] [1] [i_5 - 1] [i_5 + 2]), (arr_8 [i_5 + 4] [(unsigned char)6] [i_5 + 2] [i_5 - 1])))));
                            var_16 |= ((/* implicit */unsigned char) arr_12 [i_4]);
                            var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((arr_13 [i_5] [i_5] [(unsigned char)3] [i_5 + 2] [i_5] [i_5 + 2]), (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (arr_15 [i_5] [i_1] [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((max((min((((/* implicit */int) (short)-2892)), (var_5))), (((/* implicit */int) var_2)))) << (((((((/* implicit */int) (unsigned char)211)) + (((/* implicit */int) (unsigned char)2)))) - (198))));
    var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
}
