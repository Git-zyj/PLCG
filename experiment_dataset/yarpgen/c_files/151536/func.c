/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151536
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */unsigned int) var_5)) + (var_9))) % (max((((/* implicit */unsigned int) var_10)), (var_6)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_12 = ((short) var_1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) * (((/* implicit */int) var_2)))) % (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_1)))))));
                            var_13 = ((var_9) | (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) (short)27145))))));
                            arr_16 [i_0] [i_1] [i_0] [(short)11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) var_9)))))) | (((var_0) ^ (var_0)))));
                        }
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 31457280U)))) ^ (min((var_9), (((/* implicit */unsigned int) var_2))))))) & (((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) ((short) var_10));
                        var_16 = ((/* implicit */unsigned int) ((short) var_8));
                        arr_19 [i_0] = ((/* implicit */signed char) var_4);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_0] [i_1 - 2] [i_2] [(unsigned short)2] [i_2] = ((/* implicit */signed char) var_7);
                        var_17 += ((/* implicit */unsigned int) ((short) min((4272459358U), (((/* implicit */unsigned int) var_10)))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_8))));
                    }
                    var_19 += ((/* implicit */signed char) var_4);
                    arr_23 [i_0] = max((((short) var_10)), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_0)))) || (((/* implicit */_Bool) var_5))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (var_7)));
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_34 [i_7] [i_7 - 1] [i_7] [i_10] = ((/* implicit */long long int) max((var_10), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) | (var_9)))) <= (((var_4) / (((/* implicit */long long int) var_9)))))))));
                            arr_35 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) var_8);
                            arr_36 [i_10] [(short)15] [i_9] [i_10] = ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned long long int) ((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (var_0))));
                            arr_37 [10ULL] [3U] [i_10] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                var_21 *= ((/* implicit */unsigned short) var_2);
                arr_38 [i_7] = ((unsigned long long int) 4263510026U);
            }
        } 
    } 
}
