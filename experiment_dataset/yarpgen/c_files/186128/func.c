/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186128
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0 + 4] [12U] [i_0 + 2])))))));
                var_20 -= ((/* implicit */unsigned long long int) ((signed char) ((short) (signed char)-126)));
            }
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [(unsigned char)7] [(unsigned char)7] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)4]))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))))))));
                var_23 |= ((/* implicit */short) ((((5811050504877261992LL) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)2] [5LL] [i_0])) != (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) -8305170902540383433LL)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)69))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [(short)11] [i_4 - 1] [i_4 + 2] [i_4 - 1])) >= (((/* implicit */int) arr_6 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1]))));
                            arr_15 [i_5] [i_5] [(short)9] [i_5] [(short)9] [i_4 - 2] [(short)9] = (signed char)-73;
                            arr_16 [i_0] [i_5] [i_3] [i_4 - 3] = ((/* implicit */int) arr_12 [i_0 + 3] [i_5 + 2] [i_5] [i_5] [(signed char)19]);
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */long long int) arr_7 [i_3] [i_1] [(short)5]);
            }
            for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (int i_8 = 1; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [(_Bool)1])));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_8 + 1] [(unsigned char)5] [i_6]))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) % (arr_17 [i_0] [i_0] [i_0] [i_8]))))))));
                        }
                    } 
                } 
                var_28 |= ((/* implicit */unsigned char) arr_2 [i_6] [i_6 + 2] [i_0 + 2]);
            }
            var_29 *= ((/* implicit */short) ((unsigned char) arr_4 [i_0 + 4]));
            /* LoopSeq 1 */
            for (long long int i_9 = 3; i_9 < 19; i_9 += 4) 
            {
                var_30 = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_9] [i_9] [(signed char)22]))));
                var_31 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (unsigned short)34812)) : (-660554878))) >> (((((/* implicit */int) (unsigned char)68)) - (46)))));
            }
        }
        for (int i_10 = 2; i_10 < 22; i_10 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((var_10) > (((/* implicit */int) var_9)))) && (((((int) (unsigned short)16815)) != (((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 1])))))))));
            arr_28 [i_0 + 2] [i_0 + 2] [i_0] |= arr_9 [i_10 + 1] [i_0 - 1];
        }
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((/* implicit */int) max((arr_3 [i_0 + 1] [i_11] [i_12]), (arr_3 [i_13] [i_11] [i_0 - 1])))))))));
                        var_34 *= arr_25 [i_12 - 1] [(unsigned short)22];
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) max((var_35), ((unsigned short)15285)));
            var_36 = ((/* implicit */unsigned int) arr_32 [i_0 + 1] [20U] [i_11] [i_11]);
            /* LoopNest 3 */
            for (long long int i_14 = 4; i_14 < 22; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (unsigned short i_16 = 2; i_16 < 22; i_16 += 3) 
                    {
                        {
                            arr_43 [i_11] [(unsigned short)6] [i_11] [i_11] [i_11] [(unsigned short)6] [(signed char)11] = ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (var_18))))))) ? (arr_42 [(signed char)2] [i_11] [i_14] [i_11] [i_11] [1U] [i_15]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (-7669754590329916630LL)))) ? (1032082053) : (((/* implicit */int) ((short) (unsigned char)228)))))));
                            arr_44 [i_0 + 4] [i_11] [(unsigned char)6] [i_14] [(unsigned char)20] [i_14] [i_16 - 1] = ((/* implicit */unsigned char) -2416914837045238969LL);
                        }
                    } 
                } 
            } 
        }
        arr_45 [i_0 + 1] = ((/* implicit */long long int) arr_31 [(signed char)11] [(unsigned short)8]);
        var_37 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23587))));
        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) max((arr_6 [i_0] [i_0 + 1] [17U] [i_0 - 1]), (((/* implicit */unsigned short) var_14)))))));
    }
    /* vectorizable */
    for (short i_17 = 1; i_17 < 8; i_17 += 3) /* same iter space */
    {
        var_39 += ((/* implicit */long long int) ((((/* implicit */int) arr_25 [14] [i_17 + 3])) & (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            for (unsigned char i_19 = 1; i_19 < 9; i_19 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        arr_54 [i_17] [(signed char)6] [i_20] &= ((/* implicit */unsigned char) var_1);
                        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) -8305170902540383420LL))));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 10; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) arr_30 [i_21 + 1]))));
                                arr_61 [i_17] [5] [i_17] [i_17 - 1] [i_22] = ((/* implicit */unsigned short) arr_41 [14]);
                                var_42 = ((((/* implicit */_Bool) arr_60 [(unsigned char)4] [(signed char)6] [(signed char)6] [i_17 + 2] [i_21 + 1] [(unsigned char)4])) ? (arr_58 [i_17] [0U] [i_19 - 1] [(unsigned char)6] [i_21 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_17] [i_17]))));
                                var_43 = arr_58 [i_17] [i_17] [i_19] [i_17] [4U];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_23 = 1; i_23 < 8; i_23 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */long long int) min((var_44), (arr_5 [i_23 - 1] [i_23])));
        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) arr_62 [(unsigned char)9]))));
        arr_64 [i_23] = ((/* implicit */int) ((long long int) max((((/* implicit */int) arr_41 [(signed char)12])), ((-(((/* implicit */int) var_6)))))));
    }
    var_46 = ((/* implicit */signed char) var_4);
}
