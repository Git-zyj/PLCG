/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143697
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) var_2);
                        arr_12 [5ULL] [i_3] [i_3] = ((/* implicit */int) var_3);
                        arr_13 [2LL] [2LL] [2LL] [(unsigned char)12] [i_2] [(unsigned char)12] &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_1 [i_3 - 3]))));
                        arr_14 [15U] [i_3] = ((/* implicit */int) min((min((((/* implicit */unsigned short) arr_7 [i_3 + 2] [i_3 - 2] [i_3 - 3] [i_3 - 1])), (arr_10 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 2]))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (signed char)33)))) || ((!(((/* implicit */_Bool) var_2)))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_17 [i_0] [(signed char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-25251)) : (((/* implicit */int) (signed char)75))));
                        arr_18 [3U] [9ULL] [3U] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)33)) ? (466151795385949ULL) : (((/* implicit */unsigned long long int) 3464735882579537059LL))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_6] [(short)21] [(unsigned short)1] = ((/* implicit */signed char) ((var_9) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5] [i_6 + 1] [i_5] [i_6 - 1] [(signed char)0] [(unsigned short)17])) ? (var_2) : (((/* implicit */int) arr_21 [(signed char)8] [i_6 + 2] [(short)21] [i_6 - 1] [(signed char)18] [i_6 + 2])))))));
                            var_14 &= ((/* implicit */signed char) ((-1034363330) | (((/* implicit */int) (short)-32767))));
                            arr_25 [10LL] [2U] [20ULL] [2U] [18U] [3ULL] [i_6] = max((((/* implicit */int) min((max((var_0), (var_3))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))))), (max(((-(var_4))), (min((((/* implicit */int) var_3)), (var_8))))));
                        }
                        var_15 -= ((/* implicit */_Bool) (short)25269);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_11))));
                        arr_30 [i_0] [i_0] [i_0] [1LL] = ((/* implicit */int) max((min((arr_1 [i_0]), (((/* implicit */long long int) min((var_1), (((/* implicit */int) (short)-9290))))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_5)), (arr_8 [i_7] [i_2]))))));
                        var_17 = ((/* implicit */signed char) max((((/* implicit */int) arr_6 [i_0] [i_0])), (((648110015) >> (((((/* implicit */int) (short)-25241)) + (25247)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-25273)) : (1689095698)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_8] [i_8]))))) : ((+(var_7))))))));
        arr_33 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned long long int) var_4);
    }
    for (short i_9 = 1; i_9 < 11; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (int i_11 = 3; i_11 < 9; i_11 += 4) 
            {
                for (unsigned char i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    {
                        arr_43 [2] [i_9] [(unsigned short)0] [9] [9] = ((/* implicit */unsigned short) max((648110012), (((/* implicit */int) arr_36 [i_11]))));
                        var_19 = ((/* implicit */short) max((var_3), (((signed char) 0LL))));
                        arr_44 [i_10] [(short)6] &= ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (short)-25269)), (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) min(((short)-32757), (((/* implicit */short) (signed char)57)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_10] [i_10] [i_10])) >> (((((/* implicit */int) arr_10 [(short)12] [(short)12] [i_10] [(unsigned char)6])) - (6860)))))) : (min((3ULL), (((/* implicit */unsigned long long int) arr_0 [i_9])))))));
                        arr_45 [i_9] [1ULL] [1ULL] [1ULL] [i_9] = ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
        arr_46 [i_9] = ((/* implicit */signed char) max((((unsigned int) (signed char)33)), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [i_9] [i_9 - 1])))))));
        arr_47 [i_9] [(signed char)3] = ((/* implicit */unsigned int) var_2);
        arr_48 [i_9] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) arr_27 [i_9] [i_9] [(unsigned char)6])) ? (((/* implicit */unsigned long long int) arr_40 [i_9] [i_9] [(unsigned char)0])) : (11759324100045686584ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_36 [i_9])), (var_9))))));
        arr_49 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((648110015) | (-648110026)))) ? (((/* implicit */int) (short)-923)) : (((/* implicit */int) (short)32767))));
    }
    for (signed char i_13 = 4; i_13 < 12; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                for (long long int i_16 = 1; i_16 < 10; i_16 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_2);
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned char) var_3);
        /* LoopNest 3 */
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_56 [i_13 - 2]))))));
                            arr_68 [i_13] [(_Bool)1] [i_13] [(_Bool)1] [(short)0] = ((/* implicit */signed char) (~(((/* implicit */int) min(((signed char)-65), ((signed char)-52))))));
                        }
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((arr_31 [(short)10] [10]), (arr_40 [i_19] [(unsigned char)8] [(unsigned char)8])))))) ? (((/* implicit */long long int) (~(max((var_1), (((/* implicit */int) arr_22 [i_19] [(_Bool)1] [20]))))))) : ((+(arr_1 [i_13 - 4])))));
                            arr_72 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) -648110014)) && (((/* implicit */_Bool) -648110000))));
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) / (-8132793913986215932LL)));
                        }
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (short)-31459)) : (((/* implicit */int) (signed char)33))));
                        arr_73 [i_13] [(signed char)11] [(unsigned char)4] [i_13] = ((/* implicit */long long int) ((int) ((min((var_1), (((/* implicit */int) arr_28 [(unsigned short)15] [(unsigned short)15] [0ULL] [0ULL] [(signed char)0])))) <= (((var_1) & (((/* implicit */int) var_0)))))));
                    }
                } 
            } 
        } 
        var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)46)) && (((/* implicit */_Bool) 648110013))));
    }
    /* LoopNest 2 */
    for (int i_22 = 1; i_22 < 19; i_22 += 2) 
    {
        for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
        {
            {
                arr_80 [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_22 + 1]), (arr_1 [i_22 - 1])))) ? (((var_11) / (((/* implicit */long long int) var_4)))) : (min((((/* implicit */long long int) var_10)), (arr_1 [i_22 - 1])))));
                arr_81 [(_Bool)1] [i_22] [(short)18] = ((/* implicit */long long int) (-(2147483647)));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && ((!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (var_2))))))));
}
