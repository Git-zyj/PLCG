/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131383
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_4))));
        var_20 = ((/* implicit */unsigned short) var_15);
        arr_2 [i_0] |= var_12;
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_21 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (((/* implicit */int) arr_1 [i_2] [i_2]))))));
            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_2] [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_1] [i_1] [(unsigned short)14]))));
        }
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) / (2001726486)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 3) 
    {
        arr_12 [i_3] |= ((/* implicit */_Bool) var_13);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_3]))))) ? (6073221518005498438LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 + 2])))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) var_16);
        var_25 = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_3] [i_3 + 3]));
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -2001726487)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_17 [i_4] [i_5]))))));
            arr_19 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_4] [i_4])))) / (((((/* implicit */_Bool) -6073221518005498437LL)) ? ((-(6073221518005498438LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            arr_20 [i_4] [i_5] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_14 [i_5])), (var_10))) >> ((((~(arr_18 [6LL] [11U] [i_5]))) - (16044475036531557121ULL)))));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)54)), (var_17)))) ? (var_13) : (((/* implicit */int) var_18)))) / (((/* implicit */int) var_0)))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_28 += ((/* implicit */signed char) arr_18 [i_4] [i_6] [i_4]);
            arr_24 [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) -6073221518005498438LL)) : (((((/* implicit */_Bool) (unsigned short)8252)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_23 [i_4] [i_6]))))));
            arr_25 [i_4] = ((/* implicit */unsigned int) -1439686022);
            var_29 ^= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_18)))))) ^ (arr_23 [i_6] [i_4]))), (((/* implicit */unsigned long long int) min((arr_14 [i_4]), (arr_14 [i_6]))))));
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            arr_30 [i_7] [i_4] = ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */int) var_16)) * (((/* implicit */int) var_16)))) : (((int) min((arr_23 [i_7] [i_7]), (((/* implicit */unsigned long long int) 3))))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_23 [i_4] [i_7]))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 4; i_8 < 21; i_8 += 2) 
            {
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1714352076)))) ? (((arr_33 [i_8 + 2] [i_7] [i_8] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 + 2] [i_7] [i_7]))) : (arr_32 [i_8 - 3] [19U] [i_7] [i_8]))) : ((~(arr_32 [i_8 + 3] [i_7] [i_8] [i_8]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 23; i_9 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_8 - 2] [i_8 + 1]))));
                    arr_37 [i_4] [i_8 + 1] [i_8 + 1] = ((/* implicit */int) var_16);
                }
                for (unsigned char i_10 = 2; i_10 < 23; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_4] [i_10] = ((/* implicit */int) ((signed char) min((arr_41 [i_4] [i_4] [i_8 + 2] [i_10 - 2]), (((/* implicit */long long int) -2001726486)))));
                        arr_44 [(signed char)12] [i_7] [i_7] [i_10] [i_10] [i_11 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                        var_33 = ((/* implicit */unsigned char) var_2);
                    }
                    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_34 -= ((/* implicit */unsigned char) var_11);
                        arr_47 [i_4] [i_7] [i_4] [i_10] = ((/* implicit */unsigned long long int) var_11);
                        var_35 = ((/* implicit */int) ((arr_41 [i_8 - 2] [i_10 + 1] [i_12] [i_12 - 1]) - ((-(arr_41 [i_8 - 2] [i_10 + 1] [i_12] [i_12])))));
                        var_36 -= ((/* implicit */int) (unsigned char)0);
                    }
                    arr_48 [i_7] [i_7] [i_10] [i_10] [i_8] = ((/* implicit */unsigned short) var_5);
                    var_37 = ((/* implicit */unsigned int) (short)-3919);
                }
                var_38 = ((/* implicit */signed char) var_3);
            }
            for (unsigned int i_13 = 4; i_13 < 20; i_13 += 2) 
            {
                arr_52 [i_13 + 2] = ((/* implicit */unsigned int) var_16);
                arr_53 [i_13] [i_7] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(var_12)))), ((+(((unsigned long long int) var_16))))));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_33 [i_4] [i_7] [i_13 + 2] [i_13 - 2])))) ^ (min((((long long int) (signed char)47)), (((/* implicit */long long int) min((24), (((/* implicit */int) var_17)))))))));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) /* same iter space */
                {
                    arr_57 [i_4] [4U] = ((/* implicit */int) min((((/* implicit */long long int) var_1)), ((((!(((/* implicit */_Bool) -7206330854498782650LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13])))))) : (((((/* implicit */_Bool) arr_55 [i_7] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7206330854498782660LL)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) arr_56 [i_14 + 2]))));
                        var_41 -= ((/* implicit */int) ((short) arr_49 [i_15] [i_14 + 1] [i_15 - 1] [i_13 - 1]));
                        arr_61 [i_4] [i_4] [i_7] [i_13] [i_14] [i_4] [i_15] = ((/* implicit */_Bool) var_6);
                        var_42 *= (~(((/* implicit */int) arr_49 [i_13 - 3] [i_14 + 1] [i_15 - 1] [i_15 - 1])));
                        arr_62 [i_7] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_15]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 4; i_16 < 21; i_16 += 4) 
                    {
                        arr_67 [i_16 - 4] [i_16 + 1] [i_4] [i_13] [i_7] [i_4] = ((/* implicit */unsigned int) ((short) arr_31 [i_13 - 4] [i_13 - 3] [i_13 - 2]));
                        arr_68 [i_4] [i_7] [i_13] [i_14] [i_14] [i_16] = ((/* implicit */short) arr_65 [(signed char)22] [i_7] [i_7] [i_14] [i_16] [i_14]);
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_43 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_42 [i_13 + 2] [i_14 + 3] [i_14 + 1] [i_14] [i_13])) >= (((/* implicit */int) (_Bool)1))))) == (((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_17 [14] [5LL])))) * (((/* implicit */int) arr_58 [i_13 + 2]))))));
                        arr_71 [i_4] [i_7] [i_7] [i_13] [i_14] [i_17] = ((/* implicit */_Bool) (+(min((7206330854498782660LL), (((/* implicit */long long int) (unsigned short)65535))))));
                        arr_72 [i_14 + 3] [i_17] [i_14 + 3] [i_13] [i_4] [i_7] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                    }
                    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) (~((~(((/* implicit */int) (short)3906)))))))));
                    var_45 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((short) arr_58 [i_4]))))));
                    var_46 = ((/* implicit */unsigned int) var_6);
                }
                for (unsigned short i_18 = 1; i_18 < 21; i_18 += 2) /* same iter space */
                {
                    var_47 = var_6;
                    arr_77 [i_13 - 3] |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_56 [i_13 + 3])) && (((/* implicit */_Bool) arr_56 [i_13 - 4])))));
                    var_48 = arr_38 [i_4] [i_13];
                    arr_78 [i_4] [i_4] [i_13] [i_18] = ((/* implicit */_Bool) arr_35 [i_13]);
                }
                for (signed char i_19 = 1; i_19 < 22; i_19 += 3) 
                {
                    var_49 = ((/* implicit */int) arr_81 [i_4] [i_4] [i_13] [i_4]);
                    var_50 = ((/* implicit */unsigned char) (((~(((-7980107791905745954LL) & (((/* implicit */long long int) ((/* implicit */int) var_9))))))) ^ (((/* implicit */long long int) 2043378683U))));
                }
            }
            var_51 &= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)3906))))) ^ (min((((/* implicit */unsigned long long int) arr_29 [i_4] [i_7] [i_7])), (arr_76 [i_4]))));
            arr_82 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_66 [i_7] [i_4])) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (arr_80 [i_4] [i_7] [i_7]))), (((/* implicit */unsigned long long int) ((int) arr_74 [i_4] [i_4] [i_4] [i_4] [i_7] [i_7])))))));
        }
    }
    var_52 ^= ((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) ((_Bool) var_9)))));
    var_53 = ((/* implicit */int) var_11);
}
