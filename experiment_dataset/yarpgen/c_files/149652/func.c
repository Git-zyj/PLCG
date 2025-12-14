/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149652
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 6; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))), (((/* implicit */int) min((arr_10 [i_1 - 1] [i_2 + 1] [i_1] [i_3 - 2] [i_3]), (arr_10 [i_0] [i_1 + 2] [i_1] [i_3 - 3] [i_2 + 4]))))));
                            arr_12 [i_1] [i_1] [i_2 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_6)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_10 [3LL] [i_0] [i_1] [i_1] [i_3 - 1]))))) : (var_7))) | (arr_6 [3U] [i_0] [3U])));
                            var_19 += ((/* implicit */long long int) (~(9U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            arr_18 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 1] [i_4 + 2]);
                            arr_19 [i_1] [i_1] [i_1] [(short)4] = ((/* implicit */short) (+((-(((/* implicit */int) arr_2 [i_4 + 1] [i_1 + 1]))))));
                            var_20 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_1 - 1]))));
                        }
                    } 
                } 
                var_21 = (-(((var_17) * (((/* implicit */long long int) ((/* implicit */int) max(((short)-2559), (((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                arr_20 [i_1] [i_1 + 1] = ((/* implicit */short) arr_3 [i_1] [i_1]);
                /* LoopNest 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) arr_7 [i_1 - 2]);
                                arr_28 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_1] [i_1 + 2] [i_6 - 1] [i_7] [i_8])) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) <= (var_16)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) (-((-(((/* implicit */int) var_5))))));
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                {
                    var_24 += ((/* implicit */short) ((((/* implicit */int) arr_33 [i_9] [i_9] [i_11])) % (((/* implicit */int) ((short) 18446744073709551610ULL)))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) * (min((var_17), (((/* implicit */long long int) var_8))))));
                    var_26 = ((((9U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_10]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_10]))));
                    var_27 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
}
