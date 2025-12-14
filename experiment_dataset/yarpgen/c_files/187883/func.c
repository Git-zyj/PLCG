/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187883
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) (short)-3831);
                            arr_14 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_2] [i_3]);
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_17 [i_5] [i_0 + 1] [(unsigned short)12] [4LL] [i_1] [i_5] [i_1] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                            arr_18 [i_0] [i_1] [i_2] [i_2] [8LL] = ((/* implicit */signed char) (+(arr_8 [i_0])));
                            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_2))));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] = arr_11 [i_0];
                        }
                        arr_20 [i_0] [i_0] [4LL] [i_3 + 1] [i_0] [i_3] = ((/* implicit */int) ((long long int) arr_16 [i_3 + 2] [(unsigned short)10] [i_3 - 1] [i_3 + 2] [i_3]));
                        var_12 = ((/* implicit */int) ((short) 340495836U));
                    }
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (arr_12 [i_1]))))) > (arr_10 [i_1] [i_1] [i_0 + 1] [i_0] [i_0])))))))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (arr_15 [i_0] [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 1]) : (arr_15 [10] [10] [i_0 + 1] [i_0 + 1] [i_0 + 2]))) > (((/* implicit */unsigned long long int) (+(12)))))))));
                    var_15 ^= ((/* implicit */long long int) (-(max((arr_1 [i_0] [i_2]), (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) 416189775186852080LL);
                                arr_29 [10ULL] [i_1] [i_1] [10LL] [i_0] [(unsigned short)10] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_3)), (((long long int) var_10)))), (((/* implicit */long long int) max((((/* implicit */int) var_3)), (((int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) + (min((var_9), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)22))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) | (((/* implicit */int) ((((/* implicit */int) var_1)) > (((int) 562949952372736LL)))))));
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
}
