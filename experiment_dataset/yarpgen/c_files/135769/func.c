/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135769
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) ((short) arr_5 [i_0] [i_1]));
            var_14 -= ((/* implicit */short) ((unsigned short) (signed char)14));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
            var_15 = ((/* implicit */_Bool) ((long long int) (+(arr_7 [i_0] [i_2]))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)14))));
        var_16 += ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_5 [i_0] [i_0])))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_17 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1] [i_3])) && (((/* implicit */_Bool) 12685717695484940170ULL))))));
                arr_17 [i_3] [i_4] [i_4] [i_5] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_8))))));
                arr_18 [i_3 + 1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned int) (-((+(1537175983331476654ULL))))));
                var_18 = ((/* implicit */unsigned char) (+(((int) (-(4294967295U))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned int i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        {
                            arr_26 [i_6] [i_4] [i_5] [i_5] [i_7] [i_4] [i_7] = ((/* implicit */unsigned long long int) (!((!(arr_20 [i_6] [i_7 + 1] [i_7 + 2] [i_7 + 1])))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (short)-16384))))))));
                            arr_27 [i_3] [i_4] [i_5] [i_6] [i_4] [i_6] = ((/* implicit */unsigned char) ((long long int) ((signed char) ((((/* implicit */int) (signed char)-67)) != (((/* implicit */int) (short)-30779))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                var_20 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_7)))));
                var_21 = ((/* implicit */_Bool) ((long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_13 [i_8] [i_4] [i_3]))))));
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((_Bool) (+((+(4028424646U))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_36 [i_8] [i_9] [i_8] [i_4] [i_8] = ((/* implicit */unsigned int) (+(((long long int) arr_16 [i_3 + 1] [i_3] [i_3 + 1]))));
                        var_23 = (-(((long long int) arr_11 [i_3 + 1])));
                        var_24 = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) ((short) arr_30 [i_3] [i_8] [i_10]))))));
                    }
                    arr_37 [i_8] [i_8] [i_4] [i_8] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)0))))));
                    var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (signed char)-12)))));
                    var_26 &= ((/* implicit */short) ((long long int) 309372074));
                }
                /* LoopSeq 4 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    arr_41 [i_8] [i_8] [i_8] [i_3 + 1] = (+((+((+(274861129728ULL))))));
                    var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(12U)))))))));
                    var_28 -= ((unsigned long long int) ((unsigned int) -679247810));
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    arr_45 [i_3 + 1] [i_8] [i_3] [i_3] = ((unsigned long long int) arr_32 [i_3 + 1] [i_3] [i_8] [i_3 + 1] [i_3 + 1] [i_3 + 1]);
                    var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
                    arr_46 [i_8] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!((!((_Bool)1)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_49 [i_3] [i_8] [i_8] [i_13] = ((/* implicit */unsigned int) ((short) ((unsigned short) 5820935747077790374ULL)));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))))));
                    var_31 *= (-((-((+(((/* implicit */int) arr_13 [i_4] [i_4] [i_4])))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_54 [i_3] [10] [i_14] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_40 [12LL] [i_4])))));
                    arr_55 [i_8] = ((/* implicit */short) (+((+(arr_42 [i_8])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_15 = 1; i_15 < 21; i_15 += 4) 
                    {
                        arr_58 [i_8] [i_4] [i_4] [i_8] [i_8] [i_14] [i_15] = ((/* implicit */unsigned short) ((int) var_9));
                        arr_59 [i_3 + 1] [i_4] [i_8] [i_14] [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-62))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 1; i_16 < 19; i_16 += 1) 
                    {
                        var_32 = (-(((/* implicit */int) arr_53 [i_3 + 1] [i_8])));
                        var_33 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                        var_34 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_60 [2ULL] [2ULL] [i_8] [i_8] [i_8])))));
                        var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) -679247814))));
                    }
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        arr_66 [i_14] [i_14] [i_14] [i_14] [i_14] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                        var_36 -= ((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned char) 679247810))) ^ (((/* implicit */int) (short)-1))))));
                    }
                    var_37 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64)))))));
                    arr_67 [i_3] [i_4] [i_8] [i_8] = ((signed char) (+(arr_56 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_14] [i_8])));
                }
            }
            arr_68 [i_4] = ((/* implicit */long long int) (~((~(arr_11 [i_3 + 1])))));
            var_38 = ((/* implicit */_Bool) ((signed char) (~(2353774664613927386LL))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_39 += (-((-((-(5761026378224611458ULL))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                var_40 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1])))))));
                arr_77 [i_3] [i_19] = ((/* implicit */int) ((_Bool) ((signed char) ((unsigned long long int) arr_72 [i_3]))));
                arr_78 [i_18] [i_18] [i_3 + 1] [i_18] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
            }
            var_41 = ((/* implicit */unsigned char) (+(((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
            /* LoopNest 3 */
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                for (signed char i_21 = 3; i_21 < 19; i_21 += 3) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_86 [i_22] [i_21] [i_20] [i_3] [i_3] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) 965019067140824445ULL))))))));
                            arr_87 [i_3 + 1] [i_18] [i_20] [i_18] [i_18] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) var_12)))));
                            var_42 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) -679247814)))));
                            var_43 = ((/* implicit */short) (+((+((-(((/* implicit */int) (signed char)25))))))));
                            arr_88 [i_3 + 1] [i_18] [i_20] [i_18] [i_22] [i_22] = ((/* implicit */unsigned char) (~((~((~(arr_50 [(_Bool)0] [i_18] [i_20] [i_20])))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            var_44 -= ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))));
            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_62 [i_3 + 1] [i_23]))))))));
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 22; i_24 += 3) 
            {
                for (signed char i_25 = 0; i_25 < 22; i_25 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_26 = 0; i_26 < 22; i_26 += 1) 
                        {
                            arr_98 [i_3 + 1] [i_3] [i_23] [i_24] [i_23] [i_26] = ((/* implicit */long long int) ((unsigned long long int) (short)-166));
                            arr_99 [i_23] [i_23] [i_26] [i_24] [i_26] [i_25] [i_23] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_27 = 2; i_27 < 21; i_27 += 3) 
                        {
                            arr_102 [i_23] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_11))))));
                            var_46 = ((/* implicit */_Bool) ((short) ((_Bool) (!(((/* implicit */_Bool) var_3))))));
                            var_47 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)60))))) & (((unsigned int) var_2))));
                        }
                        /* vectorizable */
                        for (signed char i_28 = 0; i_28 < 22; i_28 += 4) 
                        {
                            var_48 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_40 [i_28] [i_24]))));
                            var_49 += ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_93 [i_25] [i_25] [i_24] [i_23] [i_3])))));
                            arr_105 [i_3] [i_23] [i_23] [i_25] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3]))));
                        }
                        arr_106 [i_23] [i_23] [i_3] [i_23] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75)))))));
                    }
                } 
            } 
            arr_107 [(signed char)8] |= ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) (+(((/* implicit */int) arr_39 [i_3 + 1] [10LL] [i_23]))))));
        }
        arr_108 [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned int) ((unsigned char) ((short) ((((/* implicit */int) arr_96 [i_3] [i_3] [i_3 + 1])) >> (((5174566603648592977ULL) - (5174566603648592957ULL)))))));
        /* LoopNest 2 */
        for (unsigned short i_29 = 0; i_29 < 22; i_29 += 3) 
        {
            for (unsigned char i_30 = 3; i_30 < 19; i_30 += 4) 
            {
                {
                    var_50 *= ((/* implicit */long long int) ((unsigned long long int) (short)-160));
                    var_51 += ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_3] [i_29] [i_30 - 3] [i_3 + 1] [i_3] [i_30 - 2]))))) ^ (((unsigned long long int) var_1)));
                }
            } 
        } 
        arr_114 [i_3] = ((/* implicit */_Bool) (-((((+(((/* implicit */int) (_Bool)1)))) + ((-(((/* implicit */int) var_11))))))));
    }
    var_52 |= ((/* implicit */unsigned int) ((short) (signed char)-15));
    var_53 = ((/* implicit */long long int) (+(var_5)));
    var_54 *= ((/* implicit */short) (+(((/* implicit */int) ((short) ((unsigned char) var_2))))));
}
