/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103152
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
    var_11 = ((/* implicit */unsigned int) var_0);
    var_12 = ((unsigned int) ((int) var_3));
    var_13 = (!(((/* implicit */_Bool) var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned char) var_10);
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1 - 2]))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_1 [i_1 - 3]))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_17 = ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)35996))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_9))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */_Bool) arr_11 [(short)4] [0U]);
        }
        for (short i_5 = 3; i_5 < 11; i_5 += 1) 
        {
            var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5] [i_5 - 3] [i_0] [(unsigned char)10]))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_21 = ((/* implicit */short) 4294967284U);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_6] [i_5 - 1] [i_0]))));
                }
                var_23 = (~(((/* implicit */int) ((short) (unsigned short)35980))));
                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-3026)) + (2147483647))) << (((((/* implicit */int) (short)3001)) - (3001)))));
                arr_23 [4U] [4U] [(_Bool)1] |= (short)-2976;
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_29 [i_0] [i_5] [i_6] [(short)7] [i_5] = ((/* implicit */_Bool) ((((-232526196) + (2147483647))) << ((((((-(((/* implicit */int) var_2)))) + (61145))) - (14)))));
                            arr_30 [i_5] [i_5 + 1] [(short)3] [i_8] [i_8] = ((/* implicit */unsigned int) (unsigned short)8191);
                        }
                    } 
                } 
            }
            for (short i_10 = 1; i_10 < 11; i_10 += 1) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_10 - 1] [i_5 - 2] [i_0])) ? (((/* implicit */int) (unsigned short)29536)) : (232526191)));
                arr_34 [i_5] = ((/* implicit */_Bool) ((var_9) << (((((((/* implicit */int) var_4)) + (15244))) - (54)))));
            }
            for (int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 4; i_13 < 10; i_13 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((unsigned int) arr_39 [i_0] [i_5] [i_5] [i_11] [i_12] [i_13 + 1]));
                            var_27 = ((/* implicit */unsigned int) 232526210);
                            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)29531))));
                            arr_42 [i_0] [i_5 - 2] [i_11] [i_0] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) - (((/* implicit */int) arr_6 [i_5 + 1])))) ^ (((/* implicit */int) arr_5 [8U] [i_5 - 1] [(short)5] [i_13 + 1]))));
                        }
                    } 
                } 
                var_29 = var_9;
            }
            var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned short)29530))));
            arr_43 [i_5] [(_Bool)1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20139)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) (short)3017))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8213)))));
            var_31 = ((/* implicit */short) max((var_31), (arr_9 [i_5] [i_5 + 1] [i_5])));
        }
        for (short i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            arr_47 [i_0] [i_0] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_14] [i_14]))));
            var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_14] [(_Bool)1])) | (((/* implicit */int) var_7))));
        }
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                {
                    arr_53 [i_16] [i_15] [i_0] = ((/* implicit */int) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))));
                    arr_54 [i_16] = ((/* implicit */_Bool) (short)16383);
                    arr_55 [9U] [i_15] [i_15] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_16] [i_16] [i_15] [i_16] [i_0]))));
                }
            } 
        } 
        arr_56 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7))));
    }
}
