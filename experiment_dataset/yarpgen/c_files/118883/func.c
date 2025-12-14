/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118883
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((unsigned long long int) 9223372036854775807LL));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_1 [i_1 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 432154878))))), (((((/* implicit */int) (unsigned char)255)) / (var_11)))));
                        var_16 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 4613845684861213931LL)) ? (min((((/* implicit */long long int) var_0)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                        arr_13 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) arr_7 [i_4] [i_1] [i_0] [i_2]);
                        arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) 3559993402800453358LL);
                    }
                }
                var_18 = ((/* implicit */unsigned short) (unsigned char)255);
                arr_17 [i_0] [i_0] = var_10;
                arr_18 [i_0] = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
    var_19 = ((/* implicit */short) 7559814154280183094LL);
    var_20 = var_7;
    var_21 = ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    arr_25 [i_5 - 4] [i_6] [i_5] = ((/* implicit */short) var_10);
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_7 + 1] [i_5])) ? (arr_19 [i_6] [i_5]) : (arr_19 [i_6] [i_6])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_21 [i_6] [i_6] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) > (((((((/* implicit */_Bool) (short)-32761)) ? (9387257712370878870ULL) : (1231811883579899361ULL))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_11)) : (var_1))))))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-95223308), (((/* implicit */int) arr_22 [i_5] [(_Bool)1] [i_5 - 3]))))) ? (((/* implicit */int) arr_23 [i_5 - 3] [i_5] [(unsigned short)2])) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -31636556)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_29 [i_9] [i_8] [i_8])) ? (arr_21 [i_5] [i_5 - 2] [i_8]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_5]))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 14; i_10 += 3) 
                    {
                        arr_35 [i_10] [i_5] [i_9] [i_8] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_23 [i_5] [i_8] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_28 [i_5]))))));
                        var_25 += ((/* implicit */unsigned short) arr_21 [i_9] [i_8] [i_9]);
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        arr_38 [i_5] [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) arr_29 [i_5 + 3] [i_8] [i_9])) : (((/* implicit */int) arr_29 [i_5] [i_9] [i_11]))));
                        arr_39 [i_5] [i_8] [i_9] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_5 - 2] [i_8] [i_9] [i_5 - 2])) << (((((/* implicit */int) var_2)) - (216)))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_5] [i_5 - 3] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_5] [i_5 + 1] [i_5]))));
                    }
                }
            } 
        } 
        arr_40 [i_5] = ((/* implicit */unsigned short) min((((signed char) var_6)), (((/* implicit */signed char) ((_Bool) arr_30 [i_5 - 4] [i_5 + 1] [i_5])))));
    }
    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        var_27 = ((/* implicit */unsigned char) (short)-3164);
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_12])))))));
        /* LoopSeq 1 */
        for (int i_13 = 4; i_13 < 22; i_13 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                for (unsigned short i_15 = 3; i_15 < 20; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_53 [i_14] [i_12] [i_16] = ((/* implicit */unsigned char) var_1);
                            var_29 = ((/* implicit */short) arr_52 [i_12] [i_13] [i_14] [i_12] [i_16]);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((((/* implicit */int) min((arr_44 [(_Bool)1]), (arr_44 [(unsigned short)16])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_44 [20LL])))))))))));
            arr_54 [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_51 [i_12] [i_13] [i_13] [i_12] [i_12] [i_12]);
        }
    }
    for (int i_17 = 0; i_17 < 13; i_17 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)235)) ? (arr_46 [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_17] [i_17] [i_17]))))), (((/* implicit */long long int) (unsigned char)10))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)65534))))));
        arr_59 [i_17] = min((((/* implicit */unsigned long long int) (_Bool)1)), (17214932190129652255ULL));
    }
}
