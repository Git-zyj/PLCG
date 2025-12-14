/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168000
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1]))))));
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_10)))))));
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)94))))) | (min((((/* implicit */unsigned int) var_1)), (4062696931U)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_19 [i_1 + 1] [i_1] [(short)15] [i_5] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            var_22 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_13)), (min((arr_7 [i_1] [i_1 + 1] [i_2]), (var_2)))));
                            arr_23 [i_6] [i_5] [3] [i_5] [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_6 - 2] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 3]))))) ? (min((((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])), (((((/* implicit */int) var_1)) & (((/* implicit */int) var_3)))))) : (-734053616)));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1 + 1] [i_0]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_24 *= arr_17 [i_0] [i_1] [i_0] [i_1 + 1];
                            arr_29 [23U] [23U] [i_7] [i_7] [(unsigned char)18] [i_0] = ((((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1])) % (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                            var_25 = ((/* implicit */int) min((var_25), (var_4)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */short) var_9);
                            var_27 += ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [(signed char)2]) >> (((((/* implicit */int) (short)-31519)) + (31557)))));
                            arr_34 [i_0] [i_7] [i_2] [i_7] [8] = ((/* implicit */_Bool) (((_Bool)1) ? ((~(arr_26 [(_Bool)1] [i_1] [i_1 + 1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) 232270364U))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            var_28 += ((/* implicit */unsigned char) ((unsigned long long int) 4062696932U));
                            arr_37 [i_0] [i_7] [i_2] [i_7] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((/* implicit */int) arr_35 [i_1] [i_2] [i_7]))));
                            var_29 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_30 = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_10]);
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_10] [i_10] [(unsigned short)0] [i_10])) + (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), ((!(((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_2] [i_2] [(unsigned short)22] [i_7] [i_11]))))))))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((((/* implicit */_Bool) arr_24 [i_7] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1669144287647187505ULL)))));
                            var_34 = ((/* implicit */unsigned short) var_3);
                        }
                        var_35 += ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57567))));
                        arr_41 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) (-(var_4)));
                    }
                }
            } 
        } 
        arr_42 [i_0] = ((/* implicit */unsigned char) var_12);
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            var_36 |= ((/* implicit */long long int) (~(max((12944077613503369732ULL), (((/* implicit */unsigned long long int) (unsigned short)55856))))));
            var_37 = ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_38 = ((/* implicit */unsigned int) (_Bool)0);
            arr_45 [14ULL] [i_12] [i_12] = ((/* implicit */unsigned short) ((arr_21 [i_0] [i_12] [i_12] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12] [i_12] [(_Bool)1] [i_0] [i_0]))) > (232270364U)))), (var_9)))))));
            var_39 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) arr_35 [i_0] [i_0] [i_12])))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_40 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)51439))));
                            var_41 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (((-(arr_15 [i_0] [i_13] [(_Bool)1] [(unsigned short)16] [(_Bool)1] [i_13]))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_57 [(short)18] [(short)18])))))))) + (max((min((2147483647LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((unsigned short) var_1)))))));
                            arr_58 [i_0] [i_0] [(_Bool)1] [i_14] [i_0] [i_14] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 232270359U)) > (2147483647LL)));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_61 [11] [i_13 - 1] [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) + (arr_53 [i_13] [i_13 - 1]))) / (((/* implicit */long long int) arr_56 [i_13 - 2] [i_13 - 1] [i_13 - 1] [12U])))))));
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            arr_64 [(short)4] [(short)4] [i_14] [(short)4] [i_18] [i_0] [i_15] |= ((/* implicit */_Bool) (-(arr_21 [i_0] [i_13] [i_13 + 1] [i_13 + 1])));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((unsigned short) var_10)))));
                            var_44 = ((/* implicit */_Bool) (short)26723);
                            arr_65 [i_14] [i_15] [i_13] [i_13] [i_14] = arr_5 [i_0] [i_0] [23ULL];
                        }
                        arr_66 [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) ((var_15) % (((/* implicit */unsigned int) var_5))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_20 [i_13] [i_13] [i_14] [i_19] [i_14] [i_13 - 1] [i_13])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_0] [i_13 - 1] [(_Bool)1] [i_14] [i_19]))))) : (((arr_59 [(_Bool)1] [(_Bool)1] [0ULL] [i_14] [0ULL]) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                        arr_69 [i_14] [i_13 + 1] [i_14] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_46 ^= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(signed char)12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14] [i_14] [i_14]))) : (arr_49 [i_0] [0] [(unsigned short)14])))))) || (((arr_20 [i_14] [i_14] [(_Bool)1] [i_13] [(_Bool)1] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                }
            } 
        } 
        arr_70 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? ((-(arr_50 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [14]))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (4062696937U) : (((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? (232270339U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10386))))))))));
    }
    for (short i_20 = 0; i_20 < 25; i_20 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_22 = 2; i_22 < 24; i_22 += 4) 
            {
                for (short i_23 = 1; i_23 < 23; i_23 += 2) 
                {
                    {
                        arr_82 [i_20] [i_21] [i_22] [i_23 + 1] = ((/* implicit */short) 16386951719651955198ULL);
                        var_47 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_22 - 1] [i_23 - 1])) ? (arr_1 [i_22 - 1] [i_23 + 2]) : (arr_1 [i_22 - 1] [i_23 + 1]))), (((/* implicit */long long int) var_15))));
                        var_48 -= ((/* implicit */short) arr_46 [i_20] [i_20]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                var_49 = ((/* implicit */_Bool) var_13);
                arr_85 [i_20] [(signed char)1] [(_Bool)1] [i_20] = ((/* implicit */signed char) var_10);
                var_50 ^= ((/* implicit */long long int) var_0);
                var_51 *= ((/* implicit */short) var_5);
            }
            var_52 = ((/* implicit */unsigned long long int) arr_31 [i_20] [i_20] [i_20] [i_20] [i_21]);
        }
        for (unsigned short i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
        {
            var_53 *= ((/* implicit */short) arr_15 [i_20] [i_20] [i_20] [i_25] [i_20] [i_20]);
            arr_89 [i_20] [(unsigned char)1] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) -3263267223261586094LL)) ? (-682301396) : (498428086)));
            var_54 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_0)))) >= (((/* implicit */int) arr_78 [i_20]))));
        }
        var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned short)11704)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
    }
    var_56 = ((/* implicit */long long int) ((unsigned long long int) (+(((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_15))))));
    var_57 = ((/* implicit */int) var_10);
    var_58 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) var_17)), (max((var_13), (((/* implicit */int) (unsigned short)39001))))))) != (-2461501463761523745LL)));
    var_59 = ((/* implicit */_Bool) var_7);
}
