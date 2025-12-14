/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116570
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
    var_18 *= ((/* implicit */_Bool) 1394908154762794668LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_19 ^= ((/* implicit */unsigned int) max((1394908154762794670LL), (((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)32768)))), (((/* implicit */int) var_13)))))));
                    arr_8 [i_0] [i_0] = arr_5 [i_0] [i_1] [i_2] [i_2];
                    arr_9 [i_0] [i_2] [(_Bool)1] |= arr_2 [i_1] [(signed char)12];
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((2108081364U), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_2] [i_3 - 2] [i_4])))))));
                                var_20 += ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_10)))) ? (arr_5 [i_0] [i_3 + 2] [i_2] [i_2]) : (min((((/* implicit */unsigned int) arr_11 [i_0] [i_2] [i_2])), (2108081371U)))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(short)3] [(unsigned short)6] [(signed char)11]))))))) - ((+(((/* implicit */int) arr_11 [i_3 - 1] [10LL] [i_2])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) (+(-7008311552741264057LL)));
                                arr_23 [i_0] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */unsigned short) min((((short) (signed char)-63)), (((/* implicit */short) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                                arr_24 [i_0] [i_0] [i_2] [i_5] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 2186885925U)) ? (7008311552741264080LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_14)), (var_3)))))))));
                                arr_25 [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)48))) / (arr_1 [i_5 + 2] [i_5 + 2])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (7008311552741264080LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_5] [7U]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-25))))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 1; i_7 < 13; i_7 += 4) 
                {
                    var_23 = ((/* implicit */short) ((signed char) (signed char)-41));
                    arr_28 [i_7] [i_0] [i_0] = ((/* implicit */_Bool) 3U);
                }
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_14 [i_0] [(unsigned short)7] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5)))) + (((/* implicit */int) (short)20083))))));
            }
        } 
    } 
    var_25 = var_7;
}
