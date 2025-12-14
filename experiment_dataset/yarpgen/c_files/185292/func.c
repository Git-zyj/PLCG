/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185292
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)104)) >> (((var_0) + (1098076507))))), ((~(((/* implicit */int) (unsigned char)38))))))) && (((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))));
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) (short)-1))));
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 += ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)62)), (arr_4 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)62)), (-8209817213469109513LL)))) > (min((((/* implicit */unsigned long long int) arr_11 [i_4] [i_3 - 2] [i_1] [i_1])), (var_8)))))));
                                var_15 |= ((/* implicit */signed char) (_Bool)1);
                                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2 - 1] [i_3 - 2] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4])) & (((/* implicit */int) arr_13 [i_2 + 1] [i_3 - 1] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))) ? (((/* implicit */unsigned long long int) (~(-2065161934)))) : (((arr_10 [i_3] [i_3]) >> ((((-(((/* implicit */int) (unsigned char)62)))) + (92)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1] [7];
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((611030270), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)12)) <= (((/* implicit */int) (signed char)-64)))))) >= (max((((/* implicit */long long int) var_11)), (var_5))))))));
}
