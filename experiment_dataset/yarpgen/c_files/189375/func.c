/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189375
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((unsigned long long int) (short)56)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_7))))), (min((var_6), (var_6)))))))));
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) * (((/* implicit */int) (short)9685)))) - (((/* implicit */int) (short)-10293))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 += ((/* implicit */short) ((unsigned char) arr_1 [i_0] [i_0]));
        var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (((unsigned long long int) arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_14 [i_4] [i_3] [i_1] [i_1]);
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((min((arr_15 [i_1] [i_1] [(short)15] [i_5]), (var_1))), (min((var_1), (((/* implicit */unsigned short) var_9))))))), (max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((unsigned char) var_2))))))))));
                                arr_18 [i_3] = ((/* implicit */long long int) min((((((/* implicit */int) arr_16 [i_3 + 3] [i_3 - 3] [i_3 - 1] [i_3 - 2] [i_3 - 1])) << (((((/* implicit */int) var_1)) - (57223))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) min((max((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_3])))), (arr_11 [i_2])))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) ((unsigned char) arr_9 [i_1] [i_2] [i_2] [i_3]))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (long long int i_7 = 4; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((max((8963637870428545516LL), (((/* implicit */long long int) (unsigned char)22)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_14 [i_1] [i_1] [i_1] [i_6])), (arr_24 [i_7] [i_6] [i_3] [i_2] [i_7])))) && (((/* implicit */_Bool) arr_23 [i_3 - 3] [i_3 - 1] [i_7])))))));
                                var_20 = ((/* implicit */short) arr_15 [i_1] [i_3] [i_6] [i_6]);
                                arr_25 [i_1] [i_2] [i_2] [i_2] [i_7] [i_7 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_15 [i_3 + 2] [i_3 - 2] [i_3 - 2] [i_3 - 2]), (arr_15 [i_3] [i_3 - 2] [i_3 - 1] [i_3 + 3])))), (min((arr_6 [i_3] [i_3 - 3] [i_3]), (((/* implicit */long long int) var_3))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_1] = ((/* implicit */int) arr_24 [14ULL] [i_3 - 3] [i_3] [0] [i_3 - 3]);
                    var_21 += ((/* implicit */short) ((unsigned long long int) max((arr_17 [i_1] [i_3 + 3] [i_1] [i_3 - 1] [i_1] [i_2] [i_3 + 2]), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [8LL]))));
                }
            } 
        } 
        arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) max((min((10401013705494734794ULL), (((/* implicit */unsigned long long int) 1666876023)))), (((/* implicit */unsigned long long int) ((short) (short)59))))));
        var_22 = ((/* implicit */unsigned char) min((520895234595478257ULL), (((/* implicit */unsigned long long int) ((short) var_6)))));
        var_23 *= ((/* implicit */unsigned long long int) max((((max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_9)))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_24 [(unsigned char)18] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) var_7)))))))), (((/* implicit */long long int) var_0))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((unsigned short) -1666876023));
}
