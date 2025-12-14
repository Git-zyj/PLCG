/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110574
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_20 = ((/* implicit */_Bool) (unsigned short)58231);
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_0] [i_1]);
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_10 [(unsigned short)7] [(unsigned short)7] [i_0] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_19)) : ((+(((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1])))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 4; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) arr_13 [i_0 + 1]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 23; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) arr_4 [i_3]);
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_4 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (var_0)));
                            var_24 = ((/* implicit */long long int) arr_16 [(unsigned short)13] [i_2] [i_4 - 4] [i_5 - 1] [i_5] [i_5 + 2]);
                            arr_19 [i_5] [i_5] [i_3] [i_4 + 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_4 - 3])) && (var_17)));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) (+(arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))) : (arr_3 [i_0 - 1] [i_4 - 1])));
                            var_26 &= (+((~(((/* implicit */int) (short)-11654)))));
                            arr_22 [i_2] [i_2] [11LL] [i_4] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (_Bool)0))));
                            var_28 += ((/* implicit */long long int) var_19);
                        }
                    }
                } 
            } 
        }
        for (long long int i_8 = 4; i_8 < 23; i_8 += 3) 
        {
            var_29 = ((/* implicit */long long int) var_19);
            var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_20 [i_0 - 1]) ? (((((/* implicit */int) (short)11654)) & (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : ((+(((/* implicit */int) (_Bool)0))))))) & (((unsigned long long int) max((((/* implicit */int) var_19)), (var_4))))));
            var_31 *= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551614ULL))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 23; i_9 += 2) 
        {
            arr_29 [i_0] = arr_2 [i_0 - 2] [20ULL];
            arr_30 [i_9] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_27 [11] [i_0] [i_9])) ? (arr_13 [i_9]) : (((/* implicit */int) (short)11663)))));
            var_32 |= var_2;
        }
        var_33 = min((212281744), (((/* implicit */int) var_19)));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            arr_33 [i_0] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((min((var_19), ((unsigned short)255))), (var_3))))));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 24; i_11 += 2) 
            {
                for (int i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    for (unsigned short i_13 = 3; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (arr_40 [i_10 + 2] [(unsigned short)20] [i_10] [i_13 - 3] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (+(var_10)))) : ((-(var_1)))));
                            var_35 -= ((/* implicit */int) min((min((max((var_3), ((unsigned short)39414))), (((/* implicit */unsigned short) var_16)))), (((/* implicit */unsigned short) max((((/* implicit */short) (!(arr_28 [i_10] [i_13])))), (arr_34 [i_11 + 1] [i_10] [i_0 + 1] [i_0 - 2]))))));
                        }
                    } 
                } 
            } 
            arr_41 [(unsigned short)15] [9ULL] [9ULL] = ((/* implicit */_Bool) (~(max((((/* implicit */int) ((arr_25 [i_0 + 1] [i_0]) != (6983990524102359363LL)))), (var_13)))));
            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [(unsigned char)9])))))));
            arr_42 [i_0] [i_10] [i_10] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) >> (((arr_9 [i_10 + 3] [i_0 + 1] [i_0 + 1]) + (1324020191)))))));
        }
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
    {
        var_38 = ((/* implicit */unsigned short) var_4);
        var_39 = ((/* implicit */unsigned long long int) arr_40 [i_14] [i_14] [i_14] [i_14] [i_14]);
        var_40 = min(((-(((/* implicit */int) ((unsigned short) var_17))))), (((/* implicit */int) var_19)));
    }
    var_41 = ((/* implicit */long long int) (short)-11659);
    /* LoopSeq 1 */
    for (long long int i_15 = 1; i_15 < 20; i_15 += 2) 
    {
        var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
        arr_48 [i_15] = ((/* implicit */short) var_4);
    }
    var_43 = ((/* implicit */unsigned char) var_12);
    var_44 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_18) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39406)))))))))));
}
