/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133779
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned short) ((short) ((unsigned short) min((((/* implicit */unsigned short) (signed char)-31)), (var_6)))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (((arr_2 [(unsigned short)12]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [0])))))))) << (24U))))));
    }
    for (short i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_16 = ((/* implicit */_Bool) arr_5 [i_1]);
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) arr_8 [i_3]))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60408)))) : (((((/* implicit */_Bool) (unsigned short)47041)) ? (81453625) : (((/* implicit */int) (unsigned short)65535)))))) & (((((/* implicit */int) arr_8 [i_2 - 2])) / (max((((/* implicit */int) var_1)), ((-2147483647 - 1)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_10 [i_3] [i_3 + 2] [i_4]), (arr_10 [i_2] [i_3 + 2] [i_4])))) - ((+(((/* implicit */int) var_4)))))))));
                                var_19 = ((/* implicit */unsigned char) ((_Bool) ((arr_4 [i_2 + 1] [i_3 + 2]) ? (((/* implicit */int) arr_4 [i_2 - 2] [i_3 - 2])) : (((/* implicit */int) arr_4 [i_2 - 2] [i_3 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (5896940327435037585LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)21239)) ? (((/* implicit */int) (short)21240)) : (-488553588)))))));
        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) 910171655)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27611)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2])))))));
        var_22 ^= ((((((/* implicit */int) arr_7 [i_1 - 1] [i_1])) < (((/* implicit */int) ((((/* implicit */int) arr_3 [16] [16])) == (((/* implicit */int) var_2))))))) ? ((~(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1])))) : (((((/* implicit */int) (unsigned short)22412)) << (((((((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 1] [i_1 - 1])) + (31))) - (26))))));
    }
    for (short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) var_8);
        arr_23 [(signed char)14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [(short)9] [i_6])), (var_1))))))) - ((+(max((((/* implicit */unsigned long long int) var_3)), (var_8)))))));
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)252)))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
    {
        var_25 -= ((/* implicit */unsigned short) ((((unsigned long long int) arr_19 [(signed char)1] [i_7])) + (((/* implicit */unsigned long long int) var_9))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [(signed char)8] [i_8] [(signed char)8] [i_7] [i_8] = (-(((((/* implicit */_Bool) (short)21239)) ? (((/* implicit */long long int) arr_24 [i_8])) : (arr_17 [i_8] [i_10]))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)94)) != (((/* implicit */int) arr_22 [i_8] [i_10]))));
                        arr_37 [i_8] = ((/* implicit */unsigned long long int) var_6);
                        var_27 = ((/* implicit */signed char) (-((-(var_11)))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_8] [i_8])) | (((/* implicit */int) arr_4 [i_10] [i_9]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) ((unsigned short) (~(-1146060355))));
                        /* LoopSeq 4 */
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                        {
                            var_30 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)16] [(signed char)16] [(signed char)16]))) * (arr_17 [i_7] [i_7])));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_13))));
                            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_7] [i_8] [i_8] [i_8] [i_7] [i_7]) | (arr_39 [i_7] [i_12] [(signed char)12] [i_9] [i_11] [(signed char)12])))) ? (arr_24 [i_9]) : (((/* implicit */int) ((unsigned char) var_0)))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                        {
                            arr_47 [i_11] = ((/* implicit */unsigned long long int) ((int) 81453622));
                            var_33 = ((/* implicit */unsigned long long int) (~(arr_42 [i_11] [i_9])));
                            var_34 += ((/* implicit */unsigned char) ((((arr_44 [i_7] [i_8] [i_9] [i_9] [i_11] [i_13]) + (2147483647))) << (((((/* implicit */int) (unsigned short)61275)) - (61275)))));
                        }
                        for (unsigned short i_14 = 3; i_14 < 18; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (((_Bool)1) ? (68719476735ULL) : (((/* implicit */unsigned long long int) 2U)))))));
                            var_36 = ((/* implicit */int) ((signed char) ((((/* implicit */int) (short)-26900)) - (((/* implicit */int) (_Bool)1)))));
                        }
                        for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            var_37 -= ((((/* implicit */int) arr_14 [i_8] [i_7] [22] [i_15])) % (((/* implicit */int) arr_49 [i_7] [i_15] [i_7] [i_7])));
                            arr_54 [i_7] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_11] [i_8] [i_9] [i_8] [14ULL] [i_11]))));
                            var_38 = ((unsigned char) ((signed char) 17611155647367591121ULL));
                            var_39 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_14 [i_9] [i_7] [i_7] [(short)6])))));
                            arr_55 [i_15] [i_11] [i_9] [i_9] [i_11] [i_7] = ((/* implicit */unsigned short) (-(-1490623425)));
                        }
                        var_40 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_6)))));
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (((((_Bool)0) ? (1930243832) : (((/* implicit */int) (unsigned short)19047)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) -2126344625)) < (8162784174046996455ULL)))))))));
                    }
                    arr_56 [i_9] [i_8] [i_7] [i_7] = ((/* implicit */signed char) ((int) var_9));
                    var_42 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_7]))) / (var_8)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned short i_17 = 2; i_17 < 19; i_17 += 3) 
            {
                {
                    var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_17 - 1] [i_17 - 1] [i_17] [(short)2])) != (((/* implicit */int) arr_11 [i_7] [i_16] [i_17 + 1] [i_17 + 1]))));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 17; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            {
                                var_44 *= ((/* implicit */unsigned short) ((int) (~(9787660729690342305ULL))));
                                var_45 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)88));
                                var_46 -= ((/* implicit */unsigned long long int) ((unsigned int) 1517162290));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_20 = 4; i_20 < 17; i_20 += 4) 
        {
            for (signed char i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                for (short i_22 = 1; i_22 < 17; i_22 += 2) 
                {
                    {
                        var_47 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_20 - 2])) ? (var_11) : (arr_59 [i_20 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned int i_23 = 0; i_23 < 20; i_23 += 3) 
                        {
                            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) -4926355820046139649LL))));
                            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_20 + 1])) ? (((/* implicit */int) arr_28 [i_7])) : (((/* implicit */int) arr_28 [i_7]))));
                        }
                        arr_76 [(short)0] [i_20] [(short)0] [(short)0] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_46 [i_20 - 3] [i_21] [i_20] [i_20 - 3]))));
                    }
                } 
            } 
        } 
    }
    var_50 = ((/* implicit */long long int) var_5);
}
