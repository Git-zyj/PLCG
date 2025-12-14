/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146641
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
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) >= (min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) (unsigned char)131))))), (((var_7) + (var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_12 *= arr_1 [i_0 + 2];
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                arr_8 [10U] = ((_Bool) ((unsigned long long int) var_10));
                var_13 = ((/* implicit */unsigned int) arr_6 [i_0]);
            }
            for (int i_3 = 3; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_4 = 4; i_4 < 18; i_4 += 2) 
                {
                    arr_15 [i_4 - 3] [8] = (~(var_0));
                    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) & (arr_3 [i_4 - 3])));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        arr_19 [i_5] = ((/* implicit */unsigned long long int) 0);
                        var_15 -= ((/* implicit */short) ((int) arr_11 [i_3 - 3] [i_0 + 1] [i_4 - 3] [i_5]));
                        var_16 = ((((/* implicit */int) ((((/* implicit */int) (short)0)) > (arr_9 [i_0] [i_0] [i_0])))) >> (((((/* implicit */int) (short)32767)) - (32748))));
                    }
                    arr_20 [i_0] [(short)14] [i_0] [i_4 + 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                }
                for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                {
                    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1))))));
                    arr_24 [i_3] [i_3] [i_3] [i_6] = var_0;
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_5))) + (2147483647))) << ((((((~(((/* implicit */int) var_2)))) + (300))) - (5)))));
                    arr_25 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */int) ((_Bool) (_Bool)0));
                }
                for (short i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (+(arr_23 [i_7] [i_8] [i_8] [i_0 - 1])));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) + ((-(arr_10 [i_3])))));
                        arr_31 [i_8] [i_8] [(unsigned char)3] [i_8] [i_8] = ((/* implicit */_Bool) arr_0 [i_0]);
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_0] [i_3])));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (1072693248U)));
                    }
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_4))));
                        arr_36 [i_0] [i_0] [i_3 + 2] [i_9] [i_9] = var_8;
                    }
                }
                for (int i_10 = 1; i_10 < 16; i_10 += 3) 
                {
                    arr_39 [i_1] [i_1] [i_1] = ((/* implicit */short) ((int) (_Bool)1));
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (short)32762)))));
                    arr_40 [i_0] [i_1] [i_3] [i_10] [i_10 + 1] |= ((/* implicit */short) ((var_6) << (((((/* implicit */int) var_10)) - (9886)))));
                    arr_41 [i_3] [i_3] [i_0] [i_0] &= ((/* implicit */_Bool) -879684674);
                }
                arr_42 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_2))));
            }
            arr_43 [i_1 + 1] = ((/* implicit */short) var_6);
            var_25 = ((/* implicit */short) var_8);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~(((/* implicit */int) var_9)))))));
            var_27 += ((/* implicit */unsigned int) arr_33 [14] [14] [14] [2]);
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 24; i_11 += 1) 
    {
        arr_47 [i_11] = ((/* implicit */long long int) arr_44 [i_11 - 3]);
        var_28 *= ((/* implicit */_Bool) var_6);
        var_29 = ((/* implicit */_Bool) 1275148201);
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)0))) ^ (((/* implicit */int) var_9))));
}
