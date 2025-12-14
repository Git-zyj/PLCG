/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173558
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
    var_12 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)2662)) ^ (((/* implicit */int) (unsigned char)145))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = max((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) (signed char)5)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-6))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_1] [(unsigned char)3])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))), (((/* implicit */int) (signed char)42))))), ((+(max((var_9), (((/* implicit */unsigned long long int) var_2))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) (signed char)-91);
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            var_15 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-5888)), (min((((/* implicit */unsigned int) (unsigned char)0)), (1269708308U)))));
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [12ULL] [(short)6]))) / (arr_10 [i_2]))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_11 [i_2]))))))))))));
            arr_15 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)85)) : (((33521664) & (-2102918350))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2654)) / (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_2])) : (-323700578))) : (((/* implicit */int) var_6))))));
        }
        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            var_17 = ((/* implicit */int) ((min((4652185850211686454ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) (+(1269708308U))))));
            arr_20 [i_2] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))), (13794558223497865162ULL)));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_19 [i_2] [i_4 + 2] [i_2]), (arr_19 [(signed char)16] [i_4 - 1] [i_2]))))) & (var_9)));
                arr_23 [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)145)) << (((((/* implicit */int) (signed char)60)) - (52)))));
                arr_24 [i_5] [i_4 - 1] [i_5] |= ((signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) == (((/* implicit */int) (signed char)49))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) arr_14 [i_4 + 1] [i_2]);
                            arr_31 [i_7] [i_6] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */int) ((((arr_21 [i_2] [i_4 - 1]) - (arr_21 [i_2] [i_4 + 2]))) < (((/* implicit */long long int) min((min((var_4), (((/* implicit */unsigned int) (signed char)83)))), (((/* implicit */unsigned int) max((33521685), (((/* implicit */int) (short)5649))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                arr_34 [11U] [i_8] [i_2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) arr_29 [i_8] [i_4 + 2] [i_2] [i_4 - 1] [i_4 + 1]))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_8]));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    for (short i_10 = 1; i_10 < 24; i_10 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)192))));
                            var_22 = ((/* implicit */int) ((signed char) arr_25 [0LL] [i_8] [24] [i_2]));
                        }
                    } 
                } 
                arr_42 [i_2] [i_2] [i_8] = ((unsigned long long int) arr_10 [i_4 + 1]);
            }
        }
        /* LoopSeq 3 */
        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
        {
            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [20U])), (arr_17 [i_2] [i_11])))) : (((((/* implicit */_Bool) arr_38 [12U])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -33521650)) ? (-33521664) : (((/* implicit */int) arr_18 [16U] [i_11]))))) : (max((-5LL), (((/* implicit */long long int) -1090597253))))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 23; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    {
                        arr_51 [i_12] [i_12] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) arr_43 [i_13]));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_14] [i_12 + 1] [i_11])) ? (((/* implicit */unsigned long long int) arr_53 [i_12 + 2] [i_2] [(unsigned char)13] [i_2] [1U])) : (13794558223497865162ULL)));
                            var_25 = ((/* implicit */long long int) arr_37 [i_2] [9LL] [i_2] [i_2]);
                        }
                        var_26 = ((/* implicit */unsigned char) (-(min((min((((/* implicit */long long int) var_4)), (arr_21 [i_2] [i_11]))), (min((((/* implicit */long long int) arr_48 [(signed char)19] [17ULL] [i_12 + 1] [(signed char)19])), (arr_35 [i_2] [i_2] [i_12] [i_13])))))));
                        var_27 = ((/* implicit */signed char) ((max((arr_40 [i_11] [i_12 - 1] [i_12 + 2] [i_13] [(unsigned char)22]), (((/* implicit */unsigned long long int) -33521653)))) - (((/* implicit */unsigned long long int) ((arr_22 [i_12 + 2] [i_2] [i_2] [i_11]) % (arr_22 [i_12 - 1] [i_11] [i_11] [i_13]))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-85)) & (((/* implicit */int) (unsigned char)168)))))))) ? (((/* implicit */int) (signed char)-5)) : ((+((-(((/* implicit */int) (signed char)-61))))))));
                    }
                } 
            } 
            arr_54 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) -1089251032));
        }
        for (long long int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_55 [i_15] [i_2] [i_2])), (var_9)))) ? (((/* implicit */int) arr_55 [i_2] [(unsigned char)9] [i_15])) : (((/* implicit */int) arr_55 [i_2] [i_15] [(signed char)2]))));
            arr_59 [i_2] [i_15] [i_2] = min((((/* implicit */signed char) arr_11 [i_2])), (arr_19 [17ULL] [i_2] [(short)11]));
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_2] [i_15] [(unsigned char)2]))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (short)2851)))))))));
            arr_60 [i_2] = ((/* implicit */signed char) arr_55 [i_2] [i_2] [7ULL]);
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    {
                        var_31 = ((/* implicit */signed char) arr_56 [i_16] [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 1; i_19 < 24; i_19 += 4) 
                        {
                            var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_66 [4LL] [4LL] [i_2] [i_2])), (arr_16 [i_16])))) ? ((-(1090597252))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_17] [i_19])) < (((/* implicit */int) (signed char)-6)))))))) ? (arr_47 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-54)))));
                            var_33 = ((/* implicit */int) 1026938860245853204ULL);
                        }
                        for (long long int i_20 = 1; i_20 < 23; i_20 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((arr_40 [i_2] [i_16] [i_16] [0U] [i_20]) % (((/* implicit */unsigned long long int) arr_66 [i_20] [i_20] [i_20 + 1] [i_20]))));
                            arr_76 [i_2] [i_2] [i_17] [i_17] [i_2] [i_17] [i_17] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_75 [i_20 - 1] [i_20 - 1] [i_18] [i_18] [i_2]))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-69)) ? (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) arr_32 [8U] [8U])) : (((/* implicit */int) (signed char)-52)))) : (min((-461368232), (((/* implicit */int) (unsigned char)82))))));
                        }
                    }
                } 
            } 
            arr_77 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)10458))));
            var_36 = ((/* implicit */signed char) arr_36 [i_2] [i_2] [i_2] [i_2] [i_2]);
        }
    }
    for (int i_21 = 0; i_21 < 16; i_21 += 4) 
    {
        var_37 = ((/* implicit */unsigned long long int) (short)4669);
        var_38 &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((((((/* implicit */_Bool) arr_70 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) + (108))))));
    }
}
