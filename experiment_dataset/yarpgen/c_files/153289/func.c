/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153289
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
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (_Bool)0));
        var_12 = ((/* implicit */unsigned long long int) (-(4294967292U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [(signed char)5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */short) ((4294967292U) <= (4294967294U)))), (((short) max((var_9), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0])))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((972444824U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0 + 3] [i_0]))))) ? (((/* implicit */long long int) (-(arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_2)) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))), (((/* implicit */long long int) ((arr_0 [i_0] [i_1 + 2]) ^ (((/* implicit */int) arr_8 [i_1] [(signed char)8] [i_1 + 2] [(signed char)10])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [(short)13])) : (((/* implicit */int) ((_Bool) var_3)))));
            var_14 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_3] [i_4])) : (((/* implicit */int) arr_11 [i_3] [i_4]))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) ((unsigned short) arr_13 [i_3])))));
        }
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            arr_26 [i_8] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3322522488U)) ? ((~(arr_14 [i_8] [(short)12] [i_3]))) : (((/* implicit */int) arr_11 [i_5 + 1] [i_5]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1]))) : (0U))))));
                            arr_33 [3] [3] [i_3] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (arr_32 [i_3] [i_3] [i_5 + 1] [i_9] [i_10]) : (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_5] [i_6] [(signed char)19] [i_10])) * (((/* implicit */int) arr_11 [(unsigned char)18] [i_6])))))));
                            arr_34 [i_3] [i_3] [i_3] [i_3] [(signed char)3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_5 - 1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) arr_25 [i_3] [i_5] [i_3]);
                var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3322522471U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0))));
            }
            arr_35 [i_3] [i_3] = ((/* implicit */_Bool) var_11);
            arr_36 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_20 [i_5 + 1] [i_5 + 1] [i_3] [i_5]) : (arr_20 [i_5 + 1] [i_5] [i_3] [i_3])));
        }
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_20 [i_3] [i_3] [i_11] [i_11]))));
            var_21 = ((/* implicit */unsigned short) ((short) arr_28 [(_Bool)1] [i_3] [(unsigned char)14] [i_3]));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (unsigned short)0))));
        }
        arr_41 [i_3] = ((/* implicit */unsigned char) arr_22 [i_3] [10] [i_3] [i_3]);
        arr_42 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) var_10))))) ? ((~(arr_32 [i_3] [i_3] [i_3] [i_3] [1U]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [15ULL] [(short)6] [(short)6] [i_3])) ? (arr_28 [i_3] [i_3] [i_3] [i_3]) : (arr_17 [i_3] [i_3] [(short)12]))))));
    }
    var_23 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((((/* implicit */int) var_6)) == (((/* implicit */int) var_5)))), (var_7)))), (((((/* implicit */_Bool) (unsigned char)19)) ? ((+(21U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_24 = ((/* implicit */unsigned char) (_Bool)0);
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_11))));
}
