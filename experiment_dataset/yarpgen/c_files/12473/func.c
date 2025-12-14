/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12473
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [4ULL] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_16 [15] [(signed char)1] [i_0] [i_3] [(signed char)2] [(unsigned char)13] [(unsigned short)1] = ((/* implicit */long long int) arr_2 [i_0]);
                                arr_17 [(_Bool)1] [(signed char)11] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */signed char) ((int) var_8));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_0]))))) ? (((/* implicit */long long int) (+(var_2)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned short)19] [8]))) : (((long long int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_15 ^= ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)9)))) ^ (((/* implicit */int) arr_7 [(unsigned short)14] [i_5] [(unsigned short)14]))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        arr_28 [i_5] [i_6] [i_5] [(signed char)6] = ((/* implicit */long long int) var_8);
                        arr_29 [(short)14] [(short)14] [i_7] [14ULL] [i_5] [2LL] = ((/* implicit */unsigned short) ((int) ((signed char) arr_26 [i_5] [i_6] [i_7] [i_8])));
                    }
                } 
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_32 [2ULL]))))))))));
        arr_33 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_9])) / (((/* implicit */int) arr_31 [i_9]))))), (((unsigned long long int) 16777184))));
        var_17 = ((/* implicit */long long int) var_7);
    }
}
