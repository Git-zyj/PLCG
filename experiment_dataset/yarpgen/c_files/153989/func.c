/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153989
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(unsigned short)20])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((arr_0 [i_0]) >= (arr_0 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) ^ ((((~(8088467950407633755LL))) | (-8088467950407633744LL)))));
        arr_6 [i_0] |= (-(arr_2 [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) (-(arr_0 [i_1]))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) || (((/* implicit */_Bool) arr_0 [i_1 + 1]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (3537485896654408921ULL))))) < (((arr_1 [i_1]) / (((/* implicit */long long int) arr_0 [i_1]))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_14 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1 + 4] [i_1 + 1])) + (118)))));
            arr_15 [i_2] [i_1] [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) arr_8 [i_1]))));
        }
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            var_23 = ((/* implicit */signed char) ((((3222881773401764118ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))))) >= (((/* implicit */unsigned long long int) arr_0 [i_1 + 4]))));
        }
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_25 [i_1] [i_1] [i_1] [1LL] = ((/* implicit */long long int) ((signed char) arr_16 [i_5 - 1] [i_5 - 1] [i_1 + 3]));
                        var_24 = ((/* implicit */unsigned short) arr_0 [i_1 + 4]);
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_1 [i_1]))));
                        }
                    }
                } 
            } 
            arr_28 [i_4] [i_4] |= (((!(arr_21 [i_1] [i_4] [i_4]))) || (((/* implicit */_Bool) arr_10 [i_1])));
            arr_29 [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1])) == (((/* implicit */int) arr_8 [i_1]))));
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 16; i_8 += 2) 
    {
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_8])) || ((((_Bool)1) && (arr_31 [(signed char)17] [i_8])))));
        arr_32 [i_8] = ((/* implicit */int) ((long long int) ((signed char) arr_1 [i_8])));
        /* LoopSeq 1 */
        for (signed char i_9 = 1; i_9 < 15; i_9 += 1) 
        {
            var_28 = ((signed char) arr_3 [i_8]);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        arr_42 [i_8] [i_9] [i_9] [(unsigned short)0] = ((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_10] [i_11]);
                        var_29 = ((/* implicit */short) (-(arr_1 [i_8 - 3])));
                    }
                } 
            } 
        }
    }
    var_30 = ((/* implicit */unsigned int) ((((_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-100)) != (((/* implicit */int) (short)992)))))) < (max((((/* implicit */unsigned long long int) var_14)), (var_9)))))) : (((((((/* implicit */_Bool) (short)-992)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_11)))))))));
    var_31 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 9497579932862253413ULL))))) != (((((/* implicit */int) (short)-968)) * (((/* implicit */int) (signed char)65)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        arr_45 [6ULL] [i_12] = ((/* implicit */unsigned short) (signed char)21);
        var_32 = ((/* implicit */int) arr_44 [i_12] [i_12]);
    }
    for (signed char i_13 = 0; i_13 < 11; i_13 += 2) 
    {
        var_33 = (signed char)125;
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 10; i_14 += 3) 
        {
            for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) arr_13 [i_13]);
                    arr_53 [i_13] [(signed char)7] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (-(arr_0 [i_13]))))) - (((/* implicit */int) ((unsigned short) arr_37 [i_13] [i_13] [i_13] [i_13])))));
                }
            } 
        } 
    }
}
