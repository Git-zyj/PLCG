/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155283
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)160), ((unsigned char)74)))) == (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0 - 1]) : (((/* implicit */int) arr_1 [i_0 - 1]))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_15 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)182))));
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((var_8) >> (((((((((/* implicit */int) arr_7 [(short)12])) + (2147483647))) << (((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1))) - (201U))))) - (2147483574)))));
            arr_13 [7LL] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)166)) ? (((((/* implicit */_Bool) ((long long int) arr_8 [i_2] [i_2]))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1 + 2] [i_2])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)71), ((unsigned char)182)))) ? (arr_6 [i_1 + 2] [i_1 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)185)) * (((/* implicit */int) (unsigned char)58))))))))));
            var_17 = ((/* implicit */unsigned int) (unsigned char)95);
            var_18 += ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)179)) <= (((/* implicit */int) (unsigned char)70)))) && (((/* implicit */_Bool) arr_7 [i_2]))));
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) (unsigned char)79);
            arr_18 [i_1] = ((/* implicit */unsigned long long int) (-((~(arr_15 [i_1 + 1] [i_3] [i_3])))));
        }
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 - 1] [3LL] [i_1 - 1])))))), (arr_6 [(_Bool)1] [(_Bool)1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [(unsigned char)10] [i_1 + 2])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_23 [i_4] &= ((/* implicit */signed char) ((arr_20 [i_4] [(signed char)14]) % (arr_20 [i_4] [i_4])));
        arr_24 [i_4] [i_4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_22 [i_4])) ? (arr_20 [6LL] [i_4]) : (var_10)))));
        arr_25 [(_Bool)1] = ((/* implicit */unsigned char) var_8);
    }
    var_20 = ((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))) ^ (((/* implicit */int) var_5)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned char)79)) * (((/* implicit */int) (unsigned char)79))))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_8)) / (var_4)))), (var_10)))));
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)82)), (((long long int) (unsigned char)182))));
}
