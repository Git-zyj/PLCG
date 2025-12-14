/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149273
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
    var_20 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned char) var_13))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) max((var_14), (((/* implicit */short) arr_2 [i_0]))))), (var_1)));
        var_21 = ((/* implicit */long long int) min((((arr_3 [i_0]) >> (((arr_3 [i_0]) - (13445093613103974120ULL))))), (max((arr_3 [i_0]), (arr_3 [8ULL])))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) var_1);
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (var_1))), (((/* implicit */unsigned int) var_8))))) & (max((min((13702843023931938984ULL), (((/* implicit */unsigned long long int) (short)4390)))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4386))) * (12751499614465584440ULL))))));
            var_25 |= ((/* implicit */unsigned long long int) arr_10 [i_1]);
            var_26 = ((/* implicit */short) arr_9 [(_Bool)1] [i_2]);
            var_27 -= ((0ULL) & (8964931332842602899ULL));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_28 |= ((/* implicit */_Bool) ((max((var_2), (arr_12 [i_4 + 3] [i_4]))) >> (((min((((/* implicit */int) var_3)), (arr_12 [i_4 + 3] [i_3]))) + (1619028303)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) arr_15 [i_4 - 2] [i_5])) - (4778)))));
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((arr_12 [(unsigned short)7] [i_3]) + (((/* implicit */int) arr_13 [15U])))) > (((/* implicit */int) arr_15 [i_4 - 2] [i_5])))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                var_31 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) arr_21 [i_6] [i_4 + 1]))));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) arr_17 [i_4 - 1]);
                            var_33 -= ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_7] [i_7] [i_7 + 2] [i_7] [i_7] [i_7])) < (((/* implicit */int) arr_24 [i_7 + 2] [i_7] [i_7 + 4] [4] [i_7 - 2] [i_7]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) var_18);
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) var_18);
                            var_36 = ((/* implicit */unsigned short) arr_25 [i_9] [i_4] [i_4 - 1] [i_4] [i_10]);
                        }
                    } 
                } 
            }
            for (int i_11 = 3; i_11 < 20; i_11 += 3) 
            {
                var_37 = ((/* implicit */unsigned long long int) arr_20 [i_3]);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (unsigned char i_13 = 1; i_13 < 20; i_13 += 4) 
                    {
                        {
                            arr_39 [i_3] [8] [i_3] [(unsigned short)9] [(unsigned short)9] [i_12] [i_13] = ((/* implicit */unsigned short) var_1);
                            var_38 = ((/* implicit */_Bool) min((957293027701885368ULL), (8964931332842602886ULL)));
                            var_39 = min((max((min((arr_38 [13LL] [i_4] [i_12] [(signed char)9] [i_4] [i_4] [i_11 - 2]), (((/* implicit */unsigned long long int) var_11)))), (max((((/* implicit */unsigned long long int) arr_24 [i_4 - 1] [i_13 + 1] [i_11 - 1] [i_11] [i_13] [i_13 + 1])), (var_9))))), (((/* implicit */unsigned long long int) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */signed char) var_2);
            var_41 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) - (((/* implicit */int) var_7)))) % (((/* implicit */int) arr_19 [i_3] [i_14] [i_14 - 2]))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                var_42 = ((/* implicit */signed char) arr_42 [i_3]);
                arr_44 [i_3] [i_14 - 1] [i_15] = ((/* implicit */unsigned char) ((arr_31 [i_14] [i_14 + 2]) + (((/* implicit */int) var_7))));
                var_43 &= ((/* implicit */unsigned short) arr_22 [i_3] [i_3] [i_15] [i_15]);
            }
            for (unsigned int i_16 = 1; i_16 < 19; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 19; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_48 [(signed char)0] [i_14] [i_14 + 1] [i_14 - 1] [i_14 + 1] [(unsigned short)20]) != (((/* implicit */long long int) ((/* implicit */int) var_19)))))) - (((/* implicit */int) var_18)))))));
                            var_45 = max((((/* implicit */unsigned int) var_18)), (arr_16 [i_16 + 2] [i_14 - 2]));
                        }
                    } 
                } 
                arr_54 [i_3] [i_14] [i_16] &= var_13;
            }
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((arr_50 [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_16)))))), (arr_35 [6U] [i_3] [i_14] [i_14 + 1] [i_19] [i_19]))), (((/* implicit */unsigned long long int) ((arr_30 [i_14 + 1]) < (((/* implicit */int) var_19))))))))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    for (short i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */short) max((((/* implicit */unsigned short) max((((/* implicit */short) (signed char)34)), ((short)4390)))), (min((arr_45 [(signed char)20] [i_20]), (arr_18 [i_14 + 3] [(unsigned short)11] [i_21])))));
                            arr_61 [(unsigned char)7] [i_20] [i_19] [i_19] [i_14] [i_3] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_29 [i_3] [i_21])) & (145232321418441497LL)));
                        }
                    } 
                } 
                arr_62 [i_14] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_13 [i_14 + 3]), (var_12)))) - (((/* implicit */int) min((arr_13 [i_14 + 3]), (arr_13 [i_14 + 1]))))));
                arr_63 [i_3] [19U] [i_14 - 1] [8LL] = ((/* implicit */signed char) min((max((var_2), (((/* implicit */int) ((((/* implicit */_Bool) 3510102335U)) || ((_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_14 - 1] [i_14 + 3])) || (((/* implicit */_Bool) arr_31 [i_14 - 1] [i_14 + 3])))))));
                arr_64 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_21 [(_Bool)1] [i_3])), (arr_27 [i_14] [i_14 + 3] [i_14 + 3] [i_14]))))));
            }
            for (unsigned short i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                var_48 = var_2;
                var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_19)) <= (((/* implicit */int) var_14))))), (max((((/* implicit */unsigned short) arr_27 [i_14] [(signed char)19] [i_14 - 2] [i_22])), (arr_51 [i_3] [i_14] [i_3] [i_14 + 3] [i_14 + 1]))))))));
            }
            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) var_14))));
            /* LoopNest 2 */
            for (unsigned short i_23 = 1; i_23 < 19; i_23 += 1) 
            {
                for (int i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    {
                        arr_75 [i_14] [i_23] [i_23] [i_14] [i_23] [i_14] = ((/* implicit */unsigned long long int) var_19);
                        arr_76 [2U] [i_23 + 1] [19ULL] [0ULL] [i_3] [0ULL] = ((/* implicit */unsigned char) min((((min((((/* implicit */int) var_17)), (var_2))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_51 [i_3] [i_3] [i_23 - 1] [i_24] [i_23])))))), (max((arr_74 [i_24] [i_23] [i_14] [i_3]), (arr_74 [i_24] [i_23 + 1] [i_14 + 3] [i_3])))));
                        var_51 = ((/* implicit */long long int) min((((/* implicit */short) var_15)), (arr_22 [i_14 + 2] [i_23 - 1] [i_23 + 2] [6U])));
                    }
                } 
            } 
        }
        for (unsigned short i_25 = 2; i_25 < 18; i_25 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_26 = 0; i_26 < 21; i_26 += 1) 
            {
                for (short i_27 = 1; i_27 < 18; i_27 += 2) 
                {
                    {
                        var_52 = ((/* implicit */unsigned char) var_12);
                        var_53 = ((/* implicit */unsigned int) var_8);
                        var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) max((max((var_12), (arr_24 [i_27] [i_27] [(unsigned short)14] [i_26] [i_25] [i_3]))), (((/* implicit */unsigned short) arr_32 [17] [i_27] [i_27 + 3] [i_3])))))));
                    }
                } 
            } 
            var_55 = ((/* implicit */unsigned short) max((max((arr_21 [i_25 - 1] [i_25 - 1]), (arr_21 [i_25 + 1] [i_25 + 1]))), (max((arr_21 [i_25 + 2] [(signed char)15]), (arr_21 [i_25 - 2] [20U])))));
        }
        var_56 *= ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_52 [i_3] [i_3] [i_3] [i_3] [i_3])), (var_18)))) < (((((/* implicit */int) arr_52 [i_3] [i_3] [i_3] [i_3] [i_3])) + (((/* implicit */int) var_3))))));
        var_57 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_25 [(signed char)9] [i_3] [i_3] [i_3] [i_3]), (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3])))), (min((((/* implicit */unsigned int) arr_56 [i_3] [(unsigned short)6] [i_3])), (min((var_1), (((/* implicit */unsigned int) var_5))))))));
        arr_86 [i_3] = ((/* implicit */long long int) var_3);
        var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) max((min((arr_56 [i_3] [i_3] [i_3]), (arr_56 [i_3] [i_3] [i_3]))), (max((arr_56 [i_3] [i_3] [i_3]), (arr_56 [i_3] [i_3] [i_3]))))))));
    }
}
