/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175390
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
    var_10 = ((/* implicit */short) max((max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (3151717703444869676LL))))), (((/* implicit */long long int) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_11 -= ((/* implicit */_Bool) arr_1 [i_0]);
        var_12 = ((/* implicit */long long int) var_1);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_13 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) & (((((/* implicit */long long int) ((/* implicit */int) var_0))) * (arr_1 [i_1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) (+(arr_1 [i_1])));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_4 - 2]));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 + 1])) ? (arr_3 [i_4 - 1] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48)))));
                            var_17 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_2 [i_5]))) << (((arr_10 [i_1] [i_4 - 2] [i_1]) - (1069463246)))));
                            var_18 = arr_4 [i_1] [i_1];
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                {
                    var_19 *= (~(((((((/* implicit */_Bool) 1351201733U)) ? (((/* implicit */unsigned long long int) 2943765545U)) : (54043195528445952ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                    var_20 ^= ((/* implicit */long long int) (~(((((/* implicit */int) var_9)) * (((/* implicit */int) arr_7 [i_8] [i_7] [i_1] [i_1]))))));
                    var_21 = ((/* implicit */short) max(((~(arr_10 [i_1] [i_7] [i_8]))), (max((arr_10 [i_1] [i_6] [i_7]), (arr_10 [i_1] [i_6] [i_8])))));
                    var_22 = ((/* implicit */long long int) max((var_22), (arr_15 [i_1] [i_1] [i_1] [10ULL])));
                    arr_21 [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) arr_19 [i_1] [i_1] [i_1] [i_1] [i_8]);
                }
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) (-(1351201725U))))), (((((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_9] [i_6])) > (((/* implicit */int) var_8)))))))))))));
                    arr_26 [i_1] [i_1] [i_6] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) var_0);
                }
                var_24 = ((/* implicit */unsigned short) (~(54043195528445970ULL)));
                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) arr_4 [i_6] [i_7])))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_26 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-17268))))) ^ (((((/* implicit */_Bool) arr_18 [i_10] [i_10] [i_10])) ? (arr_18 [i_1] [i_1] [i_1]) : (arr_18 [i_1] [i_6] [i_6])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_27 = ((arr_5 [i_1] [i_6]) >= (arr_5 [i_11] [i_10]));
                        arr_34 [i_6] [i_6] [i_11] [i_12] = ((/* implicit */short) (+(arr_28 [i_10])));
                    }
                    for (short i_13 = 3; i_13 < 9; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) ((((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) && (((/* implicit */_Bool) arr_35 [i_13] [i_13 - 1] [i_6] [i_13] [i_6] [i_13 - 1] [3]))));
                        var_29 |= ((/* implicit */unsigned long long int) (short)-17262);
                        arr_37 [i_1] [i_6] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1] [i_1])) - ((-(var_3)))));
                    }
                    arr_38 [i_6] [i_6] [(unsigned short)5] [i_6] = ((/* implicit */int) ((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
                for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_30 = ((/* implicit */long long int) (~(arr_5 [i_1] [i_10])));
                    var_31 ^= arr_35 [i_1] [i_6] [i_1] [i_14] [i_14] [i_1] [i_14];
                }
                for (short i_15 = 1; i_15 < 9; i_15 += 4) 
                {
                    var_32 = ((/* implicit */long long int) arr_5 [i_10] [4LL]);
                    arr_45 [(_Bool)1] [i_6] [i_6] [(unsigned short)3] [i_15] [i_15] = ((/* implicit */signed char) (((-(arr_3 [i_15 + 1] [i_15 + 1]))) != (((/* implicit */long long int) max((((/* implicit */int) var_6)), (arr_30 [i_1] [i_1] [i_10] [i_1] [i_15 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) arr_39 [i_1] [i_1] [i_6])) / (54043195528445952ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_0)), (arr_1 [i_10]))) != (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_43 [i_1] [i_6] [i_10] [i_15]))))));
                        var_34 += ((/* implicit */short) var_5);
                        var_35 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned char) var_8)), (arr_46 [i_15 - 1] [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 + 2]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 2] [i_15] [i_15 + 1])) == (((/* implicit */int) (short)17267)))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (unsigned short i_17 = 3; i_17 < 10; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) (unsigned short)25994);
                            arr_57 [i_6] [(_Bool)1] [i_17 - 3] [i_17] [i_17 - 2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (+(arr_19 [9ULL] [i_18] [i_17 - 3] [(short)1] [i_1]))))), (var_3)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_20 = 1; i_20 < 8; i_20 += 3) 
        {
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_27 [i_20] [i_20] [i_1])))))) * (min(((~(((/* implicit */int) arr_29 [1U] [i_20] [i_20])))), (((/* implicit */int) ((((/* implicit */_Bool) -368105230866638087LL)) && (((/* implicit */_Bool) (short)8)))))))));
            var_38 = ((/* implicit */int) max((((/* implicit */short) ((arr_54 [i_1] [i_20 + 2] [i_20] [(signed char)8]) > (2726452494U)))), ((short)-8783)));
        }
        arr_60 [i_1] = ((((/* implicit */_Bool) ((int) ((1568514804U) * (((/* implicit */unsigned int) var_7)))))) ? ((~((+(((/* implicit */int) arr_11 [i_1] [i_1])))))) : ((-(((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [5LL] [i_1] [i_1] [i_1])))));
    }
    for (signed char i_21 = 0; i_21 < 11; i_21 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */long long int) ((((int) ((((/* implicit */int) arr_23 [(short)10] [i_21] [i_21] [(short)10] [(short)10])) / (((/* implicit */int) arr_52 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]))))) | (((/* implicit */int) arr_22 [i_21] [i_21] [i_21] [i_21] [i_21]))));
        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (_Bool)1))));
        arr_64 [3] [i_21] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)25994))));
    }
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(2297476020900625678LL))), (((/* implicit */long long int) (unsigned char)255))))) && (((/* implicit */_Bool) (unsigned char)11))));
    var_42 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_4)))))) | (((/* implicit */int) var_2))));
}
