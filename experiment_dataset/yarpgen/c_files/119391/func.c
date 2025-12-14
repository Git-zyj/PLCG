/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119391
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_0)))) - ((((-(((/* implicit */int) var_3)))) / (((((/* implicit */int) (unsigned char)224)) / (((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_8 [11] [i_0] [i_0] [i_2]), (arr_8 [i_0] [5LL] [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_1] [i_1] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3279689143U)))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((unsigned int) arr_8 [i_2] [i_1 + 1] [14] [i_1])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-107)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = (unsigned short)47742;
        var_15 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_3] [i_3]))));
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (short)12386)))));
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_4 + 2]))));
        var_17 += ((unsigned char) arr_14 [i_4 + 2]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-14585)) : (((/* implicit */int) arr_16 [i_4]))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_5))));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            arr_23 [i_5] |= ((/* implicit */unsigned char) arr_0 [i_5]);
            var_20 = ((/* implicit */short) min((var_20), ((short)-27134)));
            arr_24 [i_5] [i_6] [i_5] = ((/* implicit */signed char) 1130506736);
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned long long int) arr_10 [i_8])))));
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_7] [2ULL])) ? (((/* implicit */long long int) var_8)) : (arr_3 [i_5] [i_7] [i_8]))))));
            }
            arr_31 [i_5] [i_7] = ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27134))) * (var_1)));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(arr_30 [i_5] [i_5] [i_5]))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_21 [(unsigned char)7] [(unsigned char)8] [i_7]))));
        }
        for (short i_9 = 4; i_9 < 9; i_9 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) arr_7 [(unsigned char)6] [i_5] [i_9] [i_9])) : ((+(((/* implicit */int) (signed char)49))))))));
            var_26 &= ((/* implicit */short) min(((~(((/* implicit */int) arr_21 [i_5] [i_9] [i_5])))), (arr_1 [i_5])));
        }
        arr_34 [i_5] = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (unsigned char)252)))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        arr_37 [i_10] [i_10] = ((/* implicit */unsigned long long int) (unsigned char)3);
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_35 [i_10] [i_10]))));
    }
}
