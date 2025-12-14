/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117872
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_3] [(_Bool)1] = ((/* implicit */int) var_9);
                                arr_13 [i_0] [(_Bool)1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)0)), (((unsigned int) arr_5 [i_4] [i_1] [1ULL]))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1288120266) & (var_16)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-27677)) : (((/* implicit */int) (short)-26132)))) : (((/* implicit */int) max((var_2), (arr_9 [(unsigned char)6] [i_4]))))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
        var_21 ^= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1] [i_0] [12U]);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27677))) : (3145728U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_0]))))))))));
        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)188))))) ? (((((/* implicit */_Bool) -1472510244)) ? (5044556450919483979LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9441))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [(signed char)1]))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 -= ((/* implicit */unsigned int) ((int) arr_0 [i_5]));
        var_25 = ((/* implicit */_Bool) arr_11 [(signed char)16] [i_5] [i_5] [i_5] [i_5] [i_5]);
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_5 [i_5] [i_6] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_7 [i_5] [i_5] [i_5] [i_6])))));
            arr_18 [i_5] = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_5]));
        }
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_21 [i_7] [i_5] [(short)14] = (_Bool)1;
            arr_22 [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) ((_Bool) arr_16 [i_5]));
        }
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_26 [i_5] [(signed char)8] = ((/* implicit */signed char) 3145728U);
            arr_27 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_8] [i_5] [i_8] [(signed char)10] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_8]))) : (arr_11 [i_8] [18U] [i_5] [i_5] [i_5] [i_5])));
        }
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (7583694273800510599ULL))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((max((((/* implicit */int) (_Bool)1)), (var_14))) >= (((((/* implicit */_Bool) (short)-5473)) ? (((/* implicit */int) (short)27666)) : (((/* implicit */int) (signed char)-1)))))) ? (max(((~(arr_24 [i_9]))), (((/* implicit */int) (!((_Bool)1)))))) : (((int) max(((short)13268), (((/* implicit */short) (signed char)(-127 - 1)))))))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (signed char)111))));
        var_30 = ((/* implicit */short) ((unsigned int) (unsigned short)992));
        arr_30 [i_9] [i_9] = ((/* implicit */short) ((signed char) ((arr_25 [i_9] [i_9]) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))));
        arr_31 [i_9] = ((int) 763013180U);
    }
    for (long long int i_10 = 2; i_10 < 17; i_10 += 1) 
    {
        arr_35 [i_10] [i_10 + 1] = ((/* implicit */signed char) arr_9 [i_10] [(_Bool)0]);
        arr_36 [i_10] = max((((/* implicit */unsigned int) arr_4 [i_10])), (((1683679845U) % (3771408038U))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_10] [i_10])) != (arr_32 [i_10 + 1])))) % (((/* implicit */int) arr_6 [i_10] [(short)11]))))) ? (((/* implicit */int) arr_6 [i_10 - 2] [i_10 - 2])) : (((/* implicit */int) (short)-32641))));
        var_32 = ((/* implicit */int) arr_34 [(signed char)2]);
    }
    var_33 = ((/* implicit */long long int) var_16);
}
