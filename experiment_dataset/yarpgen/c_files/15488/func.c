/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15488
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0]));
        arr_4 [6ULL] [i_0] = ((/* implicit */int) var_14);
        var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (3675111783616512789ULL)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 2045963732))));
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)254))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 6; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((arr_19 [i_5] [i_5] [i_5 + 2] [i_5]) & (((/* implicit */unsigned long long int) arr_13 [i_3]))));
                        arr_21 [2ULL] [i_4] [i_3] [i_6] [(short)3] [2ULL] = ((/* implicit */unsigned char) ((((var_15) ? (arr_20 [i_3] [i_3] [i_3] [(short)7]) : (var_1))) << (((((/* implicit */int) var_17)) - (36079)))));
                    }
                } 
            } 
            var_23 ^= ((/* implicit */unsigned long long int) (!(((-1619501267451261765LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35522)))))));
            var_24 &= ((/* implicit */unsigned short) arr_10 [i_3] [i_4]);
        }
        for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 4) 
        {
            arr_24 [i_3] [3] [i_3] = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_0)))) + (2147483647))) >> (max((((/* implicit */unsigned long long int) (_Bool)1)), (16ULL)))));
            arr_25 [4U] [i_7] [i_7] |= ((/* implicit */unsigned int) arr_14 [4]);
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                var_25 = ((/* implicit */int) ((_Bool) var_11));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 2; i_10 < 7; i_10 += 1) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_13))))));
                            arr_33 [0] [i_7] [i_8] [i_9] [i_3] = ((/* implicit */signed char) (-(arr_19 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2])));
                            var_27 = ((/* implicit */int) max((var_27), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_31 [i_7 + 1] [i_7] [i_7] [i_9] [i_10])))) - (((/* implicit */int) max((arr_6 [i_7 + 1] [(short)14]), ((short)18305))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) (-((-(((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) 3707469148U))))) ? (((/* implicit */unsigned int) var_16)) : ((~(var_4)))))));
                            arr_40 [i_3] [i_3] = ((/* implicit */unsigned int) ((14771632290093038827ULL) << (((((arr_23 [i_8]) + (2147483647))) >> (((1780959282) - (1780959255)))))));
                            var_29 *= ((/* implicit */unsigned short) (-(arr_10 [i_8] [i_11])));
                            var_30 = ((/* implicit */int) max((var_30), ((-(max((((int) (unsigned short)26214)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)39417)) : (((/* implicit */int) (signed char)-125))))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) var_5);
            }
            for (int i_13 = 1; i_13 < 7; i_13 += 1) 
            {
                var_32 ^= ((/* implicit */int) (~(var_1)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_14 = 3; i_14 < 8; i_14 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_42 [i_7 + 1] [i_13 + 1] [i_13 + 1] [i_14 + 1]))));
                    var_34 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_43 [i_14] [i_7 - 1] [i_7])))));
                }
            }
            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) min((var_16), (var_16)))))));
        }
        arr_46 [i_3] = ((/* implicit */short) var_6);
        arr_47 [(signed char)8] &= ((/* implicit */signed char) (unsigned char)214);
        arr_48 [i_3] = ((/* implicit */short) (~(((unsigned int) (unsigned short)26214))));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)26214)))));
    }
    var_37 = ((/* implicit */unsigned int) var_0);
    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_11))));
    var_39 = ((/* implicit */unsigned long long int) var_12);
}
