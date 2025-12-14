/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167738
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2] [i_1])))))))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-22349)) && ((_Bool)1)))) <= ((~(((/* implicit */int) (short)22329)))))))));
                                var_13 = ((/* implicit */_Bool) max((var_13), ((!(((/* implicit */_Bool) (short)-22349))))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */unsigned int) (!((_Bool)0)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2 + 1] [i_5] [i_6 + 1]);
                                arr_16 [i_6] [i_1] [i_2 - 1] [i_5] [i_6 + 1] = ((/* implicit */unsigned char) 2330562444U);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] = ((/* implicit */short) ((int) arr_13 [i_1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2]));
                    arr_18 [i_0] = ((/* implicit */unsigned short) -1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            {
                arr_23 [i_7] [i_7] [i_7] = ((/* implicit */int) (((~((~(arr_9 [i_7] [i_8 + 1] [i_8 + 1] [i_8]))))) ^ ((~(-6993621120805923513LL)))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_19 [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_8 - 1] [i_8 - 1] [i_8 + 1]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_7);
}
