/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138347
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
    var_18 = var_11;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_1 + 2] [i_1 + 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3227783096U)))))))) << (((((arr_4 [(short)1] [i_1 - 1] [i_0]) >> (((arr_4 [i_1] [i_1 - 1] [i_1 - 1]) - (2600350713U))))) - (158681U)))));
                arr_6 [i_1] = ((/* implicit */unsigned char) (~((-(1067184200U)))));
                var_19 = ((unsigned int) (~((+(3227783118U)))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [4U]))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)25651)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (3227783097U)));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_22 [i_5] [i_3] [i_6 + 2] [i_4] [i_6 + 3] = ((/* implicit */signed char) arr_4 [(unsigned char)11] [i_3] [i_4]);
                                var_21 -= min(((-(arr_0 [i_2 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)26113)) : (((/* implicit */int) (unsigned char)0))))) <= (((unsigned int) var_3))))));
                                var_22 = ((/* implicit */short) max((arr_16 [i_2 - 1] [i_6 + 2] [i_6 - 2]), (arr_16 [i_2 + 2] [i_6 - 1] [i_6 - 2])));
                                var_23 = ((/* implicit */unsigned int) ((short) (+(arr_17 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
