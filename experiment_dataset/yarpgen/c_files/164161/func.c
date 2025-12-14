/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164161
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
    var_11 = max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) max((var_7), (var_10)))), (max((((/* implicit */unsigned long long int) var_10)), (var_0))))));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    var_13 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), ((-(((/* implicit */int) (unsigned char)248)))))))));
        var_15 += ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (unsigned char)254)), (8154787399729226062ULL))), (((/* implicit */unsigned long long int) max((min(((unsigned short)7), ((unsigned short)17205))), ((unsigned short)54466))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)48321)), (min((min((((/* implicit */long long int) var_4)), (6762223003043896377LL))), (((/* implicit */long long int) (_Bool)1)))))))));
            var_17 ^= ((/* implicit */unsigned char) (unsigned short)14);
        }
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_3 = 4; i_3 < 20; i_3 += 3) 
            {
                arr_10 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) min((max((min((var_3), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) arr_8 [i_3])))), (((/* implicit */long long int) var_6))));
                arr_11 [i_3] [i_2] [i_3 + 2] = var_3;
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) -5579328649166822168LL);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 ^= var_1;
                var_19 ^= max((arr_2 [i_2] [i_2]), (((/* implicit */unsigned short) arr_3 [i_2])));
                var_20 ^= ((/* implicit */long long int) var_6);
            }
            /* vectorizable */
            for (short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 4; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_21 = 851262624U;
                            arr_23 [(unsigned short)7] [(unsigned char)4] [i_5 - 1] [i_5] = ((/* implicit */_Bool) var_2);
                            arr_24 [i_5] [i_6] [i_5 + 1] [(unsigned char)20] [i_5] = var_10;
                            var_22 = ((/* implicit */int) (unsigned short)18539);
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) min((var_23), ((~(((/* implicit */int) var_8))))));
                arr_25 [i_0] [i_5] = ((/* implicit */unsigned int) var_3);
            }
            arr_26 [i_2 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_0]);
            /* LoopSeq 2 */
            for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_9))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_10 = 2; i_10 < 20; i_10 += 4) 
                    {
                        arr_35 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) var_6);
                        arr_36 [i_10] [(_Bool)1] [i_8] [(short)14] [i_8] [i_2] [i_0] = ((/* implicit */long long int) var_8);
                    }
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_25 ^= ((/* implicit */unsigned char) var_5);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_13 [i_0]))));
                        var_27 *= ((/* implicit */unsigned long long int) var_9);
                        arr_40 [i_0] [i_8] [i_8] [i_8] [i_11] = ((/* implicit */unsigned int) var_2);
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (short i_13 = 2; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((((/* implicit */long long int) var_4)), (9176294386095757201LL))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_3))));
                            var_30 = ((/* implicit */short) max((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (var_1)))));
                            var_31 ^= arr_38 [i_8];
                            arr_47 [i_0] [i_8] = var_10;
                        }
                    } 
                } 
                arr_48 [i_8] [i_2] = min((min((var_0), (((/* implicit */unsigned long long int) max(((unsigned short)15), (var_8)))))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) arr_1 [i_0]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                var_32 ^= (+(var_7));
                var_33 ^= ((/* implicit */long long int) arr_13 [i_0]);
                arr_51 [i_0] [i_2 + 2] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_7);
            }
            var_34 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) max((-832588349), (((/* implicit */int) (_Bool)1)))))))), (max((281474842492928LL), (((/* implicit */long long int) (unsigned short)1))))));
            arr_52 [i_0] = ((/* implicit */unsigned char) var_7);
        }
        var_35 *= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_6)), (8154787399729226074ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 4) 
    {
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) arr_19 [i_15] [16] [i_15] [i_15 + 1]))));
        arr_56 [i_15 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        arr_57 [i_15] [i_15] = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    }
    /* LoopSeq 1 */
    for (short i_16 = 3; i_16 < 9; i_16 += 2) 
    {
        var_37 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
        var_38 = ((/* implicit */short) var_10);
    }
}
