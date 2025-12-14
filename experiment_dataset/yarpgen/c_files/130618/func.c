/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130618
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) max((arr_1 [i_0]), (((signed char) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((-8154530877874161522LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1])))))) > (max((arr_6 [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                arr_9 [i_0] [i_1] [i_2] = arr_8 [13] [i_1] [i_1] [i_0];
                /* LoopSeq 3 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_16 [i_0] = ((/* implicit */signed char) (-(arr_10 [i_2] [i_0] [i_2 - 1] [i_2 + 1])));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                        arr_17 [i_0] [(signed char)9] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (signed char)122);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(8154530877874161497LL))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (9235007962061019257ULL)));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 + 2]))));
                    }
                    var_26 = ((/* implicit */unsigned short) arr_3 [i_1 - 1]);
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((((/* implicit */_Bool) -8154530877874161520LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [(short)6] [(short)8]))) : (arr_19 [i_0] [i_0] [2] [8ULL] [i_0] [i_2 - 1] [i_3]))))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1 - 1]))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 2] [i_6] [i_1 + 2] [i_0] [i_1 + 2])))))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-30414)) >= (((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_2] [i_2] [i_1])))))));
                    /* LoopSeq 1 */
                    for (short i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_8] [i_7] [i_2] [i_0] [i_1 - 1] [3] [i_0]));
                        var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_7 - 1] [13] [i_7] [i_7] [i_7 - 1])) ? (arr_4 [16U]) : (arr_25 [i_2] [i_2] [i_2] [i_2] [i_7 - 1])));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_15 [i_1] [16] [i_2]))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((arr_8 [(signed char)10] [i_1 + 2] [i_1] [(signed char)10]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1]))))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 2] [i_0]))) % (8154530877874161497LL)));
                    }
                }
                arr_28 [i_0] [i_1] [i_0] = ((((/* implicit */int) ((unsigned char) 3721659397149865203ULL))) >= (((/* implicit */int) arr_20 [i_0] [i_2 - 1] [i_2] [i_0 - 1] [i_0])));
            }
            arr_29 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((arr_11 [i_1 + 1] [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned long long int) max((arr_18 [i_0 + 1] [i_1 + 2]), (arr_18 [i_0 + 2] [i_1 - 1]))))));
            arr_30 [i_0] = ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [17]);
            var_35 *= ((/* implicit */_Bool) arr_22 [i_0] [(unsigned char)9] [i_0] [i_1 + 1]);
        }
        for (signed char i_9 = 3; i_9 < 18; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (long long int i_11 = 4; i_11 < 19; i_11 += 1) 
                {
                    {
                        arr_39 [i_0] [i_9] [i_10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)15), (arr_37 [(unsigned short)2] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_10] [i_11]))))) : (((/* implicit */int) (signed char)-81))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_11 - 1]))) : (((/* implicit */int) arr_14 [i_0 + 1] [i_9 + 1] [i_9 - 3] [i_11 - 3] [i_11 - 3]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_36 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_10] [i_11 - 1] [i_11 - 3] [i_11] [i_11 + 1])) && (((/* implicit */_Bool) arr_26 [i_10] [i_9 - 3] [i_10] [i_9 - 3] [(short)18]))));
                            var_37 += ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [3U] [i_0 + 1])) ^ (((/* implicit */int) arr_20 [i_11 - 4] [12ULL] [i_12] [i_12] [i_10]))));
                            var_38 = ((/* implicit */int) -8154530877874161519LL);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) 8154530877874161490LL))));
                            arr_44 [i_0] [i_0] [i_10] [i_11] [(short)19] = ((/* implicit */unsigned long long int) 1074498585);
                        }
                        arr_45 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_46 [i_0] [i_9] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_0] [i_9] [i_9 + 2] [i_0] [i_0]), ((signed char)-97))))) / (((unsigned long long int) ((((/* implicit */int) (signed char)29)) + (((/* implicit */int) (signed char)30)))))));
                    }
                } 
            } 
            arr_47 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)39703))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_0] [i_9] [i_9] [i_9] [i_0])), (663474916U))))));
            /* LoopSeq 3 */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                arr_50 [18ULL] [14LL] [i_14] &= ((/* implicit */unsigned long long int) ((int) arr_48 [i_14] [i_0] [i_0] [i_0]));
                var_40 ^= arr_11 [4ULL] [i_0 + 1] [i_9] [i_0 + 1];
                /* LoopSeq 1 */
                for (int i_15 = 1; i_15 < 18; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        arr_56 [i_0] = ((/* implicit */unsigned char) (+(min((arr_55 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2]), (arr_55 [i_0] [i_0 + 1] [6U] [(unsigned char)14] [i_0 + 2])))));
                        arr_57 [i_16] [12ULL] [i_0] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_37 [i_15 - 1] [i_15]))))));
                        arr_58 [i_0] [i_0] [i_0] [2ULL] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_6 [i_9 - 3] [i_0] [i_0 + 2])))) ? (((((2054019579684168415ULL) / (((/* implicit */unsigned long long int) arr_53 [i_0] [i_9] [i_9] [i_9] [i_9] [i_16] [i_16])))) * (arr_8 [i_0 - 1] [i_9] [i_9 - 2] [i_0]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_0]))), ((+(((/* implicit */int) (unsigned char)7)))))))));
                    }
                    var_41 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_14])) == (((/* implicit */int) arr_5 [i_14])))))))));
                    arr_59 [i_0] [i_0] = ((/* implicit */unsigned char) arr_53 [i_0] [0ULL] [i_0] [i_0] [i_9 - 2] [i_14] [i_14]);
                    arr_60 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) (((~(arr_49 [i_0] [i_0] [i_0 + 2]))) << ((((-(arr_26 [i_0] [i_0] [i_0] [i_0 + 2] [i_9 - 1]))) - (86569390403650013ULL)))))) : (((/* implicit */unsigned int) (((~(arr_49 [i_0] [i_0] [i_0 + 2]))) << ((((((-(arr_26 [i_0] [i_0] [i_0] [i_0 + 2] [i_9 - 1]))) - (86569390403650013ULL))) - (9270170065330021923ULL))))));
                    arr_61 [i_0] = ((/* implicit */int) (+(((unsigned long long int) 1336441533))));
                }
            }
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                arr_64 [i_0] [1] [(unsigned char)19] [i_0] = arr_25 [i_0] [i_9 - 2] [i_0] [i_9 - 2] [i_17];
                arr_65 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_54 [i_9 - 2] [i_9] [i_9] [i_9] [i_0]) * (((/* implicit */int) (signed char)-1))))) / (((arr_42 [i_0] [i_9 + 2] [i_9 - 3] [i_9]) / (arr_42 [i_0] [i_9] [i_17] [18LL])))));
                /* LoopSeq 2 */
                for (unsigned int i_18 = 3; i_18 < 19; i_18 += 3) /* same iter space */
                {
                    arr_70 [i_17] [i_0] [i_17] [i_18] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_43 [i_18] [i_18 - 2] [i_9] [i_0 - 1] [i_0 + 1])) ? (arr_43 [i_18 - 3] [i_18 - 1] [i_18] [i_0 + 2] [(signed char)6]) : (arr_43 [i_0] [i_18 - 2] [i_18] [i_0 - 1] [i_0])))));
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) (+(((long long int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) arr_37 [i_18 - 1] [i_9 - 3])), (min((((/* implicit */unsigned long long int) (unsigned char)27)), (arr_42 [i_0] [6LL] [i_17] [i_18])))))));
                    arr_71 [i_9] [i_0] [0ULL] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (unsigned char)78);
                    var_43 ^= min((((unsigned long long int) arr_24 [10LL] [i_0 + 1] [i_9 + 2] [i_17] [i_18] [i_18])), (((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1] [(_Bool)1]), (arr_1 [i_18 - 1])))));
                }
                for (unsigned int i_19 = 3; i_19 < 19; i_19 += 3) /* same iter space */
                {
                    arr_76 [i_0] [i_0] [i_17] [i_19] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_66 [i_0 - 1] [i_19 - 1]) % (arr_66 [i_0 - 1] [i_19 - 1]))));
                    var_44 += arr_52 [i_17] [16ULL] [i_17] [i_17];
                    var_45 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_43 [i_19 + 1] [i_19] [i_17] [i_9 - 2] [i_9 + 2])))));
                }
            }
            for (unsigned long long int i_20 = 2; i_20 < 18; i_20 += 3) 
            {
                var_46 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8154530877874161487LL)) * ((~(arr_31 [i_0])))));
                arr_81 [i_0] [i_20] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_20 [i_0] [i_9] [i_20 + 2] [i_20 - 2] [i_0])))), (((/* implicit */int) min(((unsigned char)27), (((/* implicit */unsigned char) arr_20 [5LL] [8] [i_20 - 2] [i_20] [i_0])))))));
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((unsigned char) arr_74 [i_20] [i_20 + 1] [i_9] [i_0 + 2])))));
            }
        }
        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
        {
            var_48 = ((/* implicit */unsigned char) min((var_48), ((unsigned char)4)));
            arr_84 [i_0] [i_0] [i_0] = ((/* implicit */int) max((max((arr_26 [i_0] [i_21] [10ULL] [i_21 + 1] [i_0 + 1]), (arr_26 [i_0] [i_0] [i_0] [i_21 + 1] [i_0 - 1]))), (min((arr_26 [i_0] [i_0] [i_0] [i_21 + 1] [i_0 - 1]), (((/* implicit */unsigned long long int) 8154530877874161498LL))))));
            /* LoopNest 2 */
            for (unsigned char i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                for (signed char i_23 = 0; i_23 < 20; i_23 += 3) 
                {
                    {
                        var_49 = ((/* implicit */signed char) ((((unsigned long long int) arr_75 [i_0] [i_0 + 2] [i_0] [i_21] [i_21 + 1])) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_21 + 1] [i_0] [(unsigned char)3] [i_0 + 2])) && (((/* implicit */_Bool) (+(4294967277U))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                        {
                            arr_92 [i_0] [4U] [i_0] [i_22] [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned char) max(((!(((/* implicit */_Bool) 4503049871556608ULL)))), (((((/* implicit */_Bool) 4294967293U)) || (arr_75 [i_23] [i_23] [i_22] [i_23] [i_24]))))));
                            arr_93 [i_21] [i_0] = ((arr_4 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0]) <= (arr_4 [i_0]))))));
                            arr_94 [i_0] [i_0] [i_22] [i_23] [i_24] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63984)))))))));
                            var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) min(((~(arr_66 [i_22] [i_0 - 1]))), (min((arr_66 [i_24] [i_0 - 1]), (((/* implicit */long long int) 14U)))))))));
                        }
                        for (long long int i_25 = 0; i_25 < 20; i_25 += 3) 
                        {
                            arr_98 [i_22] [i_22] [i_22] [i_22] [i_0] [i_22] = ((/* implicit */unsigned long long int) 4294967293U);
                            arr_99 [i_0] [i_22] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_75 [i_0] [i_0] [i_0 + 2] [i_21 + 1] [i_22]) ? (((/* implicit */int) arr_37 [i_0 + 1] [i_25])) : (((/* implicit */int) arr_80 [i_21] [i_21] [i_21 + 1] [i_22]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_21 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_21 + 1]))) : (7U)))) : (max((((long long int) 6858488339837359799LL)), (((/* implicit */long long int) arr_97 [i_22] [i_22] [i_0] [i_0 - 1] [i_0]))))));
                        }
                        var_51 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)17)), ((+(arr_53 [i_0] [i_21] [i_21 + 1] [i_0] [i_0] [i_0] [i_0])))));
                        arr_100 [i_23] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_21] [i_21]))));
                    }
                } 
            } 
            var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [0] [i_0] [i_0]), (arr_6 [i_21] [i_0] [11U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_21] [i_0] [i_0])) || (((/* implicit */_Bool) 820136293716799956ULL)))))) : (((((/* implicit */_Bool) arr_6 [i_21] [i_0] [i_21])) ? (arr_6 [i_21] [i_0] [i_0]) : (arr_6 [i_21] [i_0] [16U])))));
        }
    }
    var_53 = ((/* implicit */unsigned char) var_12);
}
