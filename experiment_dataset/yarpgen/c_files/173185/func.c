/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173185
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) - (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22521)))))));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_8 [i_1] [i_2] [i_1] = ((/* implicit */short) (unsigned short)14020);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_13 [i_1] [i_2] = (~(arr_7 [i_4] [i_3]));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)3370)) & (((/* implicit */int) (_Bool)1))));
                        var_18 ^= ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)51515))));
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            var_19 -= ((((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) + (((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1])));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_5))));
                        }
                        var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51515))) : (var_13)))));
                    }
                } 
            } 
        }
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [10] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [10LL] [i_1] [10LL] [(_Bool)1]))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(arr_11 [i_6 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_29 [i_6] [i_6] [i_6] [(short)7] [(short)7] [(short)3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_25 [i_6 - 1] [i_6] [i_6] [i_6 + 1]))));
                                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_6 + 1] [i_1] [(_Bool)1] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_27 [i_1] [i_6] [i_1] [i_6 + 1] [i_6] [i_9] [i_1]))))));
                                arr_30 [i_8] [i_8] [i_6] [i_8] [i_8] [i_8] [i_6] = ((/* implicit */unsigned short) arr_15 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]);
                            }
                        } 
                    } 
                    arr_31 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1757253010)) ? (((/* implicit */long long int) arr_21 [i_6] [i_6])) : (var_10)))) && (((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 2]))));
                    arr_32 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
        arr_33 [i_1] = arr_20 [i_1] [i_1] [i_1] [i_1];
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~((-(arr_15 [i_1] [(short)0] [i_1] [i_1] [i_1]))))))));
    }
    var_26 = ((/* implicit */long long int) max((max(((-(((/* implicit */int) (unsigned short)5108)))), (((/* implicit */int) (short)25656)))), (var_2)));
}
