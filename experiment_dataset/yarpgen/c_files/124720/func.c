/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124720
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [23U] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0]);
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_1 - 3]) : (arr_0 [i_1 - 3]))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), ((short)-25941)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) (+(((/* implicit */int) max((var_7), (((/* implicit */short) ((((/* implicit */int) (unsigned short)26482)) == (((/* implicit */int) var_7))))))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */short) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((/* implicit */int) var_8)) / (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_2])) < (((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [1]))) | (arr_6 [(unsigned short)16] [i_0] [(unsigned short)3] [i_1 + 1]))))));
                        arr_17 [12LL] [i_2] [i_1 - 4] [i_0] = ((/* implicit */signed char) arr_11 [i_5]);
                        arr_18 [i_5] [i_2] [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_5] [i_5] [i_2 - 3]);
                    }
                }
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    var_18 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 23; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        {
                            arr_28 [i_6 + 2] [i_7] [i_8] [i_7] = ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) 411461675U))));
                            var_19 = ((/* implicit */short) 3271346051U);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), ((-(arr_19 [i_6 + 2])))));
            }
        } 
    } 
    var_21 = var_8;
}
