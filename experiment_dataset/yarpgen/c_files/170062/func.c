/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170062
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) ((_Bool) (signed char)-17))) - (1)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) arr_2 [i_0])))));
        var_17 += ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_1 + 1])))))));
        arr_8 [10] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) % (((unsigned long long int) (-(((/* implicit */int) arr_6 [i_1])))))));
        var_19 *= ((/* implicit */unsigned int) arr_2 [i_1]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (-((-(arr_1 [i_2])))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) arr_9 [i_1] [(unsigned short)2]);
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17530364724719597292ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_18 [i_1] [i_1 - 1] [i_1] = arr_15 [(short)12] [(unsigned short)11] [i_1];
            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1]))));
            /* LoopNest 2 */
            for (signed char i_5 = 3; i_5 < 16; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_23 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) arr_1 [(signed char)7]);
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((((~(var_12))) >> (((((/* implicit */int) arr_21 [i_1] [i_4] [i_5] [i_6])) + (19477))))) >> ((((~(((/* implicit */int) arr_3 [i_4])))) + (52))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_1] [i_1]))) ^ (((((/* implicit */_Bool) max((916379348989954323ULL), (((/* implicit */unsigned long long int) 0U))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)24)), (916379348989954304ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_19 [i_1] [(unsigned char)2]))))))));
            arr_24 [i_1] [i_1] = ((/* implicit */int) arr_22 [i_1] [(short)14] [i_4]);
        }
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)56455))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) arr_6 [(short)3]);
                                arr_37 [1ULL] [1ULL] [5U] [i_8] [(_Bool)1] [i_1] [2] = arr_7 [i_1] [i_7];
                            }
                        } 
                    } 
                    arr_38 [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_7] [4])) : ((-(((/* implicit */int) arr_13 [i_7] [i_1]))))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((((/* implicit */int) arr_35 [i_1] [i_1] [(signed char)10] [(_Bool)1] [i_8] [i_8])) / (((/* implicit */int) arr_7 [i_1] [i_7]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        var_28 = ((/* implicit */signed char) arr_19 [i_11] [i_11]);
        arr_41 [i_11] [11U] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)104)), (((((/* implicit */_Bool) 15556080305510623734ULL)) ? (5888745325152463662ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    }
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) ((short) (unsigned short)1942))))))));
}
