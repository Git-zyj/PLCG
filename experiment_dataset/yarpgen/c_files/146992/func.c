/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146992
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (min((0LL), (((/* implicit */long long int) var_3)))))), (-4707939914986581543LL))))));
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */int) (short)12387)), (((((/* implicit */_Bool) ((short) (short)-15216))) ? (((/* implicit */int) (unsigned char)5)) : ((-(((/* implicit */int) (short)-15225))))))));
                    arr_8 [i_0 + 1] [i_0] = ((/* implicit */long long int) ((_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_3 = 2; i_3 < 6; i_3 += 1) 
    {
        arr_11 [(unsigned short)1] [(unsigned short)1] = ((/* implicit */int) ((max((arr_4 [(unsigned short)10] [i_3 + 1] [(unsigned char)20]), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23116)) ? (arr_10 [i_3] [i_3]) : (((/* implicit */int) var_8))))))) << (((((((/* implicit */int) (short)-15216)) + (15270))) - (54)))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 8; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_14)));
                            arr_22 [i_7] [i_5 - 1] [8] = ((/* implicit */unsigned short) (+(max((4070050396U), (((/* implicit */unsigned int) 840906274))))));
                            var_20 += min(((~(((arr_4 [i_4] [i_5 + 2] [(unsigned short)16]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (var_9));
                        }
                        arr_23 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) var_15);
                        var_21 = ((/* implicit */short) arr_13 [i_3] [i_3] [i_3]);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((3188801084U), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */long long int) var_12)) & (arr_21 [i_6] [i_5 - 1] [i_4] [i_4] [i_4] [i_3] [i_3]))) : (((((/* implicit */_Bool) var_7)) ? (-2813937910166108LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */unsigned char) var_15);
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned long long int) var_13);
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                {
                    var_23 = -840906255;
                    arr_35 [i_8] [i_9] [i_10] = (((((-(((/* implicit */int) var_5)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_29 [i_10 - 1])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8733))))) - (9187820904062212545LL))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_15))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            {
                                arr_44 [i_10] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 7491821974943485282LL)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((840906284) | (-840906275))))) + (((/* implicit */int) var_3))));
                                var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17773))) : (8608828675092101951ULL)))));
                                arr_45 [i_8] [i_9] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)0)), (-2134240284)))) <= (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (840906288))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_46 [i_8] = ((/* implicit */signed char) (((_Bool)1) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */long long int) arr_33 [i_8] [i_8])) >= (min((((/* implicit */long long int) var_13)), (3LL))))))));
        arr_47 [i_8] = ((/* implicit */_Bool) 1578862838);
    }
    for (short i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_14 = 1; i_14 < 18; i_14 += 2) 
        {
            arr_55 [i_13] [(short)14] = ((/* implicit */int) var_9);
            var_26 = ((/* implicit */int) (short)15199);
            arr_56 [i_13] [i_13] [i_13] = ((/* implicit */int) arr_52 [i_13] [i_13]);
            arr_57 [i_13] [i_14 + 2] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 840906267)) ? (((((/* implicit */_Bool) (signed char)-119)) ? (4192898690480826768LL) : (-7491821974943485265LL))) : (((/* implicit */long long int) -1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) var_13))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_3))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_11)))) ? (((/* implicit */long long int) 4028760379U)) : (arr_4 [i_13] [i_13] [i_13]))));
        }
        for (unsigned int i_15 = 1; i_15 < 19; i_15 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_16 = 1; i_16 < 20; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 19; i_17 += 3) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) arr_65 [i_13] [i_13]);
                            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_13] [i_15 + 2]))));
                            var_29 += ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
                            arr_69 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */int) var_0);
                            arr_70 [i_13] [i_15] [i_17] [i_13] = ((((/* implicit */_Bool) 1578862838)) ? (1809665258) : (((/* implicit */int) (unsigned char)161)));
                        }
                    } 
                } 
                arr_71 [i_13] [i_15] [i_13] = ((/* implicit */unsigned int) arr_48 [14LL]);
            }
            var_30 = ((/* implicit */int) (signed char)-91);
        }
        for (unsigned int i_19 = 2; i_19 < 17; i_19 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) var_9);
            var_32 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) var_5))))), (-4192898690480826777LL)));
        }
        for (unsigned int i_20 = 2; i_20 < 17; i_20 += 3) /* same iter space */
        {
            arr_78 [(signed char)6] [i_20] [i_20] |= ((/* implicit */unsigned int) var_3);
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_58 [i_13] [i_20 - 1]))));
        }
        var_34 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)52)) - (((/* implicit */int) arr_74 [i_13] [6LL] [i_13]))))) ? (((/* implicit */unsigned long long int) arr_77 [i_13] [i_13] [i_13])) : (((unsigned long long int) (_Bool)1)));
        var_35 = ((/* implicit */unsigned short) (signed char)-99);
        var_36 &= ((/* implicit */signed char) var_8);
    }
    for (unsigned short i_21 = 2; i_21 < 21; i_21 += 2) 
    {
        var_37 = ((/* implicit */signed char) max((1003010578), (((/* implicit */int) ((arr_1 [i_21] [i_21]) && (((/* implicit */_Bool) (short)-20588)))))));
        var_38 = ((/* implicit */unsigned short) ((int) max((((int) 2147483647)), (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)65534)))))));
    }
    var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((_Bool)1), (var_0)))) | (((/* implicit */int) (_Bool)0))));
    var_40 = ((/* implicit */unsigned short) var_4);
}
