/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168421
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
    var_17 = ((/* implicit */long long int) ((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((max((arr_0 [i_0 - 3]), (arr_0 [i_0 + 1]))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_0 [i_0 - 2])))));
        var_19 &= ((/* implicit */signed char) min((((((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) (short)-19936)) + (19965))))) ^ ((-2147483647 - 1)))), (((int) arr_0 [i_0 - 2]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_8))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 10; i_3 += 1) 
            {
                {
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_2)) ? (864584927U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (arr_9 [i_3 - 3] [i_3 - 1] [i_3 + 1])));
                    arr_10 [i_2] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1]);
                    arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(-1470269925)));
                    var_22 -= ((/* implicit */unsigned short) ((int) arr_7 [i_3 - 3]));
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_23 -= ((/* implicit */short) var_11);
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)34)) ? (max((((/* implicit */long long int) ((int) arr_12 [i_4] [i_4]))), (max((((/* implicit */long long int) var_6)), (8270397185274242707LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))));
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((unsigned long long int) 115240742));
                            arr_26 [i_5] [i_6] [(unsigned short)2] [i_8] [i_8] [i_8] [i_9 + 1] = ((/* implicit */short) (~(8270397185274242725LL)));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (-750230247) : (((/* implicit */int) (short)-23092)))))));
            var_27 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) var_0))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_28 += ((short) 17261491211913199916ULL);
            var_29 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_5] [i_5]))))) ? ((~(((/* implicit */int) arr_19 [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_19 [i_10] [i_10]))))));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_21 [i_5] [i_10] [(short)1] [i_10] [i_10]))))))));
            var_31 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_10] [i_5] [i_5])) ? (((/* implicit */int) (short)23092)) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_10])))) / (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (signed char)-1))))));
            arr_30 [i_5] = ((/* implicit */signed char) ((((var_7) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_6)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))) >= (((/* implicit */int) arr_27 [i_5] [i_5]))))))));
        }
        for (signed char i_11 = 2; i_11 < 19; i_11 += 1) 
        {
            var_32 = ((/* implicit */int) max((var_32), (((int) (!(((/* implicit */_Bool) var_14)))))));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                for (signed char i_13 = 1; i_13 < 18; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (var_1)));
                        arr_39 [i_5] [i_11] [i_5] [i_13 + 2] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
            var_34 += ((/* implicit */signed char) var_13);
        }
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((-1551315797) / (((/* implicit */int) (short)8192)))) <= (((((/* implicit */_Bool) (signed char)-18)) ? (-115240742) : (((/* implicit */int) var_9)))))))));
        var_36 |= ((/* implicit */int) ((((arr_29 [(_Bool)1] [i_5] [(signed char)0]) - (((/* implicit */unsigned int) min((((/* implicit */int) arr_17 [i_5] [i_5] [i_5])), (var_13)))))) - (((((/* implicit */_Bool) arr_22 [i_5])) ? (arr_22 [i_5]) : (arr_22 [i_5])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        arr_42 [i_14] = ((/* implicit */unsigned int) arr_37 [i_14] [(unsigned short)8] [i_14] [i_14] [18U]);
        /* LoopNest 2 */
        for (signed char i_15 = 1; i_15 < 9; i_15 += 1) 
        {
            for (unsigned short i_16 = 2; i_16 < 7; i_16 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned short) ((arr_8 [i_16 + 3] [i_15] [i_15 - 1]) / (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_16])) ? (((/* implicit */int) arr_28 [i_16 + 2] [21])) : (((/* implicit */int) arr_50 [i_15] [i_15] [i_15] [i_16 + 2] [i_15 + 1]))));
                                var_39 += ((/* implicit */int) ((var_7) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_14] [i_15 - 1] [i_16] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
                                var_40 = (~(-286447754));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    }
    var_42 = ((/* implicit */int) (unsigned short)18420);
}
