/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145629
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
    var_11 = var_3;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1] [(short)17] [(short)17])))));
                                var_13 |= ((/* implicit */signed char) (((_Bool)1) ? (max((((/* implicit */int) (signed char)125)), (1831183465))) : (((/* implicit */int) (signed char)125))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_17 [16LL] [i_7] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)125))))));
                                var_14 ^= ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_4 [i_7])) ? (arr_2 [i_1] [i_1] [i_6 + 1]) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5])))))))));
                            }
                        } 
                    } 
                } 
                var_15 *= ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [(short)16] [(short)16] [10LL] [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))) != (min((1831183465), (1089346048)))))) != (max((((arr_2 [i_0] [(signed char)13] [(short)13]) & (((/* implicit */int) (short)-29663)))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
}
