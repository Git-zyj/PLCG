/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183966
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned int) (short)-7898);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_6);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((((/* implicit */int) (short)7898)) ^ (((/* implicit */int) arr_6 [i_1] [i_2] [i_1])))) | (min((var_13), (var_1))))), (((/* implicit */int) ((unsigned short) arr_0 [i_2]))))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (arr_1 [i_1] [23])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) arr_4 [(short)3]);
                    var_24 += (+(((/* implicit */int) (unsigned char)46)));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)28129)) ? (((/* implicit */int) (short)-20316)) : (((/* implicit */int) var_6)))) >= (((/* implicit */int) ((arr_5 [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)7897))))))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_1] [(signed char)7] [2])) >> (((/* implicit */int) var_9))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_0);
                                var_26 ^= ((/* implicit */unsigned long long int) (short)7891);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_19 [i_1] [i_2] [i_2] [i_1] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_1]))));
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_6] [i_1])) : (((/* implicit */int) (short)-7902)))) & ((~(((/* implicit */int) arr_8 [i_1] [i_2] [(unsigned char)0]))))));
                    var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 226000671)) : (arr_5 [i_2])));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 7; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_24 [i_1] [(unsigned char)2] [i_6] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */_Bool) var_5);
                                arr_25 [i_1] [i_2] [i_6] [5ULL] [i_7] [i_2] [i_8] = ((/* implicit */int) ((short) arr_14 [i_1] [i_2] [i_2] [i_7 + 3] [i_8] [(_Bool)1] [i_7 - 1]));
                                var_29 *= ((arr_10 [i_1] [i_1] [i_7 + 2] [i_7]) <= (var_3));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-7897)) ? (((/* implicit */unsigned int) ((int) arr_17 [i_2] [i_1]))) : (min((((arr_10 [i_1] [i_2] [i_2] [i_1]) & (((/* implicit */unsigned int) arr_20 [i_1])))), (((/* implicit */unsigned int) var_13))))));
            }
        } 
    } 
    var_31 = (-2147483647 - 1);
    var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -871533259)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) : (((unsigned int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((max((2147483647), (((/* implicit */int) (unsigned char)219)))) | (((/* implicit */int) ((unsigned short) 2174457314U)))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_17))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_15)) : (-513586132)))) : ((((_Bool)1) ? (((/* implicit */long long int) -786129416)) : (278008449267657873LL)))))));
}
