/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168010
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_11 ^= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1])))))) / (((((/* implicit */_Bool) arr_3 [(unsigned short)12] [(unsigned short)12] [i_3 - 1])) ? (arr_3 [16LL] [16LL] [i_3 + 1]) : (arr_3 [6ULL] [6ULL] [i_3 + 2])))));
                        var_12 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))))), (var_10)))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? ((-(arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                        var_13 ^= ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]) : (arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) (unsigned short)65533);
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_9 [i_4] [i_4]))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((signed char) (short)-17657))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)108))) : (var_10))), (((long long int) ((short) arr_5 [i_0] [(unsigned char)14])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((_Bool) arr_14 [i_6] [(unsigned short)8] [i_6])))));
        arr_19 [i_6] = ((/* implicit */unsigned char) (+(var_6)));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_12 [i_6] [(_Bool)1]))));
        var_19 ^= min((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [16ULL] [i_6]))) * (arr_3 [(short)6] [i_6] [i_6])))), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [8ULL] [8ULL])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (arr_17 [i_6]))) : (((unsigned int) arr_9 [(signed char)10] [i_6]))))));
    }
    for (int i_7 = 1; i_7 < 18; i_7 += 2) 
    {
        var_20 -= ((/* implicit */unsigned int) arr_1 [i_7 + 3]);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) var_6))))));
        arr_22 [i_7] = ((/* implicit */unsigned char) ((signed char) (-(((((((/* implicit */int) arr_11 [i_7] [i_7])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (112))))))));
        var_22 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) arr_12 [i_7 - 1] [i_7 + 3]))), (((unsigned int) ((((/* implicit */_Bool) arr_21 [5ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_2);
    var_24 = ((/* implicit */long long int) var_5);
}
