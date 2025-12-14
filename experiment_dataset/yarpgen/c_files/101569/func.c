/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101569
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
    var_16 &= ((/* implicit */int) var_15);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14588711767917088465ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191))) : (3858032305792463138ULL)))) ? (((((/* implicit */_Bool) 3858032305792463136ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13)))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) min((arr_4 [i_1] [i_1]), (((((/* implicit */_Bool) min((var_2), (3858032305792463151ULL)))) ? (((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [14ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (_Bool)1))));
                        arr_15 [i_1] = ((/* implicit */unsigned int) ((arr_8 [i_2] [14U] [i_4]) == ((-((-(3858032305792463144ULL)))))));
                        var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(1594970940)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3858032305792463151ULL)) && (((/* implicit */_Bool) arr_9 [i_1]))))) : (((/* implicit */int) arr_6 [(short)13] [i_2]))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_4])) ? (max((var_10), (((/* implicit */int) (signed char)-62)))) : ((~(117786788))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3] [(unsigned char)2])) ? (((/* implicit */int) arr_13 [12U] [i_4] [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_2] [i_3]))))) ? ((-(((/* implicit */int) arr_5 [i_4])))) : ((-(((/* implicit */int) (short)-15827)))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    arr_27 [(unsigned char)1] [i_5] [i_5] [i_5] = arr_22 [i_5] [i_6] [i_5];
                    var_21 += ((/* implicit */short) arr_12 [i_5] [15U] [i_6] [15U]);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_3))));
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_5]))));
    }
    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        var_23 = max((0U), (((/* implicit */unsigned int) min((arr_29 [i_8]), (arr_29 [i_8])))));
        arr_31 [i_8] [i_8] = ((((/* implicit */_Bool) var_2)) ? ((+((-(((/* implicit */int) (unsigned short)22952)))))) : (max((((/* implicit */int) (unsigned short)22952)), (1594970940))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 18; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                {
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_8] [i_8])) : (var_11)));
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            {
                                arr_42 [i_8] [i_8] [i_10] [4] [i_11] [i_12] = ((/* implicit */int) arr_32 [i_8]);
                                var_25 = ((/* implicit */signed char) 13715384731171130346ULL);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_39 [i_8] [i_9 + 1] [i_8] [i_11 + 2] [i_11 + 3])) % (14588711767917088462ULL)))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 286719766U)) : (2427945756839977773ULL))))) : ((~(min((((/* implicit */unsigned long long int) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8])), (var_1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (unsigned short)42580)), (5718806318658997691ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)42575))))) : (((((/* implicit */_Bool) 14588711767917088469ULL)) ? (((((/* implicit */_Bool) 14401411523327059901ULL)) ? (var_12) : (var_9))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) var_0)) : (var_12))))))))));
                                arr_47 [i_8] [i_9] [i_10] [i_13] &= ((/* implicit */unsigned int) (+(max((520392374248390817ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-2147483631) : (-117786789))))))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_8] [i_9] [i_8] [i_13] [i_9 - 1])) ? (arr_39 [i_10] [i_9 + 1] [12ULL] [i_13] [i_9 + 1]) : (arr_39 [i_9] [i_9] [i_10] [(signed char)8] [i_9 - 2])))) ? (((((/* implicit */_Bool) (short)23974)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (2409893306U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) min((arr_41 [i_8] [i_8] [i_8] [i_10]), (((/* implicit */short) arr_44 [i_8]))))), (((((/* implicit */_Bool) 74566910445533155ULL)) ? (var_8) : (((/* implicit */int) (unsigned short)35933))))))) != (((((/* implicit */_Bool) var_11)) ? (2029178849U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9])))))));
                }
            } 
        } 
    }
}
