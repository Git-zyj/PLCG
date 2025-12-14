/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111836
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
    var_10 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_8))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_3))) : (max((((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */long long int) 8U))))), (max((((/* implicit */unsigned long long int) (signed char)-10)), (var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_11 |= ((/* implicit */unsigned long long int) var_7);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483629) / (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_0)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_10 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2]))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-33554432LL) : (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0]) : (var_0))) : (((/* implicit */unsigned int) (~(var_8))))));
            }
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                arr_15 [i_1] = ((/* implicit */long long int) var_8);
                arr_16 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) >> (((33554413LL) - (33554394LL))))) % (((/* implicit */int) var_1))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0] [i_1] [i_4])) ? (((((/* implicit */_Bool) 1U)) ? (var_3) : (33554435LL))) : (((/* implicit */long long int) ((var_0) >> (((/* implicit */int) (short)0)))))));
                var_14 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-7)) + (2147483647))) >> (((arr_11 [i_0] [i_1] [i_1]) - (4636527308745882131LL)))))) ? (arr_8 [i_0 + 3] [i_1] [8U] [10]) : (((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_1] [(short)6])))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-7)) + (2147483647))) >> (((((arr_11 [i_0] [i_1] [i_1]) - (4636527308745882131LL))) + (3403711204088381843LL)))))) ? (arr_8 [i_0 + 3] [i_1] [8U] [10]) : (((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_1] [(short)6]))))));
            }
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0LL) >> (((arr_13 [i_0 + 4]) + (330175221)))))) ? (2787205771504767730ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                arr_23 [i_1] [i_1] [i_5] [(short)10] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (0U)))));
                var_16 = ((/* implicit */int) (((~(var_3))) < (arr_20 [i_0 + 3])));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1 - 1] [i_5])) ? (arr_21 [i_0] [i_1 + 1] [i_1] [1U]) : (arr_21 [i_5] [i_0 + 4] [i_1] [i_0 + 4])));
            }
        }
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_17 [(short)10])))) >> (((arr_14 [(unsigned short)4]) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [2U]))))))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
            {
                arr_29 [i_0] [10ULL] = ((/* implicit */unsigned char) (-(arr_1 [i_0 + 2])));
                arr_30 [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) arr_27 [i_0] [i_0 + 3] [i_6] [i_7]);
                arr_31 [i_0] [i_6] [i_7] = ((/* implicit */int) var_5);
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    arr_34 [i_0] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                    arr_35 [i_0] [i_6] [i_7] [i_7] [i_0] [i_8] = ((/* implicit */signed char) (-(var_9)));
                }
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    arr_40 [i_0] [i_6] [i_7] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0 - 1]))));
                    var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-20287)) ? (arr_13 [i_0 + 3]) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_7] [i_7]))))));
                }
                for (unsigned int i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_6] [i_6] [i_6])))) ? ((~(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_24 [i_0 + 4]))));
                    var_22 ^= ((/* implicit */short) var_4);
                }
                for (unsigned char i_11 = 2; i_11 < 8; i_11 += 1) 
                {
                    var_23 += ((/* implicit */short) ((((((/* implicit */int) arr_26 [(_Bool)1] [i_7] [i_6] [i_0])) >> (((arr_37 [i_7] [i_7] [i_0]) - (2923416619U))))) << (((var_2) + (297947749)))));
                    arr_48 [i_11] [i_0] [i_7] [i_0] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_7)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            }
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((((/* implicit */_Bool) 17881464068844303168ULL)) ? (arr_20 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25862))))))))));
                var_25 = ((/* implicit */_Bool) var_7);
                var_26 = ((((/* implicit */int) var_1)) >> (((arr_39 [i_0] [i_0 + 2] [i_0] [i_0 + 4] [i_0 - 1]) - (3834031268U))));
            }
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 9; i_13 += 1) 
            {
                arr_54 [i_0] [i_6] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((var_0) >> (((13911627887421604250ULL) - (13911627887421604246ULL))))) : (arr_38 [i_0 + 4] [i_0 + 2] [i_0] [i_6] [i_13 + 1] [i_13])));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [8] [(_Bool)1])) ? (var_6) : (((/* implicit */unsigned long long int) ((var_5) << (((((/* implicit */int) var_4)) - (251)))))))))));
            }
        }
        var_28 = ((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        var_29 *= ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((signed char) var_2))), (((9290751716618851591ULL) % (((/* implicit */unsigned long long int) var_8))))))));
        var_30 = ((/* implicit */unsigned char) var_9);
        var_31 = ((/* implicit */unsigned int) ((((min((var_9), (((/* implicit */unsigned long long int) var_0)))) << (((var_5) - (3403779548U))))) >> (((((((min((((/* implicit */int) arr_56 [21])), (var_2))) + (2147483647))) >> ((((~(var_6))) - (4941727249575283882ULL))))) - (231191927)))));
    }
    var_32 = ((/* implicit */_Bool) var_4);
    var_33 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) var_8))))))) ? (((((/* implicit */_Bool) var_8)) ? (3238412059530690607ULL) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((((var_8) + (2147483647))) << (((((var_2) + (297947750))) - (5))))) >> (((var_9) - (4070029551117510429ULL))))))));
    var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (((min((((/* implicit */unsigned long long int) -9223372036854775797LL)), (var_6))) >> (((((((/* implicit */_Bool) 16777152U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))) - (2625522708U)))))));
}
