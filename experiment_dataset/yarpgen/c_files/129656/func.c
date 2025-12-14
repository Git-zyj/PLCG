/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129656
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
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) var_12))));
    var_14 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (max((var_5), (((/* implicit */long long int) var_0)))))) | (((/* implicit */long long int) ((((int) var_11)) & (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) ((unsigned char) ((signed char) arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */unsigned char) (((!((!(arr_1 [i_0] [i_0]))))) ? ((+(((((/* implicit */int) (_Bool)1)) / (582833693))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_4))))))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_17 = ((((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) ^ (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))) * (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))));
            var_18 = ((/* implicit */int) max((var_18), ((((+(((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) ((_Bool) arr_1 [20U] [i_1])))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2 - 1]))));
            arr_6 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23418)) ? (-582833693) : (((/* implicit */int) (unsigned char)64))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((var_3) / (((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)27845))))) ? (((/* implicit */int) arr_1 [(short)18] [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_3 - 1]))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)23402)) * (63))) >> (((9223372036854775807LL) - (9223372036854775805LL)))))) : (var_8)));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) (~(arr_2 [22LL]))))), (arr_7 [(unsigned char)16]))))));
                var_23 |= ((/* implicit */_Bool) min((((((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1])) | (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1])))), (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1]))));
                arr_14 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_9 [i_3 - 1])))))));
            }
            var_24 *= ((/* implicit */unsigned int) var_0);
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_7 [i_0])));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_7] [i_0])) & (((((((/* implicit */int) arr_5 [i_0] [i_5])) < (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_3 [i_0])))) : (((int) arr_5 [i_3] [i_7]))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_3] [i_5] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_3 - 1] [i_0] [i_0]))) * (((((/* implicit */_Bool) (short)-15561)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_7 [i_0]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_5])))))));
            }
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_0] [i_9] [i_8] [i_3] [i_0])) >> (((((/* implicit */int) (unsigned char)70)) - (61)))))) ? (((/* implicit */int) arr_26 [i_9] [i_0])) : (max((-59), (((/* implicit */int) (unsigned char)176))))))));
                            var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */long long int) arr_16 [i_0] [i_9] [i_10])))), (((/* implicit */long long int) (-(var_3))))))) ? (((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])) ? (min((arr_8 [i_0] [(_Bool)1]), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3 - 1] [16] [16] [i_3 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [(signed char)22])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [(unsigned char)18])) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [24])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (unsigned char i_12 = 4; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)27845)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12))))))) / (max((min((((/* implicit */int) var_1)), (1356244273))), (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))))));
                            arr_37 [i_12] [i_0] [i_11] [i_8] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_31 [i_0] [i_3 - 1] [i_12 - 3] [i_12] [i_12 + 1])))) ? ((((~(var_12))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) & (var_5))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_0] [i_11] [i_12])) : (var_3))))))));
                            arr_38 [i_11] [i_0] [i_8] [i_11] [i_12 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1808355052332424255LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (1808355052332424255LL)));
                            arr_39 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8] [i_8] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_11] [i_12 - 1])) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) arr_4 [i_11]))))), (((((_Bool) var_6)) ? (arr_13 [i_0] [i_3 - 1] [i_8]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_8] [i_11] [i_12])))))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) -582833671)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) : (-4721795133510646776LL))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_3] [i_8]))))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [(unsigned char)18]), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) arr_27 [i_0] [i_3 - 1] [i_8] [i_3 - 1])) : (((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1]))))))))));
            }
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)185))))))) ? (((/* implicit */int) ((unsigned char) min((arr_15 [i_0] [i_13] [(unsigned short)22]), (((/* implicit */unsigned long long int) 3626783800U)))))) : (((((/* implicit */_Bool) arr_25 [16U] [i_0] [16U])) ? (((/* implicit */int) ((-4721795133510646776LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_13 - 1] [i_13] [i_13 - 1])))))) : ((+(((/* implicit */int) arr_16 [i_0] [i_13 - 1] [i_0]))))))));
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13 - 1])) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_13])))))))))));
        }
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_4 [16U]))));
        arr_42 [i_0] = ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned char i_14 = 3; i_14 < 18; i_14 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            arr_47 [i_14] [i_15] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 582833709)) == (arr_15 [i_14] [i_14] [i_15]))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned short)35557)))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((arr_40 [i_14 - 1] [i_14 + 2] [i_14 + 2]) >> (((arr_40 [i_14 + 1] [i_14 + 1] [i_14 - 1]) - (5257498550043043774LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (short)15058))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)46361)))) : ((+(((/* implicit */int) arr_35 [i_14 - 3] [i_15] [i_15] [i_15] [i_14] [i_14])))))))));
            var_35 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_14 - 2] [i_14] [i_14] [i_15]))) : (var_9)))));
            var_36 ^= ((/* implicit */short) arr_4 [i_15]);
        }
        arr_48 [i_14] [i_14 + 1] = (~((~(arr_8 [i_14 - 2] [8ULL]))));
        arr_49 [i_14] &= ((/* implicit */signed char) ((var_11) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_14 - 3] [i_14]))))) & (((var_5) & (((/* implicit */long long int) ((/* implicit */int) arr_31 [(signed char)14] [i_14] [i_14] [i_14] [i_14]))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-84)))));
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_43 [i_14 + 1])))) ? (((((/* implicit */_Bool) arr_43 [i_14 + 1])) ? (arr_43 [i_14]) : (arr_43 [i_14 - 3]))) : (((arr_43 [i_14 - 2]) << (((var_8) - (1397809151097152072LL))))))))));
    }
}
