/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15378
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
    var_15 = ((/* implicit */short) min((((/* implicit */int) (signed char)37)), (min((((var_4) ? (1794948668) : (((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1] [i_2] [i_3]);
                                var_17 *= ((/* implicit */unsigned long long int) 147687901);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */int) min((arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]), ((_Bool)0)))) ^ (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])))), ((~(arr_0 [i_1 - 1] [i_2]))))))));
                    arr_13 [15U] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? ((~(arr_0 [i_1 + 1] [i_2]))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)151)))))));
                    var_19 *= ((/* implicit */unsigned char) ((arr_7 [i_0 + 1] [i_1 + 1] [3] [i_1 + 1]) ? ((+(((/* implicit */int) (_Bool)1)))) : (((arr_7 [i_0 - 1] [i_1 - 1] [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] = ((/* implicit */unsigned int) (unsigned char)6);
                                var_20 -= ((/* implicit */_Bool) -1704670362);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 1987336971))));
}
