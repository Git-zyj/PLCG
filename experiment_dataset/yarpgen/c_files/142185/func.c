/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142185
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                                var_12 -= ((/* implicit */int) min((((((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) >> (((var_4) + (351412279))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_7 [i_0] [i_0])))))));
                                var_13 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-16522)), (4180579042U)))), (max((562949953421311ULL), (((/* implicit */unsigned long long int) 679714178)))));
                                var_14 = ((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_3 [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) != (((/* implicit */int) (_Bool)1))))) >= ((~(((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) (_Bool)1)) : (-14)));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))) & (max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) <= (arr_0 [i_1]))))))) ? (max(((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : ((((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                var_16 = ((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_7)))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) var_2)))))));
}
