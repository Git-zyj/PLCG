/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158229
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
    var_20 = ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((/* implicit */int) (unsigned short)14)))))));
                    arr_9 [10LL] [i_0] = ((/* implicit */long long int) var_3);
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (-(var_13)))) ? (max((var_3), (((/* implicit */unsigned int) arr_6 [i_2] [8LL] [i_0 + 1] [i_0 + 1])))) : (((var_2) ? (((/* implicit */unsigned int) arr_3 [i_0])) : (arr_2 [i_0]))))));
                }
            } 
        } 
        arr_11 [14] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_1 [i_0] [i_0 + 1]), (var_8)))) == (((((/* implicit */long long int) arr_1 [i_0] [i_0 + 1])) ^ (var_18)))));
        /* LoopSeq 4 */
        for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                arr_18 [18ULL] |= ((/* implicit */unsigned short) var_13);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_0 - 1] [i_0])) ? (max((((int) arr_12 [i_0] [i_3 + 1] [i_5])), (var_19))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3] [i_0] [i_4 - 1])) >= (((/* implicit */int) var_5)))))));
                            var_23 = arr_7 [13U] [(short)14];
                        }
                    } 
                } 
            }
            for (short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    var_24 = ((int) ((long long int) (+(var_17))));
                    var_25 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_8 - 1] [i_7] [i_0 - 1])) <= (((/* implicit */int) arr_16 [i_8 - 1] [i_3] [i_0 + 1])))) && (((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8 + 2] [23] [i_0 - 1]))))))));
                }
                var_26 = ((/* implicit */_Bool) 1073741824);
                var_27 ^= ((/* implicit */int) ((unsigned int) arr_15 [i_0] [i_0 - 1]));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        {
                            arr_32 [i_0] [i_3 + 2] [i_7] [i_3 + 2] [7U] = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_7] [i_9] [18LL]);
                            var_28 -= ((/* implicit */unsigned char) (-(((arr_15 [i_9] [i_10 - 2]) - (arr_15 [i_3] [i_10 + 3])))));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 4; i_11 < 20; i_11 += 1) 
            {
                var_29 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_14)), (var_8))) <= (((/* implicit */unsigned int) ((arr_8 [i_0] [i_0] [i_11] [i_11]) & (((/* implicit */int) arr_16 [i_0] [i_0] [i_11 - 3])))))))), (min((arr_17 [i_0 - 1] [i_3] [i_11 + 1] [i_0]), (arr_17 [i_0 - 1] [i_3] [i_3] [i_0])))));
                arr_37 [i_11] [i_0] [(unsigned short)13] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (arr_20 [i_3 - 1] [(unsigned char)12] [i_3] [i_11 + 4] [i_11])));
                arr_38 [(_Bool)1] [i_0] [i_0] [15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [2U] [i_0 + 1] [i_0 + 1])), (arr_35 [i_0 - 1] [i_3 - 1] [i_11 + 1] [i_11 + 4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */_Bool) -1073741819)) ? (-1073741827) : (var_0))) : (var_15)))) : (var_12)));
                var_30 = ((/* implicit */unsigned int) (((-(min((var_16), (((/* implicit */long long int) arr_12 [3] [i_3 + 3] [(short)15])))))) != (((/* implicit */long long int) 1969250982U))));
            }
            for (signed char i_12 = 4; i_12 < 23; i_12 += 1) 
            {
                arr_43 [i_0] [i_3 - 1] [12] = ((/* implicit */long long int) arr_0 [i_3] [i_12]);
                var_31 -= ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                arr_44 [i_12] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((((arr_39 [i_0] [i_3 + 1] [i_0 - 1] [i_0]) >= (arr_39 [i_0] [i_3 + 3] [i_0 + 1] [i_0]))) ? (((/* implicit */unsigned long long int) ((arr_39 [i_0] [i_3 + 2] [i_0 + 1] [i_0]) & (arr_39 [i_0] [i_3 + 3] [i_0 - 1] [i_0])))) : (((((/* implicit */_Bool) (signed char)6)) ? (10581328841797231524ULL) : (((/* implicit */unsigned long long int) 1252516211))))));
                var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [(signed char)23] [i_12 - 1] [i_12 - 4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_12] [i_12 - 4] [i_12])))) & (((/* implicit */int) max((var_10), (arr_16 [i_12 - 3] [i_12 - 3] [(_Bool)1]))))));
                var_33 = ((/* implicit */short) ((((arr_36 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0 - 1] [i_3 + 3] [i_12 - 1] [i_12 - 4]))))) / (((arr_36 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0 - 1] [i_3 + 1] [i_12 - 4] [i_12 - 2])))))));
            }
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
        }
        for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 2; i_14 < 23; i_14 += 2) 
            {
                for (int i_15 = 4; i_15 < 22; i_15 += 2) 
                {
                    {
                        var_35 |= ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned long long int) var_16))));
                        arr_56 [i_15 - 4] [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) var_2)), (arr_25 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_39 [i_14 + 1] [i_15 - 3] [i_0 - 1] [i_0])), (var_13)))) ? (min((7865415231912320091ULL), (((/* implicit */unsigned long long int) 7704285641321380975LL)))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_55 [i_0 - 1] [i_13] [i_14 - 1] [(_Bool)1])) : (((/* implicit */int) var_10)))))))));
                        arr_57 [i_0] = ((/* implicit */long long int) ((unsigned short) ((2305838611167182848LL) - (((/* implicit */long long int) -1006642602)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                arr_61 [i_0] [i_0] [i_0] [i_16] = ((/* implicit */long long int) min((var_14), (((max((var_17), (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_24 [21U] [21U] [i_0]))))));
                var_37 = ((/* implicit */unsigned short) ((var_13) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_15)) : (arr_13 [i_0 - 1]))))));
            }
            for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                var_38 = ((/* implicit */long long int) min((((max((1804405042U), (((/* implicit */unsigned int) var_15)))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))), ((((+(var_8))) % (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) + (((/* implicit */int) var_9))));
            }
        }
        for (long long int i_18 = 2; i_18 < 22; i_18 += 2) 
        {
            var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((arr_13 [i_0 - 1]), (((/* implicit */long long int) var_8))))))) ? (((arr_8 [i_0 + 1] [i_0 + 1] [i_18 + 2] [i_0]) | (((/* implicit */int) arr_64 [(signed char)14] [i_0 - 1] [i_18])))) : (max((arr_23 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_18 - 1]), (arr_23 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_18 - 2])))));
            arr_66 [i_0 + 1] [i_0 + 1] [i_18] &= ((((1006642598) - (((/* implicit */int) (short)32767)))) >> (((max((((/* implicit */unsigned long long int) var_19)), (arr_63 [i_0 + 1] [i_18 - 2] [i_18 + 1]))) - (18446744072896504697ULL))));
        }
        for (signed char i_19 = 2; i_19 < 20; i_19 += 1) 
        {
            var_41 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) var_0)) % (var_6))) >> (((((((arr_53 [(unsigned short)0] [(unsigned short)0] [i_0] [(unsigned short)0]) + (9223372036854775807LL))) >> (((var_17) + (1963408985))))) - (498LL))))) % (((/* implicit */long long int) min((((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) arr_52 [i_0 - 1] [i_0] [i_19 + 1])))))));
            arr_69 [i_0 + 1] [i_0] [i_0 + 1] = -106728473;
            arr_70 [i_0] [i_0] [(signed char)16] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_22 [i_19] [i_19] [(unsigned char)10] [i_19 - 2] [i_19 + 2] [i_19] [i_19 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_22 [5] [i_19 - 2] [i_19] [5] [i_19] [i_19] [i_19 + 1])))), (((((/* implicit */int) arr_22 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19 + 1] [i_19 + 2])) + (((/* implicit */int) arr_22 [i_19 + 3] [i_19] [10] [i_19] [(signed char)8] [i_19 + 1] [i_19 - 1]))))));
            arr_71 [i_0] [i_0] [i_0 - 1] = (+(((/* implicit */int) ((arr_20 [1ULL] [i_0 - 1] [i_0 - 1] [i_19] [i_19 + 3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0 - 1] [i_0 - 1] [i_19] [i_19 + 3] [i_19 + 1])))))));
            var_42 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_59 [i_0] [i_19 - 1] [i_0])), (max((((/* implicit */long long int) var_2)), (arr_33 [i_0] [i_19]))))) <= (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) & (-49776015))))))));
        }
    }
    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) var_18))));
}
