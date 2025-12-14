/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114914
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
    var_14 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_15 = 1756274915;
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0])) + (((/* implicit */int) arr_5 [(short)16])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))))));
                    }
                    var_17 = ((/* implicit */short) min(((~((+(((/* implicit */int) arr_1 [i_2])))))), (((/* implicit */int) ((signed char) ((_Bool) 3313361445U))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((unsigned int) 3313361445U));
                                arr_15 [(short)5] [i_1] [i_4] [11LL] [i_5] = ((((/* implicit */long long int) ((((/* implicit */int) (short)-12718)) & (((/* implicit */int) var_13))))) | (((min((arr_2 [i_1]), (((/* implicit */long long int) 981605846U)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 631817505430939646LL)) ? (arr_11 [i_0] [(short)7] [i_4] [i_5]) : (((/* implicit */int) arr_7 [i_0 - 2]))))))));
                                var_19 = ((long long int) ((((/* implicit */_Bool) (unsigned short)10866)) ? (min((arr_2 [i_0]), (5936121173171038909LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5])))));
                                var_20 = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_5] [19ULL])) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29796))))), (((/* implicit */unsigned int) ((short) var_3))))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_7 [(unsigned short)10])))), (((/* implicit */int) min(((short)-25522), (arr_14 [i_0 - 1] [i_1] [(unsigned short)14] [(unsigned char)1] [i_5])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
