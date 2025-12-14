/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125249
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
    var_17 &= ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] |= ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(var_13))))))));
                    var_18 = ((/* implicit */unsigned short) (-((~(var_2)))));
                    var_19 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        arr_21 [i_3] [i_5] [i_5] [i_3] [i_5] [i_5] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_6] [i_6])))))));
                        arr_22 [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_2 [i_3] [(_Bool)1]))))));
                        arr_23 [i_4] [i_4] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-(3437728452U))))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_3))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(var_2))))));
        arr_29 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) 4611686018427256832ULL))))));
                    arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_12 = 2; i_12 < 18; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 4; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 1) 
                    {
                        {
                            arr_52 [i_10] [i_12] [i_12] [i_13] [i_14 - 2] [i_10] [i_14 - 1] = ((/* implicit */unsigned short) (+(13835058055282294784ULL)));
                            arr_53 [i_10] [i_11] [i_12] [i_10] [i_12] [i_14] [17ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_2))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(arr_27 [i_10]))))));
                        }
                    } 
                } 
                arr_54 [i_12] [i_10] [(short)14] [i_12] = ((/* implicit */short) (+(((/* implicit */int) var_15))));
                var_23 |= ((/* implicit */int) (!(((/* implicit */_Bool) (short)21273))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    for (unsigned char i_16 = 2; i_16 < 15; i_16 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (-(arr_4 [i_16 + 4] [i_12 - 1])));
                            var_25 = ((/* implicit */unsigned int) (-((-(4611686018427256832ULL)))));
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                            arr_61 [i_12] [(unsigned short)6] [i_12] [i_11] [i_12] = (!(((/* implicit */_Bool) arr_60 [i_10] [i_11] [i_11] [15U] [i_16])));
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32764))));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
        }
        var_29 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_57 [i_10] [i_10] [i_10] [i_10]))))));
    }
    var_30 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_17 = 4; i_17 < 12; i_17 += 2) 
    {
        arr_64 [i_17] = ((/* implicit */short) (~(arr_37 [i_17 - 2])));
        arr_65 [(unsigned short)4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [i_17] [i_17] [i_17] [i_17 + 1]))));
    }
    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) 
    {
        arr_70 [i_18] [i_18] = ((/* implicit */unsigned short) (~((-(var_11)))));
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 3) 
        {
            for (unsigned int i_20 = 1; i_20 < 21; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        for (int i_22 = 2; i_22 < 22; i_22 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)189)))))))));
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)81))))))))));
                                arr_81 [i_22] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_79 [i_22 - 1] [i_22 - 1] [i_22] [i_22 - 1] [i_20 + 1]))))));
                                var_33 = (~((+(var_14))));
                            }
                        } 
                    } 
                    arr_82 [i_18] [i_19] [i_18] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56)))))));
                    var_34 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_76 [i_19 + 1] [i_20 - 1]))))));
                }
            } 
        } 
    }
}
