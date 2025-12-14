/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166452
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
    var_10 = ((/* implicit */unsigned int) var_2);
    var_11 = var_3;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) 1955512723U);
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_1)) / (var_2))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */_Bool) ((unsigned short) (-(var_1))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                arr_8 [i_0] [9U] [i_0] [7U] = ((/* implicit */signed char) 2339454572U);
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    var_15 += ((/* implicit */_Bool) var_5);
                    arr_11 [i_3] |= ((/* implicit */_Bool) (-(1955512723U)));
                }
                for (signed char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                {
                    arr_16 [i_0] [17ULL] [10ULL] [i_4] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3676128893U))));
                    arr_17 [i_0] = ((/* implicit */unsigned char) (~(2339454573U)));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [12ULL] [i_5] = ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 - 2])));
                        arr_22 [(_Bool)1] [(_Bool)1] [(unsigned short)5] [i_0] [i_5] [(unsigned short)14] [i_0] = ((/* implicit */_Bool) (unsigned short)15140);
                        arr_23 [i_0] [i_4] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) 618838403U);
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_2] [i_0] [i_4] [i_6] |= ((/* implicit */unsigned int) var_8);
                        arr_28 [i_0] [i_1] [(signed char)13] [i_0] [i_1] [i_1] [i_6] = -263547930;
                    }
                }
                var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1]))));
            }
            for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_6))));
                arr_32 [12U] [10LL] &= ((/* implicit */int) var_2);
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) var_0);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [5U] [i_0] [5U] [14U] [i_7 + 1])) || (((/* implicit */_Bool) arr_20 [(signed char)4] [i_0] [i_0] [i_7] [i_7 + 1]))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9] [i_7] [i_0] [i_7 + 1] [i_7])) ? (((/* implicit */int) arr_9 [i_8] [i_7 + 1] [i_7] [i_7])) : (((/* implicit */int) arr_29 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_1]))));
                        arr_39 [4ULL] [i_0] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_0] [i_1] [(signed char)9] [i_7 - 1]))));
                        arr_40 [i_0] [i_1] [(unsigned char)14] [18] [(unsigned short)10] &= ((/* implicit */int) arr_6 [i_7]);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_7 - 1] [i_8 - 2] [i_8 + 1])) / (((/* implicit */int) arr_10 [i_1] [i_7 - 1] [i_8 - 2] [i_8 + 1]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_14 [(unsigned short)15] [i_0] [i_0] [i_0])))));
                        arr_43 [i_0] [i_0] [i_7] [i_8] [i_10] = ((/* implicit */unsigned short) (~(var_3)));
                        arr_44 [i_10] [(unsigned char)8] [i_0] [i_0] [i_1] [(unsigned char)8] = ((var_6) == (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10 + 1] [i_10] [i_0] [i_10 + 1] [i_10]))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_5))));
                    arr_45 [(unsigned char)18] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) var_1))));
                }
                arr_46 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [(signed char)15] [i_7] [i_7] [i_7 + 1]);
            }
            for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) /* same iter space */
            {
                arr_50 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_11])) == (((/* implicit */int) (signed char)14))));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (618838402U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_13])))))) ? (((/* implicit */long long int) ((1955512723U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((~(var_6)))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (unsigned char)246))));
                        arr_59 [i_13] [i_0] [i_11 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_11 - 1] [i_0] [(unsigned char)10] [i_0] [i_0])) ^ (((/* implicit */int) arr_20 [i_11 - 1] [i_0] [i_11] [i_0] [i_11]))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        var_26 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                        var_27 += ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */int) arr_10 [i_11 - 1] [(signed char)14] [i_11 - 1] [i_12])) : (((/* implicit */int) var_7))));
                        var_28 = (+(arr_30 [i_0] [i_11 - 1] [i_11]));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        arr_65 [i_0] [(_Bool)1] [(_Bool)1] [i_12] [i_15] &= ((/* implicit */unsigned int) arr_57 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]);
                        arr_66 [i_11] [i_11 - 1] [5] [i_11] [i_11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_11 + 1] [i_11 + 1] [i_15])) ? (((/* implicit */unsigned int) 263547930)) : (arr_47 [i_15] [i_1] [i_11] [i_11 - 1])));
                    }
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_29 ^= 263547929;
                        arr_70 [i_0] [13U] [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) var_0);
                    }
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        arr_73 [(unsigned short)8] [i_1] [i_1] [(unsigned short)19] [(unsigned char)3] [(unsigned short)19] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_68 [(signed char)17] [i_0] [i_0] [i_0] [i_0]))));
                        arr_74 [i_17] [i_0] [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_63 [i_0] [11U] [i_0] [i_12] [i_12])) : (((/* implicit */int) arr_6 [i_11])));
                        arr_75 [i_0] [(unsigned char)5] [i_11] [i_0] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1955512723U)) ? (618838406U) : (((/* implicit */unsigned int) -33554432))));
                    }
                }
            }
        }
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) (-(11085044753284334975ULL)));
            arr_78 [3U] [(_Bool)1] [i_0] = ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_5 [i_0] [i_0] [5U] [i_0])));
        }
    }
    for (unsigned int i_19 = 1; i_19 < 12; i_19 += 1) 
    {
        var_31 ^= ((/* implicit */unsigned long long int) 3676128894U);
        arr_81 [i_19 - 1] = var_7;
    }
}
