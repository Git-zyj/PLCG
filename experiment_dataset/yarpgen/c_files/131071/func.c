/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131071
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
    var_11 = var_5;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_1] = max((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */int) (unsigned char)192)) | (((/* implicit */int) (unsigned char)39)))) : (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) var_1)))))), (max((arr_2 [i_0] [i_1]), (((/* implicit */int) ((unsigned short) (unsigned char)207))))));
                var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) + (((/* implicit */int) (unsigned char)70))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_1 [i_0] [i_1])))) : (((/* implicit */int) arr_3 [i_1 + 2]))))) ? (((((/* implicit */int) (unsigned char)23)) | (((/* implicit */int) (unsigned char)70)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)244)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (18446744073709551599ULL)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 + 1])) && (((/* implicit */_Bool) (unsigned short)54812))))), (var_3)));
                arr_11 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */int) ((unsigned short) ((arr_9 [i_3] [i_2 + 2] [i_3]) >> (((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) ((unsigned short) ((((arr_9 [i_3] [i_2 + 2] [i_3]) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))))));
                /* LoopSeq 2 */
                for (int i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2 + 1] [i_3] [i_3] [i_3] [i_3] [i_6 + 2] = ((/* implicit */unsigned short) (((-(((((/* implicit */unsigned int) 2097151)) % (var_0))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3] [i_6 - 1] [i_6 + 2])) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_4] [i_5] [i_5] [i_6])) : ((~(((/* implicit */int) var_8)))))))));
                                arr_20 [i_2] [i_3] [i_3] [i_5] [i_6] [i_6] [3U] = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_8 [i_2 + 1]), (var_4)))), ((~(((/* implicit */int) (unsigned char)54))))));
                                var_14 = ((/* implicit */unsigned short) ((((2135866846) != (((/* implicit */int) (unsigned short)0)))) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_6] [i_3] [i_6 + 1])) : (((/* implicit */int) max((arr_17 [i_2] [i_2] [i_2] [(_Bool)1] [i_2 - 1]), (((/* implicit */unsigned short) (unsigned char)10)))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((unsigned char) max(((unsigned short)2262), (((/* implicit */unsigned short) max(((unsigned char)83), (var_9)))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (2ULL)))) ? (((int) arr_7 [i_2 - 1] [i_2 + 3])) : (((((/* implicit */_Bool) 9811101838065202802ULL)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_9))))));
                    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_3] [i_7] [i_2] [(unsigned short)0])) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) arr_13 [i_2 + 2] [i_2 + 2] [4ULL] [i_2 - 1]))))) / (-5451072379160332229LL)));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((long long int) ((unsigned char) arr_8 [i_8 + 1])));
                arr_30 [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_28 [i_8 - 1] [i_8 + 2] [i_9]), (arr_28 [i_8 + 2] [i_8 - 1] [i_8 + 2]))))));
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_8 + 1] [i_8 - 1])) * (((/* implicit */int) arr_27 [i_8 + 1]))))) ? ((+(((/* implicit */int) (unsigned char)151)))) : (((/* implicit */int) (unsigned char)248))));
                /* LoopNest 3 */
                for (unsigned short i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)38642), (((/* implicit */unsigned short) arr_34 [i_12] [i_9])))))) : (var_0))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_8 - 1] [i_8] [i_10 + 2] [21U] [i_10 - 1])))))));
                                var_20 = ((/* implicit */unsigned short) max((max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) 2868222743U)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_12] [i_12] [i_11] [i_10] [i_12] [i_12])))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) max((arr_7 [i_8 + 2] [(unsigned char)3]), (arr_12 [i_11] [i_11])))))))));
                                var_22 *= arr_15 [i_11] [i_10] [i_10] [i_10] [i_10] [i_10 + 2];
                                var_23 += ((/* implicit */unsigned short) ((int) ((signed char) max((((/* implicit */int) (unsigned char)27)), (5)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
