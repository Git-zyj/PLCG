/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133753
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
    var_15 = ((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_16 += ((/* implicit */unsigned char) (~((-(0ULL)))));
            arr_5 [i_0] [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (12159584598496243373ULL) : (18446744073709551607ULL)));
            var_17 ^= arr_0 [i_1];
            var_18 = ((/* implicit */unsigned long long int) var_9);
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? ((+(arr_4 [7ULL] [i_2] [(unsigned char)11]))) : ((+(var_14)))));
            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)159))));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) 18446744073709551611ULL))))) : (((/* implicit */int) var_2))));
            arr_10 [i_2] = ((9ULL) % (6ULL));
        }
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0] [i_0] [i_0])));
        arr_12 [10ULL] = ((/* implicit */unsigned char) 18446744073709551593ULL);
    }
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        var_20 = ((((((/* implicit */_Bool) max((8371579675629491096ULL), (arr_13 [i_3] [i_3])))) || (((/* implicit */_Bool) 10ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [5ULL]))) : ((~(max((((/* implicit */unsigned long long int) (unsigned char)32)), (13855631348008349469ULL))))));
        var_21 ^= ((/* implicit */unsigned long long int) arr_15 [i_3]);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_22 *= arr_7 [i_4];
        arr_18 [i_4] = ((/* implicit */unsigned char) arr_13 [i_4] [i_4]);
        var_23 = arr_3 [i_4] [i_4] [i_4];
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                arr_23 [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_5] [i_5]))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned char)10] [(unsigned char)10]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (var_8) : (arr_4 [i_5] [i_5] [i_6]))))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
}
