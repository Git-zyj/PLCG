/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159540
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2LL)) ? (arr_4 [i_0 - 1] [i_0 - 3]) : (arr_4 [i_0 - 3] [i_0 + 2])))) ? (((arr_4 [i_0 - 1] [i_0 - 1]) * (arr_4 [i_0 + 1] [i_0 - 2]))) : (((arr_4 [i_0 - 1] [i_0 - 2]) / (arr_4 [i_0 - 2] [i_0 - 2])))));
                var_11 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_0 [i_1] [i_0])) ^ (((/* implicit */int) arr_0 [i_0 - 3] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_1] [i_0 - 2])))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned short) arr_0 [i_0] [(unsigned short)11]);
                    arr_8 [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_2 [i_0] [5] [i_0])))) << (((((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) << (((/* implicit */int) var_1)))) - (52336))))) ^ (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */int) (short)-22295)) < (((/* implicit */int) (_Bool)1))))))) + ((((+(-318397793))) + (((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (((/* implicit */int) arr_9 [i_3])) : (318397779)))))));
                    var_14 *= ((/* implicit */unsigned long long int) arr_9 [i_1]);
                }
                for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 14064868202303020799ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [(_Bool)1] [i_1]))))))) >= (((unsigned long long int) arr_0 [i_1] [i_0 - 2]))))) : (((/* implicit */int) ((signed char) arr_1 [i_4])))));
                    arr_15 [i_0] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 3])) - (((/* implicit */int) arr_9 [i_0 - 3])))) + ((-(((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0 - 3]))))));
                    var_15 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */int) arr_11 [i_0] [i_1] [i_4])) & (((/* implicit */int) var_1)))), ((-(((/* implicit */int) (short)-6))))))));
                    var_16 ^= ((/* implicit */unsigned long long int) var_10);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        arr_28 [0ULL] [(_Bool)0] [i_7] [(signed char)12] [(_Bool)0] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_5] [i_6 - 1] [i_7])) * (((((/* implicit */int) arr_25 [i_8] [(unsigned short)10] [(unsigned short)10] [(signed char)10])) / (((/* implicit */int) var_8))))));
                        var_18 = ((/* implicit */signed char) var_1);
                        arr_29 [(unsigned char)2] [(unsigned char)2] [10] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_7 [i_8] [i_6] [i_6]))) ? ((~(((/* implicit */int) arr_9 [i_6 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [(unsigned short)6] [(unsigned short)6])))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                    {
                        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (_Bool)1))))) == (arr_24 [(_Bool)1] [i_6] [i_6 - 1] [i_9]))))));
                        var_20 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) & (((arr_10 [i_9] [i_7] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (short)25562))))))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_21 ^= var_3;
                    }
                    arr_32 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) -318397780);
                    arr_33 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned short) ((3028893610U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */int) (((-(((/* implicit */int) min(((signed char)-78), ((signed char)1)))))) <= ((-((~(((/* implicit */int) var_6))))))));
                                arr_39 [i_11] [i_5] [i_7] [i_5] [i_5] = ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_10])) : (((/* implicit */int) arr_26 [i_10] [i_6] [i_5] [i_10]))))) + (-2904245332584589387LL))) + (((/* implicit */long long int) 2140196425)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) arr_35 [i_6 + 1])), (arr_21 [i_5] [i_5] [i_5] [i_5]))) - (18446744073709551566ULL)))));
                }
            } 
        } 
    } 
}
