/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148045
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) arr_3 [i_4]);
                                arr_15 [i_1 - 1] [i_1] [i_2] [i_3] [(short)8] [i_1] [i_1] = ((/* implicit */unsigned short) ((4276543056U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)4535)))));
                                arr_16 [i_1] [i_1] = min((arr_7 [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)-10749)));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)220))));
                    var_10 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)80))));
                    var_11 = ((/* implicit */_Bool) min((7717740659577320298ULL), (((/* implicit */unsigned long long int) (unsigned char)220))));
                    arr_18 [(unsigned char)5] [i_1] [i_1] [(unsigned char)5] = ((/* implicit */short) ((unsigned short) (unsigned short)15));
                }
            } 
        } 
        arr_19 [7U] = ((/* implicit */short) (unsigned char)232);
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 4; i_6 < 20; i_6 += 1) 
        {
            var_12 = ((/* implicit */short) (_Bool)1);
            arr_27 [i_6] = ((/* implicit */_Bool) arr_21 [i_5]);
            var_13 = ((/* implicit */short) (((~(((/* implicit */int) arr_21 [i_6 - 3])))) >> (((((/* implicit */int) (short)-6375)) + (6392)))));
        }
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)10757), (((/* implicit */short) arr_26 [i_5] [i_5] [i_5]))))) || (((/* implicit */_Bool) 4276543045U))));
        var_15 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    }
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (+(9223372036854775807LL))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8349))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_33 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 705374945U)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (_Bool)1)))) << (((4276543059U) - (4276543055U)))));
            var_18 += (unsigned short)65024;
            arr_34 [i_7] [i_8] [(_Bool)1] |= ((/* implicit */signed char) var_6);
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            arr_37 [i_7] [i_9] [i_7] = ((/* implicit */short) ((-9165945647388862226LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-10749)))));
            var_19 += ((/* implicit */unsigned char) arr_9 [10] [i_7] [i_7] [i_7] [i_7] [i_7]);
        }
    }
    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (long long int i_12 = 4; i_12 < 12; i_12 += 1) 
            {
                {
                    arr_46 [i_11] [(_Bool)1] [i_12] [(short)11] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 10; i_13 += 4) 
                    {
                        arr_49 [i_12] [i_12] [i_10 + 1] = ((/* implicit */unsigned long long int) arr_45 [i_13 + 2] [i_12] [(unsigned short)0] [i_10]);
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            arr_52 [i_10] [i_10] [10U] [10U] [i_10] [i_14] [i_12] = min((max((((/* implicit */unsigned long long int) (unsigned char)228)), (16383ULL))), (((/* implicit */unsigned long long int) min((arr_41 [i_10 - 1] [4U] [i_13]), (((/* implicit */short) (unsigned char)213))))));
                            arr_53 [i_10] [i_10] [i_12] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), ((unsigned short)65198))))));
                        }
                        arr_54 [i_13] [(unsigned short)8] [i_11] [i_11] [i_11] [(short)0] = ((/* implicit */long long int) arr_51 [i_11]);
                        var_21 = ((/* implicit */unsigned short) ((long long int) (unsigned char)119));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_48 [(_Bool)1] [i_12 - 2] [i_12 - 4] [i_13] [i_12] [(unsigned short)3]))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            for (int i_16 = 3; i_16 < 12; i_16 += 3) 
            {
                for (long long int i_17 = 1; i_17 < 11; i_17 += 1) 
                {
                    {
                        arr_63 [i_16] [i_16] = ((/* implicit */long long int) arr_60 [i_15] [i_15] [(signed char)12]);
                        arr_64 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) (~(40864022U)));
                        arr_65 [(unsigned char)4] [i_16] [(unsigned char)4] [i_16] [i_10] = ((/* implicit */short) min(((-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)20422)))))), (((/* implicit */int) (short)-10759))));
                        arr_66 [(_Bool)1] [i_15] [i_16] [(_Bool)1] = ((/* implicit */unsigned char) arr_57 [i_16] [i_15]);
                    }
                } 
            } 
        } 
        arr_67 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2084448351)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)46603))));
    }
    var_23 = ((/* implicit */unsigned short) var_1);
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_3))));
}
