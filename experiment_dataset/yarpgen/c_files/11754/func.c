/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11754
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
    var_13 = ((/* implicit */short) min((var_1), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_3 [i_0]);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_15 = arr_5 [i_1] [i_0] [i_1];
            var_16 = ((/* implicit */int) var_3);
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */long long int) ((_Bool) (short)(-32767 - 1)));
            var_17 = (!(((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_2])));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) 0ULL);
                        var_19 = ((/* implicit */signed char) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_2] [i_3] [i_4 - 2])))));
                        var_20 = ((/* implicit */unsigned int) ((var_9) - (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [12U] [i_0])))))));
                        var_21 = ((short) (~(18446744073709551615ULL)));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(signed char)10])) ? (((/* implicit */unsigned long long int) (+(0LL)))) : (var_8))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_22 [i_2] [i_2] = ((((/* implicit */_Bool) (signed char)2)) ? (2456384797U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))));
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            arr_25 [i_0] [i_7] [i_7] = ((/* implicit */long long int) (-(arr_4 [i_7])));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) arr_14 [(short)13] [i_9] [0LL] [10ULL]);
                            var_25 = ((/* implicit */unsigned int) ((short) 4294967279U));
                        }
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_10))));
                            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_33 [(_Bool)1] [i_0] [i_0] [i_7] [i_8 + 1] [i_7]);
                            arr_37 [i_11] [i_7] = ((/* implicit */unsigned short) (+(-589465114)));
                        }
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_0];
                    }
                } 
            } 
        }
    }
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned char) ((_Bool) var_7))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        arr_42 [i_12] = ((/* implicit */_Bool) ((unsigned short) arr_26 [i_12] [i_12] [i_12]));
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            for (short i_14 = 4; i_14 < 9; i_14 += 1) 
            {
                {
                    arr_48 [i_12] [(short)2] [i_14] = ((/* implicit */long long int) var_11);
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) arr_40 [i_14 - 2] [i_14 - 2]);
                        arr_52 [i_13] [i_13] [i_14 - 1] [i_14] = (((~(19ULL))) * (18446744073709551608ULL));
                    }
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        arr_57 [i_16] [i_14] [(_Bool)1] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_14 - 1] [i_14 - 1] [9LL] [i_16])) ? (arr_55 [i_14 - 3] [6] [(_Bool)1] [(_Bool)1]) : (arr_55 [i_14 + 1] [i_14 + 1] [i_14 - 4] [i_16])));
                        arr_58 [i_12] [i_12] [i_14] = ((/* implicit */short) ((arr_34 [i_14 - 3] [i_13] [i_13] [i_13] [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_14] [i_14] [i_12])))) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */unsigned long long int) arr_17 [i_14 - 4] [i_14 - 2] [i_14 + 1] [i_14]);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_17 = 2; i_17 < 15; i_17 += 1) 
    {
        arr_62 [i_17] [i_17] = ((/* implicit */unsigned long long int) ((arr_59 [i_17 - 2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_61 [i_17 + 1]))));
        var_30 = ((/* implicit */short) ((unsigned long long int) (unsigned short)15956));
    }
}
