/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184227
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)79))))), (((((/* implicit */_Bool) (unsigned short)16811)) ? (5842569067292736071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [i_1 - 1] = ((/* implicit */short) ((unsigned long long int) min((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 + 1] [i_1]))));
            var_20 = ((/* implicit */signed char) ((max(((-(((/* implicit */int) (signed char)61)))), (((/* implicit */int) arr_1 [i_0])))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_0 [i_1] [i_0]))))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 12; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_5 [i_2] [i_2 - 2]);
                        arr_15 [i_4] [i_3] [i_3] = arr_1 [i_0];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        arr_21 [i_5] = ((signed char) arr_3 [i_5] [i_5]);
                        var_21 = ((signed char) arr_12 [i_0] [i_2 - 2] [i_5] [i_6]);
                        arr_22 [i_0] [i_2 - 1] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)126))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        {
                            arr_31 [i_0] [i_2] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)14))))));
                            arr_32 [i_7] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_10])) ? (max((arr_36 [i_10]), (arr_36 [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_10]))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 2) 
                {
                    {
                        arr_45 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_11] [i_12] [i_13]))) >= (arr_27 [i_10] [i_11] [i_12] [i_13 + 2] [i_13 - 2]))))) >= (arr_23 [i_13 - 1] [i_13] [i_13] [i_13])))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_48 [i_14] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10] [i_12] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (16311153285967733617ULL)))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) (short)10323))));
                            var_22 = ((/* implicit */long long int) ((_Bool) var_10));
                        }
                        arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (min((arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */long long int) (signed char)-21))))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-10334)))))) * (arr_44 [i_13] [i_13 - 2] [i_13] [i_13])))));
                        arr_50 [i_10] [i_10] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4611686017890516992LL))))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((arr_28 [i_11] [i_11] [i_11] [i_10] [i_10]) - ((-(var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(arr_46 [i_10] [i_10] [i_10] [i_10] [i_10])))))))))));
            var_24 = ((/* implicit */signed char) max((var_24), (((signed char) min(((!(var_13))), ((!(var_9))))))));
            arr_51 [i_10] [i_10] = ((/* implicit */signed char) ((((var_12) >= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10] [i_10] [i_10]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11] [i_11] [i_11]))) == (min((((/* implicit */unsigned long long int) 3274494467159110268LL)), (6321434003605980828ULL)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_10] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10] [i_11] [i_11])) ? (arr_36 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
        }
        for (signed char i_15 = 1; i_15 < 15; i_15 += 2) 
        {
            arr_55 [i_15] = ((/* implicit */long long int) var_11);
            var_25 = var_13;
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (short)-13462))) / ((+((~(((/* implicit */int) var_18))))))));
                            arr_62 [i_10] [i_15] [i_16] [i_15] [i_18] = arr_61 [i_18] [i_15] [i_17] [i_16] [i_15] [i_10];
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) (+(min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)15549))) : (-8479519070534426036LL))), (((/* implicit */long long int) ((short) var_6)))))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_20 = 1; i_20 < 13; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 4) 
                    {
                        {
                            arr_74 [i_10] [i_19] [i_20] [i_21] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20178))) == (4611686017890517003LL)));
                            var_28 ^= ((/* implicit */unsigned long long int) arr_61 [i_10] [i_10] [i_19] [i_20 + 2] [i_21] [i_22]);
                        }
                    } 
                } 
            } 
            arr_75 [i_10] [i_10] = ((/* implicit */signed char) ((((_Bool) var_3)) ? (((/* implicit */int) arr_39 [i_10])) : (((/* implicit */int) var_7))));
        }
        arr_76 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29958)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    /* vectorizable */
    for (short i_23 = 0; i_23 < 13; i_23 += 4) 
    {
        arr_79 [i_23] [i_23] = ((/* implicit */signed char) var_2);
        /* LoopNest 3 */
        for (short i_24 = 0; i_24 < 13; i_24 += 4) 
        {
            for (short i_25 = 2; i_25 < 10; i_25 += 4) 
            {
                for (long long int i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_27 = 4; i_27 < 12; i_27 += 2) 
                        {
                            var_29 -= ((/* implicit */short) (~(arr_28 [i_27 - 3] [i_27 - 4] [i_27 - 1] [i_27 - 4] [i_26])));
                            arr_93 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)10323)) ? ((~(arr_71 [i_24] [i_26] [i_27 - 4]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                            var_30 = ((/* implicit */unsigned long long int) arr_92 [i_23] [i_27 - 4] [i_25] [i_26] [i_27]);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_28 = 0; i_28 < 13; i_28 += 4) 
                        {
                            arr_98 [i_26] [i_24] [i_25 + 1] [i_26] [i_28] [i_24] [i_25] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_23] [i_23] [i_23]))) : (6321434003605980828ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_25] [i_25 - 1] [i_25 + 3])))));
                            var_31 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-4611686017890516993LL))))));
                            arr_99 [i_23] = ((/* implicit */signed char) ((arr_60 [i_23] [i_24] [i_23] [i_26] [i_25 - 2] [i_28] [i_28]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_23] [i_24] [i_25] [i_26] [i_25 + 3] [i_24] [i_28]))) : (6575848305095929373ULL)));
                            arr_100 [i_28] [i_26] [i_25 - 1] [i_24] [i_23] = ((/* implicit */long long int) ((short) arr_27 [i_25] [i_25 + 1] [i_25] [i_25 - 1] [i_25]));
                        }
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            arr_104 [i_25 + 1] [i_25] [i_25] [i_29] [i_25] [i_25] [i_25] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                            arr_105 [i_24] [i_29] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))))) ? (((/* implicit */int) ((5326311653362873254LL) > (-7102351892916762796LL)))) : (((/* implicit */int) arr_92 [i_23] [i_24] [i_25 + 1] [i_26] [i_29]))));
                        }
                        var_32 = var_15;
                    }
                } 
            } 
        } 
        var_33 = ((((/* implicit */_Bool) ((var_3) / (15082109414736829985ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)48887)) < (((/* implicit */int) (signed char)7)))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_23] [i_23] [i_23] [i_23] [i_23]))) : (var_15))));
    }
    var_34 *= ((/* implicit */unsigned short) var_8);
    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
}
