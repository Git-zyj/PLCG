/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129488
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
    var_12 = ((/* implicit */int) (~(max(((-(var_9))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)124)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_13 &= ((/* implicit */unsigned int) var_11);
                            var_14 = ((/* implicit */int) arr_0 [i_3]);
                            var_15 = ((/* implicit */unsigned char) -1153456112765208330LL);
                            var_16 = ((/* implicit */unsigned int) -226387702);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max(((~(arr_5 [i_5] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)51293)))) != (((/* implicit */int) arr_13 [i_0] [i_4] [i_5] [i_1] [i_5] [i_1])))))));
                            var_18 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) max((arr_13 [i_0] [i_5] [i_4] [i_5] [i_0] [i_1]), (((/* implicit */unsigned short) (unsigned char)157)))))))));
                        }
                    } 
                } 
                arr_15 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */int) var_9);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_7] = ((/* implicit */unsigned char) (((+(arr_9 [i_7 - 1]))) << (((1903126167U) - (1903126167U)))));
                            var_19 = 9845244776883203650ULL;
                            var_20 *= ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
}
