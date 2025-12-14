/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18270
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) 1005931470U);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_16 = ((/* implicit */signed char) var_11);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_1 [i_0 + 1]))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 1526409157U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_9 [i_0] [5U] [i_3])), (((unsigned int) 1526409163U)))))));
                        arr_13 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (max((((/* implicit */long long int) (signed char)56)), (((((/* implicit */_Bool) 1526409185U)) ? (6066075975613027697LL) : (((/* implicit */long long int) 11U))))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((int) var_9)))))));
            arr_14 [i_0] = ((/* implicit */_Bool) max((12463649034891871451ULL), (((/* implicit */unsigned long long int) -1))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1] [13U])) | (((/* implicit */int) arr_16 [i_0 + 1]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_5] [i_5 + 1] [i_5 - 1])))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((signed char) arr_5 [i_5 + 1] [i_5 + 1] [i_5 + 1]));
            arr_24 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 1526409156U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2768558156U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_5] [i_5] [18ULL])))))));
            var_22 ^= ((/* implicit */unsigned int) (unsigned short)49659);
            /* LoopSeq 3 */
            for (long long int i_7 = 4; i_7 < 17; i_7 += 3) 
            {
                arr_28 [i_5] [i_5] = ((/* implicit */_Bool) (unsigned short)33844);
                arr_29 [i_5] = ((/* implicit */_Bool) ((arr_19 [i_5]) ? (((/* implicit */int) arr_9 [i_7 + 1] [i_5 + 1] [i_5])) : (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)49665))))));
            }
            for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_23 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [1LL] [(signed char)5])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (arr_27 [i_5 + 1]) : ((~(arr_11 [i_8] [15LL] [18LL] [i_9]))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(_Bool)1] [i_5] [i_5 + 1]))) : (arr_11 [i_5] [i_6] [i_8] [(unsigned short)7])));
                }
                var_25 = ((/* implicit */unsigned int) min((var_25), (((unsigned int) arr_7 [i_5 + 1]))));
                arr_36 [i_5] [i_5] = ((1958480470U) | (((((/* implicit */_Bool) 2768558128U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) : (485144697U))));
                arr_37 [i_5] [i_6] [i_8] = ((/* implicit */unsigned short) ((arr_19 [i_5 - 1]) ? (var_11) : (((/* implicit */long long int) arr_27 [i_8]))));
            }
            for (long long int i_10 = 1; i_10 < 19; i_10 += 3) 
            {
                arr_42 [i_5] [i_5] [i_5 + 1] = ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (((/* implicit */int) arr_4 [i_5 + 1])) : (((/* implicit */int) arr_4 [i_5 + 1])));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14846262885562921243ULL)) ? (((/* implicit */int) (unsigned short)49667)) : (((/* implicit */int) (unsigned short)50806))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (unsigned short)31702))));
            }
            var_28 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))) / (((int) var_11))));
        }
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_13))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (-(var_11))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 1; i_11 < 20; i_11 += 3) 
    {
        for (int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            {
                arr_48 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_45 [i_11 + 1]) / (arr_45 [i_11 - 1])))) ? (((/* implicit */unsigned long long int) arr_45 [i_11 + 1])) : (((unsigned long long int) arr_45 [i_11 + 1]))));
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                {
                    var_31 = arr_50 [i_13] [i_13 + 1] [i_12] [i_11 + 1];
                    var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 2768558128U)))));
                    arr_51 [i_11 - 1] [i_12] [i_13] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((arr_46 [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) var_6))))))) : (((((/* implicit */_Bool) (~(14846262885562921236ULL)))) ? (((/* implicit */long long int) (-(var_6)))) : (((((-8515091858396948871LL) + (9223372036854775807LL))) << (((1526409146U) - (1526409146U)))))))));
                    var_33 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_47 [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_47 [i_11 + 1] [i_12])) : (((/* implicit */int) arr_47 [i_11 + 2] [i_11 + 2]))))));
                }
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31672)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((-(1640892488U)))));
                    arr_56 [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_11] [i_12])) && (((/* implicit */_Bool) arr_47 [i_12] [i_14])))))));
                    var_35 = (-(485144713U));
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_59 [i_15] [i_15 + 1] [(unsigned short)13]), (((/* implicit */long long int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 2; i_16 < 21; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            {
                                arr_65 [i_11] [i_16] = ((/* implicit */unsigned short) arr_43 [i_11] [i_12]);
                                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)33841)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 485144720U)))))))) ? (((/* implicit */int) max((arr_55 [11U] [11U] [11U]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)31684)))))))) : (max((((/* implicit */int) arr_55 [i_11] [i_16 - 1] [i_15])), ((-(((/* implicit */int) arr_62 [i_11] [i_12] [i_16] [i_16]))))))));
                                arr_66 [i_11] [i_17] [i_15] [i_15 + 1] [i_16] [i_17] |= ((/* implicit */_Bool) ((((_Bool) 3600481188146630376ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (max((((/* implicit */long long int) (unsigned short)49665)), (8515091858396948855LL))) : (((/* implicit */long long int) arr_57 [i_17] [15LL] [i_11] [i_11]))))));
                                arr_67 [i_16] [i_12] [i_16] [i_16] [i_17] = max((((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)31562), ((unsigned short)31694)))) << ((((-(((/* implicit */int) (unsigned short)7120)))) + (7134)))))), (((((/* implicit */_Bool) var_11)) ? (((unsigned int) arr_45 [i_11])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_45 [(unsigned char)11])))))));
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_60 [i_11 + 2] [i_16] [i_16] [i_16] [i_17]) ? (((/* implicit */int) arr_60 [i_11 + 2] [i_15] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_60 [i_11 + 1] [i_16] [i_17] [(unsigned short)19] [i_11 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_11 - 1] [i_15 + 1] [i_17] [i_17])) ? (((/* implicit */int) (unsigned short)9029)) : (((/* implicit */int) arr_62 [i_11 - 1] [i_11] [i_15] [i_17]))))) : (((((/* implicit */_Bool) var_8)) ? (arr_61 [i_11 + 1] [i_11] [i_11] [i_11]) : (((/* implicit */long long int) 1946355192))))));
                            }
                        } 
                    } 
                    arr_68 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6272528659820591308LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3360675372U)));
                }
            }
        } 
    } 
    var_39 = (_Bool)0;
}
