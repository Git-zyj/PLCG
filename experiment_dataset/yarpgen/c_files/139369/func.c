/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139369
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]));
        var_21 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > ((-(min((var_5), (((/* implicit */unsigned int) arr_1 [i_0] [0LL]))))))));
        var_23 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (18446744073709551612ULL))))), (((/* implicit */unsigned long long int) ((18446744073709551613ULL) == (((/* implicit */unsigned long long int) arr_0 [i_0] [10U])))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_6 [i_1] [i_2] = var_4;
            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 3])) && (((/* implicit */_Bool) max((28), (((/* implicit */int) arr_5 [i_1] [i_2]))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28178)) ? (((/* implicit */int) (short)16209)) : (((/* implicit */int) (short)-16209))))) : (((((/* implicit */_Bool) min((arr_10 [i_3] [i_2] [i_4] [i_1 - 3]), (((/* implicit */unsigned long long int) arr_0 [i_4] [i_2]))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) 216877307)) : (var_19))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30)))))));
                        arr_11 [i_1] [i_2] [i_3] [i_2] [i_4] [i_4] = ((/* implicit */short) (unsigned char)0);
                        arr_12 [i_3] = ((/* implicit */unsigned int) ((signed char) (~(arr_10 [i_3] [i_2] [i_1] [11U]))));
                        arr_13 [i_3] [i_3] [i_4] = max(((+(arr_0 [i_1] [i_1 - 2]))), (((/* implicit */int) ((unsigned char) (-(arr_7 [i_1 - 1] [i_2] [i_3] [i_4]))))));
                        var_26 &= ((/* implicit */_Bool) ((signed char) (+((+(arr_4 [i_1]))))));
                    }
                } 
            } 
            arr_14 [i_1] [i_1 - 1] [i_2] = ((/* implicit */int) ((unsigned short) 17454747090944ULL));
        }
        var_27 = ((/* implicit */unsigned short) arr_5 [i_1 - 3] [i_1 - 3]);
        arr_15 [i_1] [i_1 + 1] = min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)19338)) : (((/* implicit */int) (unsigned short)65513)))), (((/* implicit */int) (signed char)108)));
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned char)0))) ^ (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_13)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))));
    var_29 = ((/* implicit */signed char) ((unsigned char) ((signed char) var_7)));
    /* LoopSeq 2 */
    for (long long int i_5 = 3; i_5 < 20; i_5 += 1) 
    {
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) -1203129170)), (8649916895978606152ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (17038764139656446388ULL)));
        var_31 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57771))) <= (arr_16 [i_5])))), (max((((/* implicit */long long int) arr_17 [16LL] [i_5 + 2])), (arr_16 [i_5 - 3]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_32 = ((/* implicit */_Bool) arr_16 [2LL]);
        arr_20 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_16 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)127))))));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) arr_18 [i_6]);
        var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_18 [i_6])) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_18 [i_6])) : (var_15)))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_34 &= ((/* implicit */_Bool) ((short) arr_29 [i_6] [i_7] [i_8]));
                                var_35 += ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)105))));
                                arr_31 [i_8] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) (-(arr_23 [i_6])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_11 = 4; i_11 < 20; i_11 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) arr_28 [i_6]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_6] [i_7] [i_6] [i_11 - 1]))))) ? (arr_27 [i_11] [i_11] [i_11 - 1] [i_11 - 2]) : (arr_27 [i_11 - 2] [i_11 + 1] [i_11 - 2] [i_11 - 2])));
                            var_38 += ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (0ULL));
                            arr_37 [i_6] [i_7] [i_7] [i_8] [i_11] [i_12] = ((/* implicit */signed char) (-(4294967285U)));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_33 [i_6] [(signed char)4] [(signed char)4]))))))));
                        }
                        for (short i_13 = 1; i_13 < 19; i_13 += 3) 
                        {
                            arr_40 [10LL] [(_Bool)1] [(_Bool)1] [i_11] [(_Bool)1] [(signed char)6] [(signed char)6] = 18446744073709551606ULL;
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_29 [i_7] [12LL] [i_7])))));
                            arr_41 [i_6] = ((/* implicit */int) arr_29 [i_7] [i_8] [i_11 - 2]);
                        }
                        arr_42 [i_6] [i_6] [i_8] [6ULL] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_30 [3LL] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_16 [i_6]))));
                        arr_43 [i_7] [i_8] [i_11] = ((/* implicit */_Bool) (~(arr_36 [i_11 + 1] [i_11 - 3] [i_11] [i_11])));
                    }
                    for (short i_14 = 2; i_14 < 20; i_14 += 1) 
                    {
                        arr_46 [i_7] [i_7] [i_14] [i_14 - 1] = ((/* implicit */signed char) arr_22 [i_6] [i_7] [i_8]);
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44551)) <= (arr_17 [i_6] [i_6]))))));
                    }
                    for (long long int i_15 = 1; i_15 < 20; i_15 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned short) (~(22ULL)));
                        var_43 ^= ((/* implicit */long long int) (+(arr_44 [i_6] [(_Bool)1] [i_8] [i_15] [i_6])));
                        var_44 = ((/* implicit */int) 3ULL);
                        arr_49 [(signed char)0] [(signed char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_44 [(signed char)4] [12ULL] [(signed char)4] [i_15 - 1] [i_6])))) ? (4294967295U) : (((((/* implicit */_Bool) arr_17 [i_6] [(_Bool)1])) ? (var_5) : (((/* implicit */unsigned int) -932204299))))));
                    }
                    var_45 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_34 [(signed char)20] [i_7] [i_7] [(unsigned char)0])) <= (((/* implicit */int) (signed char)16)))))));
                }
            } 
        } 
    }
}
