/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186058
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = ((((/* implicit */_Bool) (short)4095)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)96)), (6636090176605857498LL)))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -315749566)) ? (((arr_1 [i_1 - 1] [i_1 - 2]) << (((((/* implicit */int) (unsigned char)102)) - (102))))) : (arr_1 [(short)3] [i_1 - 2])));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)192))))) * (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2]))) : (arr_8 [i_2] [i_2]))))));
        arr_10 [i_2] = max((((/* implicit */unsigned long long int) (unsigned short)58917)), (max((10173466836408698805ULL), (((/* implicit */unsigned long long int) (unsigned char)4)))));
        var_17 = ((/* implicit */unsigned char) (((-(arr_9 [i_2] [i_2 + 2]))) ^ (min((((/* implicit */int) (unsigned short)54046)), (-1376300786)))));
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((9985836172576052501ULL) * (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]))))) ? (((((/* implicit */int) (short)15000)) >> (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) (short)30720)))) != ((+((-(((/* implicit */int) (short)-20172))))))));
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_8 [i_2] [i_2]) > (arr_8 [i_2] [i_2 + 2])))), (max((((unsigned int) var_13)), (min((3118134518U), (((/* implicit */unsigned int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_6 [i_3] [i_3]))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_19 [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */long long int) ((arr_7 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (5302852365932021326ULL)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_26 [i_3] [i_3] [i_5] [i_3] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [i_3] [i_7 + 1] [i_6] [i_6] [i_3]))));
                                arr_27 [i_3] [i_3] [i_3] [i_6] [i_7] = ((/* implicit */short) arr_23 [i_3] [i_3] [i_5] [i_5] [i_7] [i_5]);
                                arr_28 [i_5] [i_3] [i_7 + 2] = ((/* implicit */unsigned int) (signed char)42);
                                arr_29 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_7 + 2] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1])) / (((/* implicit */int) arr_23 [i_7 + 2] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1]))));
                            }
                        } 
                    } 
                    arr_30 [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_13 [i_3]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */short) (signed char)-25);
        var_20 -= ((/* implicit */short) (_Bool)1);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_9] [i_9]), (172001853)))) ? (((unsigned long long int) ((unsigned long long int) (unsigned char)169))) : (((/* implicit */unsigned long long int) -236165847))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    arr_42 [i_9] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) 5375488778632271134LL)), (((7614724562166030094ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110)))))))));
                    arr_43 [(signed char)7] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_25 [i_9] [i_10 + 1] [i_11] [i_9] [i_9])) >> (((arr_20 [i_10 - 1] [i_11] [i_10 + 1] [i_10 - 1] [i_10]) - (11022503883266780792ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-27)))))));
                    arr_44 [i_9] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(2147483647)))), ((~(var_8)))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (signed char)-10)))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-29331)) ? (-3793075246707620883LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_10] [i_10])))))))));
                }
            } 
        } 
        var_21 += ((unsigned long long int) (~(arr_12 [(signed char)0])));
        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_12 [i_9])), (((((/* implicit */_Bool) arr_18 [i_9] [i_9] [4LL])) ? (((/* implicit */unsigned long long int) arr_12 [i_9])) : (arr_18 [i_9] [i_9] [(unsigned char)18])))));
        arr_45 [i_9] = ((/* implicit */unsigned char) (~(min((arr_12 [i_9]), (((/* implicit */long long int) (signed char)0))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        for (signed char i_13 = 3; i_13 < 23; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_46 [i_12]))))));
                    arr_54 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((arr_49 [15] [i_14]) ? (var_1) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_46 [i_13 - 2]))))) ? (min((min((-1LL), (((/* implicit */long long int) arr_47 [i_12])))), (((/* implicit */long long int) ((var_1) ^ (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((arr_51 [i_12] [i_13 - 1]) ? (((/* implicit */int) arr_51 [i_12] [i_13 + 2])) : (((/* implicit */int) (unsigned char)229)))))));
                }
            } 
        } 
    } 
}
