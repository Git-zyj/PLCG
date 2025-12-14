/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149092
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
    var_16 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) ((max((var_10), (((/* implicit */int) var_0)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551602ULL))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) / (((72057593769492480ULL) * (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_4]))));
                        arr_16 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((arr_5 [i_1]) >> (((/* implicit */int) (short)0))));
                        arr_17 [i_1] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) ? (arr_11 [i_1] [i_2] [i_3]) : (arr_11 [i_1] [i_2] [i_4])));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [4ULL])) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_14 [(unsigned char)0] [i_1] [i_1] [(unsigned char)0]))));
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            {
                arr_26 [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_5 - 1]))))) ? (min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_5] [i_6])) * (((/* implicit */int) (signed char)122))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL)))) ? (arr_25 [i_6]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_6] [i_5 - 1])) : (((/* implicit */int) (unsigned short)0)))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_5 + 2] [21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : ((~(arr_19 [i_6])))));
            }
        } 
    } 
}
