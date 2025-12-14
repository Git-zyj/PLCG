/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162512
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
    var_14 = ((/* implicit */unsigned long long int) (-(max(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)2])) ? (var_9) : (0U)))))) ? (((/* implicit */int) (unsigned short)40260)) : (((/* implicit */int) arr_2 [i_0]))));
            var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)127))));
        }
        arr_6 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_12))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) (+(max((((unsigned long long int) arr_4 [17ULL] [i_2])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_2] [(short)9] [i_0] [i_4] [i_5] = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40264)) / (((/* implicit */int) arr_3 [(unsigned short)17]))))) : (arr_1 [i_0])))));
                            var_17 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned short)40260)) - (((/* implicit */int) var_6)))));
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)70))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) arr_14 [i_3])) : ((-(((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_11 [(short)3])))))))));
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4]))) < (3827556222597336818ULL)))), (arr_7 [i_0]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_6 = 4; i_6 < 18; i_6 += 2) 
                {
                    arr_21 [4U] [4U] [(signed char)17] [(unsigned char)14] [4U] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0]))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40264)) ? (((/* implicit */int) (short)-3878)) : (((/* implicit */int) var_7))))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_0])), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_0])))))) - (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)25251))))) : (((arr_16 [i_6] [6ULL] [i_3 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6 + 3])))))))));
                    arr_22 [i_0] [i_2] [i_2] [5U] [12U] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_6 + 1])), ((unsigned short)40290))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_20 [i_6] [i_3] [i_2] [i_0]);
                }
                var_23 = ((/* implicit */unsigned char) arr_16 [i_0] [i_2] [i_3]);
                arr_23 [i_0] [i_3] [5U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3]))))) ? (((/* implicit */int) ((unsigned short) arr_4 [15] [(short)1]))) : (((/* implicit */int) ((arr_1 [i_2]) < (var_12)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
            }
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_3 [i_7 + 2])) * (((/* implicit */int) arr_24 [i_0] [(_Bool)1] [i_0])))) * (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-127)), ((unsigned short)40264))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 3; i_8 < 18; i_8 += 1) 
                {
                    var_25 = ((/* implicit */signed char) arr_25 [i_8 - 1] [i_2] [i_0]);
                    var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_7 + 2] [1ULL] [i_8 - 2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        arr_33 [i_0] [i_2] [i_7 - 2] [i_8 - 1] [i_8] [i_7 - 2] = ((/* implicit */int) arr_9 [i_2] [i_2] [i_9]);
                        arr_34 [7U] [7U] [i_8 - 1] = (+(2024912335494649726ULL));
                    }
                    arr_35 [i_0] [i_2] [i_2] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)12472)) ? (((/* implicit */long long int) 3886837897U)) : (arr_15 [(unsigned char)19] [i_2] [i_2] [i_7] [i_8 + 2])))));
                }
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    arr_39 [i_0] [(short)4] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_7]), (((/* implicit */unsigned short) arr_7 [i_7]))))) ? ((~(1583840429610354911LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_7] [i_10]))) < (var_12)))))));
                    arr_40 [16U] [i_2] [i_7] [i_10] [i_7] = ((/* implicit */signed char) ((_Bool) ((unsigned char) (~(((/* implicit */int) (signed char)61))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    var_27 = ((/* implicit */signed char) (+(((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)49856))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 1; i_12 < 20; i_12 += 2) 
                    {
                        var_28 = ((/* implicit */short) max(((+(((arr_24 [i_2] [i_7] [i_11]) ? (((/* implicit */int) arr_30 [i_0] [i_0] [(short)10])) : (((/* implicit */int) arr_9 [i_0] [7LL] [i_0])))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) : (arr_31 [i_0] [9ULL] [9ULL] [i_11] [i_12 - 1]))) < (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (arr_7 [i_12]))))))))));
                        var_29 = arr_4 [7LL] [i_2];
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_37 [i_7 + 2] [i_11] [i_12 - 1])) < (((/* implicit */int) arr_37 [i_7 + 1] [i_7 + 1] [i_12 - 1]))))) < ((-(((/* implicit */int) arr_37 [i_7 - 1] [i_11] [i_12 - 1]))))));
                        arr_47 [i_0] [7ULL] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)40264);
                        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_12])) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50))) < (arr_19 [i_0] [i_2] [i_2] [16])))))) < ((+(((/* implicit */int) var_2))))));
                    }
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_50 [i_0] [(short)19] [i_2] [i_7 + 2] [i_7] [(unsigned short)2] [i_13] = ((/* implicit */signed char) (+(arr_38 [(short)17] [i_2] [(short)17] [(short)17])));
                        arr_51 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-12);
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_38 [i_0] [i_2] [i_7 + 1] [i_0])))) ? (((((/* implicit */_Bool) arr_27 [i_7 + 1] [i_7 + 1] [i_2] [i_0])) ? (((/* implicit */int) (unsigned short)46240)) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
                for (long long int i_14 = 1; i_14 < 20; i_14 += 1) 
                {
                    arr_55 [i_0] [11] [i_0] [i_0] [i_0] [(short)16] = ((/* implicit */short) (+((~(((((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0])) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) - (11886)))))))));
                    var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)39777)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_38 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 + 2])));
                    var_34 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_14 - 1])) < (((/* implicit */int) arr_2 [i_14 + 1]))))) < (((/* implicit */int) arr_11 [i_0]))));
                }
                arr_56 [i_7 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [i_7 - 1] [i_7] [i_2] [i_0]))));
            }
            /* LoopNest 3 */
            for (signed char i_15 = 1; i_15 < 20; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    for (unsigned short i_17 = 2; i_17 < 19; i_17 += 2) 
                    {
                        {
                            arr_64 [i_0] [i_15] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_44 [i_0] [i_2] [i_0] [13ULL])), ((+((+(((/* implicit */int) (signed char)-26))))))));
                            arr_65 [i_0] [i_2] [i_0] [i_16] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [(signed char)14] [i_15] [i_17 - 1])) < (((/* implicit */int) arr_53 [i_17 - 2] [18U] [2] [i_2] [i_0]))))) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_15 - 1]))))) ? (max((min((((/* implicit */unsigned int) (short)-28881)), (2518354868U))), (((unsigned int) arr_42 [i_0] [i_2] [i_2])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)44)))))));
                            arr_66 [(short)2] [i_15] [i_2] [i_2] [5U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_41 [i_2] [i_17 + 2])), (arr_20 [i_0] [i_2] [i_15 + 1] [i_17 - 2])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1024)), ((unsigned short)15265)))) : (((((/* implicit */int) (signed char)-41)) - (((/* implicit */int) (short)15))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)40282), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */_Bool) arr_44 [i_0] [i_18] [i_0] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) : (1869655379263191748ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))));
            arr_70 [(short)2] = ((/* implicit */signed char) min((2002230330), (((/* implicit */int) (!(((((/* implicit */int) arr_28 [i_0] [i_18] [i_18] [i_18])) < (((/* implicit */int) (unsigned short)25251)))))))));
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                for (signed char i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    {
                        arr_77 [i_0] [4] [i_18] [i_18] [i_19] [(_Bool)0] = ((/* implicit */unsigned char) ((var_4) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((var_4) ? (3711487463028947801ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25262))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)28423)), ((unsigned short)65528)))))));
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (short)28880)) : (((/* implicit */int) var_3)))))));
                    }
                } 
            } 
        }
    }
}
