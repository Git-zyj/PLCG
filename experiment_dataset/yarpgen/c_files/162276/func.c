/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162276
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
    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)61))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)56))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)92))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (var_7)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_1]);
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-19721)) : (((/* implicit */int) (signed char)93))));
        }
        arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)93), ((signed char)-58)))) && (((/* implicit */_Bool) max((min(((short)-19721), (((/* implicit */short) arr_3 [i_0] [i_0])))), (max((var_0), ((short)19726))))))));
        var_16 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_9 [i_0] = ((/* implicit */_Bool) min((min((((var_13) / (arr_5 [i_0]))), (((/* implicit */long long int) arr_6 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) 10737440191231163296ULL)) ? (((/* implicit */int) (short)26929)) : (((/* implicit */int) (unsigned char)241)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (unsigned short)17748))));
        var_18 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-70));
        arr_12 [i_2] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))))) : (((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_10 [i_2] [i_2]))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) var_8)) <= (((((((/* implicit */int) (signed char)-124)) + (2147483647))) >> (((/* implicit */int) (signed char)6)))))))));
        var_20 |= ((/* implicit */short) arr_14 [i_3]);
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((arr_13 [i_5]) + (arr_13 [i_5])));
            arr_22 [(unsigned char)2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3823404292998111763LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-12219))));
            /* LoopSeq 4 */
            for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) arr_18 [i_6]);
                arr_25 [i_6] [i_5] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)6)) << (((((/* implicit */int) (short)-19726)) + (19738)))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_30 [i_4] = ((/* implicit */unsigned char) ((arr_3 [i_4] [i_4]) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (((/* implicit */int) var_4))));
                var_23 = (!(((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_7])));
                arr_31 [i_5] = ((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_5 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
                var_24 = ((((/* implicit */int) (unsigned char)183)) / (((/* implicit */int) (signed char)-2)));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)246)) + (((/* implicit */int) arr_18 [i_7]))))) ? (((/* implicit */int) arr_4 [i_4] [i_7])) : (arr_0 [i_4])));
            }
            for (unsigned short i_8 = 2; i_8 < 13; i_8 += 3) 
            {
                arr_36 [(_Bool)1] [i_5] [(_Bool)1] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_4] [i_5])) >= (((/* implicit */int) arr_23 [i_8 + 1] [i_8 - 1] [i_8 + 1]))));
                var_26 = ((/* implicit */unsigned short) var_2);
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            var_27 = arr_26 [i_4] [i_5];
                            arr_45 [i_11] [i_9] [i_10] = ((/* implicit */signed char) arr_20 [i_4] [i_5] [i_11]);
                            var_28 |= ((/* implicit */long long int) arr_32 [(_Bool)1] [i_5] [i_9]);
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)68)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_46 [i_11] = ((/* implicit */signed char) (-(3118558294U)));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) arr_34 [i_4] [i_5]);
            }
            arr_47 [i_5] [i_4] = ((/* implicit */unsigned int) ((arr_33 [i_4] [i_4]) ? (((/* implicit */int) arr_33 [i_4] [i_4])) : (((/* implicit */int) arr_33 [i_4] [i_4]))));
        }
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 174566745U)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)231))));
    }
}
