/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162648
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (-((+(((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_10))))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = max(((+(((/* implicit */int) arr_1 [i_0] [i_0])))), ((-(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */unsigned long long int) min((min(((-(var_9))), (((/* implicit */long long int) (short)-16919)))), (((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)16043))))) ? (((var_1) ? (((/* implicit */int) arr_1 [(signed char)3] [i_0])) : (((/* implicit */int) (unsigned char)234)))) : (((/* implicit */int) var_6))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 24U)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] = (-(((((/* implicit */_Bool) 206577602U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : (arr_0 [i_1] [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (9079810843849759125LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    var_15 = ((((var_8) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-97)))) : (((/* implicit */int) arr_5 [i_1])));
                    arr_14 [i_1] [0ULL] = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    }
    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */short) max((min((arr_0 [i_4] [i_4 - 1]), (((/* implicit */long long int) (signed char)96)))), (((long long int) arr_16 [i_4 - 2] [i_4]))));
        var_16 *= ((/* implicit */unsigned char) min(((-(((var_1) ? (0ULL) : (((/* implicit */unsigned long long int) arr_15 [2LL])))))), (((/* implicit */unsigned long long int) max((arr_0 [i_4 - 2] [i_4 - 2]), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_4] [0LL]))))))))));
        var_17 = ((/* implicit */unsigned int) max((((((((var_1) ? (arr_16 [i_4 - 1] [i_4]) : (arr_0 [i_4] [i_4]))) + (9223372036854775807LL))) >> (((arr_0 [i_4 - 2] [i_4 - 2]) + (228063133390985553LL))))), (max((((/* implicit */long long int) (unsigned short)28940)), (((-5277182661435202327LL) / (5277182661435202327LL)))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) (signed char)(-127 - 1)))))) ? (arr_16 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))))));
                    arr_25 [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) || ((!(((/* implicit */_Bool) 3221225472U)))))));
                    arr_26 [i_4] [i_5] [i_4] = ((/* implicit */signed char) min((((unsigned int) (-(arr_16 [i_4] [i_4])))), (((/* implicit */unsigned int) ((3570361442458405433LL) < (((/* implicit */long long int) -1006303206)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        arr_29 [i_4 - 2] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) ((((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 + 1] [i_7 + 1])))))) : (min((min((3676084878722843222LL), (((/* implicit */long long int) (short)0)))), (arr_28 [i_4] [i_4] [i_4])))));
                        arr_30 [i_4] [i_5] [i_6] [4LL] [i_4] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (var_4))))) | ((-(4294967277U)))))));
                        var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) var_5)), (max((0U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1006303206)))))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (int i_8 = 2; i_8 < 11; i_8 += 1) 
    {
        arr_33 [i_8 - 2] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_15 [4])), (3676084878722843222LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */int) (short)0)) : ((-(((/* implicit */int) (signed char)-68)))))))));
        var_20 |= ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_9)) ? (17LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (min((arr_16 [i_8] [(unsigned char)0]), (-9223372036854775803LL)))))));
    }
    for (unsigned char i_9 = 4; i_9 < 12; i_9 += 1) 
    {
        arr_36 [i_9 + 1] = ((/* implicit */int) min((arr_0 [i_9] [(unsigned char)21]), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)117)) || (((/* implicit */_Bool) (unsigned char)5))))))));
        var_21 = ((/* implicit */unsigned long long int) (signed char)-118);
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] = ((/* implicit */unsigned int) arr_10 [i_10] [i_10]);
        arr_40 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 262143LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5876450777700142863ULL)))) || (arr_31 [i_10] [i_10])));
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
    {
        var_22 &= ((int) ((((/* implicit */_Bool) max((arr_3 [i_11] [i_11]), (((/* implicit */long long int) var_5))))) ? (((arr_11 [i_11] [i_11]) ^ (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11])))));
        var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_32 [i_11])) ? (((/* implicit */int) arr_32 [i_11])) : (((/* implicit */int) arr_32 [i_11]))))));
    }
}
