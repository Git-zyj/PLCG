/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17418
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)50)), (var_12)))))) + ((-(((/* implicit */int) (unsigned char)0))))));
                                arr_14 [4U] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)56)) <= (((/* implicit */int) (unsigned char)122)))))));
                                var_16 = ((/* implicit */int) (unsigned char)134);
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_3] [i_4])) ? (max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_8))))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)50)) ? (arr_3 [i_1 + 3]) : (arr_3 [i_1 - 1]))), (arr_3 [i_1 + 3])));
                    arr_15 [i_0] [i_1 - 1] = ((/* implicit */long long int) var_12);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_22 [i_2] |= ((/* implicit */unsigned long long int) ((_Bool) ((signed char) (unsigned char)16)));
                                arr_23 [i_0] = ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_2] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (+(arr_24 [i_1 - 1] [4LL] [i_2] [4LL] [i_7]))));
                                arr_29 [i_0] [i_0] [i_1 + 1] [(short)2] [i_1 + 1] [i_7] [(signed char)11] = ((/* implicit */unsigned char) max((((unsigned int) max((8003747305034261372LL), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0]))))), ((+(3286811267U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            {
                arr_35 [i_9] [i_10] = ((max((-7052916107968677194LL), (((/* implicit */long long int) (unsigned char)122)))) == (((/* implicit */long long int) ((/* implicit */int) var_8))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_34 [i_9] [i_10] [i_9]))))) * (((/* implicit */int) max((arr_34 [i_10] [i_10] [i_9]), (arr_34 [i_9] [i_10] [i_9]))))));
            }
        } 
    } 
}
