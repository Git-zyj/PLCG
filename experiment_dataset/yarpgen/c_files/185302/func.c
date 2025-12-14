/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185302
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
    var_10 = ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) (+(var_8)));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_0)));
            arr_7 [i_0] [i_1] [i_0] = var_2;
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((((/* implicit */int) var_3)) % (((/* implicit */int) var_4)))) - (((/* implicit */int) var_7)))))));
            var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)127))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_2] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_7)))) & ((-(((/* implicit */int) var_4))))));
                            var_14 = ((/* implicit */short) ((((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) min((var_15), (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                arr_22 [i_2] = ((/* implicit */short) var_8);
                arr_23 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8))));
                var_16 = ((/* implicit */short) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_17 *= ((/* implicit */signed char) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_2)))) % (((/* implicit */int) var_9))));
                arr_27 [i_0] [7LL] [i_7] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) var_7))) + ((+(var_8))));
                arr_28 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_5)));
            }
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                arr_31 [i_2] [i_8] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_0)));
                var_18 = ((/* implicit */long long int) var_2);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_3))))) - (((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))))))));
            }
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_6)))))));
                        arr_38 [i_0] [i_2] [i_2] [i_9] [i_0] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) & (((/* implicit */int) var_6))))));
                    }
                } 
            } 
            arr_39 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (+(var_0)));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    for (short i_13 = 4; i_13 < 10; i_13 += 2) 
                    {
                        {
                            arr_50 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            arr_51 [i_2] [i_0] [(signed char)9] [i_0] [i_11] [(signed char)12] [i_13] = ((((/* implicit */int) (unsigned char)141)) << (((var_0) - (1763840821256489027ULL))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                for (long long int i_16 = 3; i_16 < 13; i_16 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_9)))))));
                        arr_58 [i_0] [(signed char)0] [i_16] [i_16] = (+(var_8));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_8)));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_8))) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    }
                } 
            } 
        } 
        arr_59 [i_0] = ((/* implicit */long long int) (-(var_5)));
    }
    for (signed char i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            for (long long int i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                for (short i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_21 = 1; i_21 < 14; i_21 += 1) 
                        {
                            arr_74 [i_21] [i_21] [(short)1] [i_20] [i_18] [i_20] = ((/* implicit */short) var_1);
                            var_25 = ((/* implicit */short) var_1);
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))) - (((/* implicit */int) var_6))));
                            arr_75 [i_17] [i_18] [i_18] [i_18] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                        }
                        var_27 = ((/* implicit */long long int) max((((/* implicit */int) var_4)), (max((((/* implicit */int) var_3)), ((+(((/* implicit */int) var_4))))))));
                        var_28 = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-23301)) - (((/* implicit */int) (signed char)127)))))));
        var_30 = ((/* implicit */short) ((max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((var_5) < (var_0)))))) * (((/* implicit */int) var_4))));
    }
}
