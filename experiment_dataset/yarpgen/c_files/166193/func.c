/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166193
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
            arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) << (min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))), (((/* implicit */int) max(((unsigned char)85), (arr_0 [i_0])))))));
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_12 = ((/* implicit */short) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (3773992828U))))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531)))))) ? (((((/* implicit */_Bool) (unsigned short)20507)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2] [i_2]))))) : (((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_8 [i_2])))));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)55)), (arr_7 [i_0])))))))));
        }
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            arr_13 [i_0] [i_3 - 2] &= ((/* implicit */_Bool) min(((~(arr_12 [i_3 + 1] [i_3 - 3] [i_3 - 3]))), (min((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned char)93)) : (2147483647)))))));
            var_13 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-25))))) ? (max((((/* implicit */long long int) (unsigned short)20509)), (arr_7 [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
            var_14 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)-60))))));
            arr_14 [i_0] = ((/* implicit */signed char) (~((((((~(((/* implicit */int) (unsigned short)45012)))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0] [i_0] [i_3])) - (1)))))));
            arr_15 [i_3] [i_0] [i_0] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (unsigned short)45029)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_3])))), (((/* implicit */int) arr_0 [i_3 + 1])))), ((~(((/* implicit */int) (unsigned short)45019))))));
        }
        var_15 = ((/* implicit */signed char) arr_0 [i_0]);
        var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            var_17 = ((((/* implicit */_Bool) 0ULL)) ? (2712284392U) : (615446979U));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (short i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_4 - 1] [i_4 - 1])) ? (arr_16 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_7 + 2]))))))));
                        arr_27 [i_5] [i_6] [i_6] [i_7 + 2] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4 - 2] [i_6]))) < (arr_24 [i_4] [i_7] [i_7] [i_7] [i_7] [i_5 - 2]))))));
                    }
                } 
            } 
            var_19 = arr_23 [i_4] [i_4] [i_4] [i_4];
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                arr_30 [i_4] [i_8] [i_8] = ((/* implicit */int) arr_11 [i_5 - 1] [i_4 + 1]);
                var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */int) arr_28 [i_5 + 3] [i_5 + 3])) >= (((/* implicit */int) arr_28 [i_5 + 2] [i_5 + 1]))))));
                arr_31 [i_4 - 3] [i_5] [i_4 - 3] [i_8] = ((/* implicit */signed char) (short)15);
            }
        }
        for (signed char i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            var_21 ^= ((/* implicit */short) arr_0 [i_4 - 3]);
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_4] [i_9] [i_10] [i_11 - 1] [i_11])) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_4] [i_4])) : (((/* implicit */int) arr_25 [i_9] [i_9 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9 - 1] [i_10] [i_11 + 1]))) : (0U)))) : (((((/* implicit */_Bool) (signed char)1)) ? (arr_37 [i_4] [i_9 - 1] [i_10] [i_10] [i_11 + 1]) : (((/* implicit */long long int) 3090149756U)))));
                        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) 18014398375264256LL)) ? (10716882585032535576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11 + 2])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (int i_14 = 2; i_14 < 12; i_14 += 2) 
                    {
                        {
                            var_24 = ((((/* implicit */_Bool) arr_18 [i_14 + 1] [i_14 + 1])) ? (arr_18 [i_14 - 2] [i_14 - 2]) : (arr_18 [i_14 + 1] [i_14 - 1]));
                            arr_48 [i_4] [i_14] [i_12] [i_14 - 1] = ((/* implicit */unsigned char) ((arr_29 [i_4 - 2]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (unsigned short)65505))));
        }
        arr_49 [i_4 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_4 - 2] [i_4 - 1] [i_4 - 2])) ? (((/* implicit */int) arr_21 [i_4 - 3] [i_4 + 1] [i_4 + 1])) : (0)));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_43 [i_4 - 3] [i_4 + 1]))));
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((+(((((/* implicit */int) var_9)) & (((/* implicit */int) var_1)))))) < (((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (unsigned int i_15 = 3; i_15 < 9; i_15 += 2) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 3; i_17 < 8; i_17 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) (_Bool)0);
                    arr_56 [i_15] [i_15] = ((/* implicit */unsigned short) max((min((((/* implicit */int) arr_4 [i_15] [i_15] [i_15])), ((+(((/* implicit */int) (short)-29255)))))), (((arr_17 [i_15 + 1]) >> (((((((/* implicit */_Bool) arr_7 [i_17 + 1])) ? (arr_29 [i_15]) : (3418474092U))) - (1236940061U)))))));
                }
            } 
        } 
    } 
}
