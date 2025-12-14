/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103611
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
    var_12 = ((/* implicit */_Bool) (+((~((~(var_1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~((+((+(((/* implicit */int) arr_0 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (~((-((+(((/* implicit */int) arr_7 [i_2] [i_1] [i_2] [i_3]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_3] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) (~((~((+(var_1)))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~((+((+(((/* implicit */int) (short)-30422)))))))))));
                            arr_18 [i_0] [i_3] = ((/* implicit */long long int) (+((~((+(var_3)))))));
                            var_14 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) arr_8 [i_4 - 1] [i_2]))))))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+((+((+(-1204306349))))))))));
                            var_16 = (~((+((~(((/* implicit */int) var_11)))))));
                            var_17 = ((/* implicit */int) max((var_17), ((+((~((+(((/* implicit */int) arr_2 [i_2]))))))))));
                            arr_21 [i_3] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_3] [i_5])))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_1] [10ULL] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+((~((+(var_5)))))));
                            var_18 = ((/* implicit */short) (~((+((+(var_9)))))));
                            arr_25 [i_0] [1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) arr_20 [i_6] [i_3 + 1] [i_2] [i_0]))))))));
                        }
                        arr_26 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) (~((~((~(var_1)))))));
                    }
                    var_19 = ((/* implicit */_Bool) (~((+((+(var_3)))))));
                }
                var_20 = ((/* implicit */long long int) min((var_20), ((-((+((-(arr_13 [i_0])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~((~((~(((/* implicit */int) var_0)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        arr_29 [i_7] = (~((~((~(arr_28 [i_7] [5]))))));
        arr_30 [i_7] = ((/* implicit */unsigned short) (+((~((~(0ULL)))))));
    }
}
