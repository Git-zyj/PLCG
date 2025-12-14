/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137312
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
    var_15 ^= ((/* implicit */long long int) var_4);
    var_16 = ((/* implicit */long long int) ((_Bool) var_5));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) min((-659091007), (((/* implicit */int) (_Bool)0))))) || (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) max((var_2), (var_11)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((short) ((long long int) arr_0 [i_0]))))));
        var_19 = ((_Bool) ((unsigned short) arr_0 [i_0]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */short) (+(((unsigned long long int) (unsigned char)50))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (short i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        {
                            arr_15 [16] [16] [(short)18] [i_2] [(unsigned short)12] = ((/* implicit */short) ((_Bool) (((_Bool)1) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]))))));
                            arr_16 [i_2] [i_2] [0] [i_2] [i_2] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) ((unsigned int) (short)32766))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (arr_2 [i_4 + 1] [i_3]));
                        }
                    } 
                } 
                var_22 |= ((/* implicit */unsigned char) ((unsigned short) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_8))));
            }
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
            {
                arr_20 [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551588ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0]))))) : ((+(arr_14 [i_0] [i_0] [i_0] [i_0] [3])))));
                arr_21 [i_0] [i_1] [i_5] |= ((unsigned long long int) ((unsigned short) 4294967295U));
                var_23 = ((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_5]);
            }
        }
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_24 = (-(((((/* implicit */_Bool) (unsigned short)40099)) ? (((arr_8 [i_0] [i_0] [(short)6] [i_6 - 1]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_6]))))));
                var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_25 [(unsigned char)11] [i_6] [i_7])))), ((~(((/* implicit */int) arr_4 [i_6] [i_7]))))))), (((unsigned long long int) ((((/* implicit */_Bool) 1476831211)) ? (((/* implicit */int) arr_13 [i_0] [i_6] [i_0] [i_6] [i_0] [i_7] [i_7])) : (((/* implicit */int) arr_23 [i_6] [i_6])))))));
                var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(arr_6 [i_6 - 1] [i_6 - 1])))), (((((/* implicit */_Bool) arr_12 [i_0] [i_6 - 1] [i_6 - 1] [i_0] [i_0])) ? (arr_12 [i_0] [i_6] [12ULL] [i_7] [i_7]) : (arr_12 [(short)11] [i_6] [i_6 + 1] [i_7] [i_7])))));
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_31 [i_6] = ((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_6] [i_8] [i_6] [i_8] [i_6] [i_8]));
                /* LoopSeq 1 */
                for (int i_9 = 3; i_9 < 19; i_9 += 3) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_6 + 1]))));
                    arr_34 [i_9 - 2] [i_6] [i_6] [(unsigned short)10] |= arr_8 [i_0] [i_6] [i_8] [(_Bool)1];
                    var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_26 [i_6 + 4] [i_6 + 2] [i_9 - 2]))));
                    arr_35 [i_0] [(short)10] [i_6] [(short)10] [i_0] &= (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551592ULL))))));
                }
            }
            var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((short) arr_3 [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [15U] [i_0]))) : ((-(arr_2 [i_6 - 1] [1U])))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned char) 30ULL);
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (unsigned int i_12 = 2; i_12 < 9; i_12 += 3) 
            {
                {
                    var_30 = ((/* implicit */int) max((var_30), ((-(min((arr_14 [15U] [i_11] [i_12] [i_12 + 2] [i_11]), ((~(((/* implicit */int) arr_33 [7U]))))))))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_18 [i_10 + 1] [i_10] [i_11] [i_12 - 2]))));
                    var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) var_6))))) - (((unsigned int) arr_11 [i_10] [i_10 + 1] [i_10]))));
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
    {
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned char) (_Bool)0);
        var_33 = ((/* implicit */unsigned long long int) (-((+(((long long int) -7832916455569334975LL))))));
        var_34 = (+(((/* implicit */int) (_Bool)1)));
    }
}
