/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145359
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
    var_12 ^= ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (4294967267U)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_5)), (var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) > (((unsigned long long int) (_Bool)1))));
        var_13 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((unsigned short) ((arr_2 [i_0]) + (arr_2 [i_0]))))) : (((/* implicit */unsigned char) ((unsigned short) ((arr_2 [i_0]) - (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~((((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (min((((/* implicit */int) (_Bool)0)), (-1981347964)))))));
        arr_5 [i_0] [i_0] = (_Bool)0;
        var_14 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_8 [i_1] = arr_6 [(short)1] [3U];
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [16ULL] [i_2])) : (((/* implicit */int) arr_1 [(unsigned short)14] [4LL])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                arr_17 [i_2] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((int) var_4)))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_14 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1])) & (var_8)));
                arr_23 [(signed char)0] [i_4] &= ((/* implicit */long long int) ((arr_19 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 2] [i_4 + 1])))));
                var_18 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [0ULL] [i_2] [i_4])) ? (var_8) : (((/* implicit */unsigned long long int) var_0)))) < (arr_16 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_2])));
                var_19 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_20 [i_2] [i_2])) / (18446744073709551615ULL)));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_20 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2] [i_1]))));
                var_21 ^= ((/* implicit */long long int) 4294967267U);
            }
            arr_26 [i_2] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1] [9LL] [i_1])) & (((/* implicit */int) var_7))));
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */short) ((((/* implicit */int) var_9)) % (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((((/* implicit */int) (signed char)81)) >> (((((/* implicit */int) arr_12 [i_1] [i_6] [i_6])) - (32937))))))))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                var_23 -= ((/* implicit */unsigned short) ((_Bool) -15));
                var_24 += ((/* implicit */unsigned char) (((-(var_2))) - (((16U) >> (((1352623543) - (1352623517)))))));
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [i_6] [i_7]))) - ((+(0ULL))))))));
            }
            var_26 -= ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
            arr_33 [i_6] = ((/* implicit */long long int) (~((~(arr_13 [(_Bool)1])))));
        }
        var_27 -= ((/* implicit */signed char) arr_6 [i_1] [i_1]);
    }
}
