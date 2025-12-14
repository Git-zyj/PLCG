/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128024
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 ^= (signed char)-70;
        arr_2 [(unsigned char)12] |= ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) arr_1 [i_0]))), (min((((/* implicit */unsigned short) var_2)), (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_4 [i_1] [i_1 - 2]))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((3439714514U) - (3439714506U))))))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))));
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0))));
                var_16 &= ((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (arr_10 [i_3 - 2]) : (arr_10 [i_3 + 1]));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4]))));
        var_17 -= (!(((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                {
                    arr_20 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_4))));
                                arr_28 [i_8] [i_4] [i_4] [i_6 - 1] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_31 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5]))))) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)220)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10)))))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_5 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4] [i_4] [i_6 - 1] [i_9] [i_9]))))));
                    }
                    arr_32 [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_36 [i_10] = arr_26 [i_10] [i_10] [i_10] [i_10];
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)109)) >= (((/* implicit */int) arr_17 [i_10] [i_10]))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) (short)-21984);
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_47 [i_10] [(unsigned short)9] = ((/* implicit */signed char) ((unsigned char) ((signed char) (_Bool)1)));
                        arr_48 [i_10] [i_11] [i_12] [i_13] = ((arr_19 [i_13] [i_12] [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10]))) : (var_1));
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_11 - 1] [i_11 - 1]))));
                        var_22 *= var_6;
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
        }
        /* LoopNest 3 */
        for (signed char i_14 = 2; i_14 < 7; i_14 += 4) 
        {
            for (unsigned short i_15 = 1; i_15 < 9; i_15 += 2) 
            {
                for (unsigned short i_16 = 3; i_16 < 9; i_16 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                        /* LoopSeq 4 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_61 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            arr_62 [i_10] [i_10] [i_17] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-21984))));
                            arr_63 [i_10] [i_17] [i_17] [i_16] [i_16] [(_Bool)1] [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)21958))));
                        }
                        for (long long int i_18 = 1; i_18 < 9; i_18 += 3) 
                        {
                            arr_67 [i_10] [i_14] [i_10] [i_16] [i_18] = ((/* implicit */unsigned short) ((arr_58 [i_14] [i_15 - 1] [i_18 - 1] [i_14] [i_18]) > (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_15 - 1])))));
                            arr_68 [i_14] [i_14] [i_18] [i_16] [i_15] [i_14] = ((/* implicit */unsigned short) ((((-4160314556208216958LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_6))));
                            arr_69 [i_14] [i_14] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_16 + 2])) ? (((/* implicit */int) arr_26 [i_16 + 2] [i_14 + 3] [i_15] [4U])) : (((/* implicit */int) arr_26 [i_16 - 3] [i_14 - 2] [i_14] [i_16 - 1]))));
                        }
                        for (long long int i_19 = 2; i_19 < 7; i_19 += 3) 
                        {
                            var_25 |= ((/* implicit */short) (~(-4160314556208216958LL)));
                            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_3))));
                        }
                        for (short i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((var_6) || (var_6)))));
                            var_29 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 97427799)) ? (-3707475922904932984LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) (+(var_1))))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (-(arr_50 [i_14] [i_14 - 2]))))));
                            arr_75 [i_10] [(signed char)8] [i_10] = ((/* implicit */unsigned short) arr_9 [i_20]);
                            arr_76 [i_10] [i_14] [i_15] [i_14] [i_14] [i_16] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_35 [i_10] [i_14]))))));
                        }
                        var_31 &= ((/* implicit */unsigned int) (+(arr_58 [i_14] [i_14 + 3] [i_16 + 2] [i_16] [i_10])));
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            var_32 -= ((/* implicit */_Bool) 97427799);
                            var_33 = ((/* implicit */signed char) (+(arr_52 [i_16 + 1] [i_21 - 1] [i_21])));
                            var_34 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) * (((unsigned int) -2067551431))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 11; i_22 += 3) 
                        {
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_0))));
                            arr_84 [i_14] [2] &= ((/* implicit */short) ((unsigned long long int) (unsigned short)20874));
                            var_36 = ((/* implicit */long long int) min((var_36), (var_9)));
                            var_37 ^= ((/* implicit */short) (~(arr_29 [i_14] [i_14 + 3] [i_15] [i_15])));
                        }
                    }
                } 
            } 
        } 
        arr_85 [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) arr_64 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
    }
    var_38 = min(((signed char)-127), ((signed char)-120));
    var_39 &= ((/* implicit */_Bool) min((((((/* implicit */int) var_12)) ^ (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_8))))))), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned char i_23 = 2; i_23 < 21; i_23 += 4) 
    {
        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) min((((short) -97427800)), (((/* implicit */short) var_12)))))));
        arr_89 [(_Bool)1] [i_23] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) 97427799)), (3U)))));
        var_41 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */int) (short)32751)) / (((/* implicit */int) arr_87 [(_Bool)1])))) == (((/* implicit */int) arr_88 [i_23 + 1]))))), (min((max((var_7), (-4638514190772272481LL))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (signed char)124)))))))));
    }
}
