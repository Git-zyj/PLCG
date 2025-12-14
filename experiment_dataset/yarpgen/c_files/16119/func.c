/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16119
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_5))))), ((~(((/* implicit */int) var_9))))));
                                arr_12 [i_0] [i_0] [i_1] [i_4] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_4])) - (((/* implicit */int) ((_Bool) ((var_7) >= (var_11)))))));
                                var_14 |= ((/* implicit */unsigned int) var_10);
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)117)) ? (2319002712U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6))))) ? (min((((/* implicit */unsigned int) (unsigned short)27905)), (((0U) & (32505856U))))) : (((/* implicit */unsigned int) ((int) (((_Bool)1) ? (499309902U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (arr_14 [i_0] [i_1] [i_2] [i_5]))), (((/* implicit */unsigned int) arr_9 [i_0] [i_5] [i_2] [i_0] [i_0])))) - (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) 1U)) || (var_3)))), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_0))))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_2] [i_5] [i_6])))) : (((/* implicit */int) ((max((4262461440U), (((/* implicit */unsigned int) (_Bool)1)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) -780487568682524375LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))));
                                var_18 = ((/* implicit */unsigned short) arr_1 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 += arr_24 [i_0] [i_1] [i_2] [i_7] [i_8] [i_7];
                                var_20 = ((/* implicit */int) ((short) ((_Bool) (!(((/* implicit */_Bool) var_2))))));
                                var_21 = ((((((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27905))) : (var_7))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)23300))))) * (min((((((/* implicit */_Bool) arr_23 [i_7] [i_0] [i_0] [i_2] [i_8])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))), (((/* implicit */unsigned int) ((int) var_0))))));
                                var_22 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) ((unsigned int) var_7))))));
                                arr_26 [i_0] [i_8] [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_4);
}
