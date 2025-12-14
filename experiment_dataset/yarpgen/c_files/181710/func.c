/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181710
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) ((((/* implicit */int) (short)21680)) == (1073741824)))) : (-1055476971))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_8 [i_2] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((arr_3 [i_2]) == (((/* implicit */int) (short)-21681)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_4 [(unsigned char)0] [i_1]))))) : (((((/* implicit */_Bool) (short)-21681)) ? (3670016) : (-1497036108)))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) -1055476967)) ? (arr_4 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) 0)))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_20 = ((/* implicit */short) arr_9 [i_0] [i_1 + 3] [i_2] [i_3] [i_2] [i_3]);
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 - 2] [i_1])) ? (63) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2]))));
                    var_22 ^= ((/* implicit */unsigned short) ((1055476967) % (((int) 2071163895388612742ULL))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1] [(unsigned short)4])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)6]))) / (6372493810518707238LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45992)) ? (1967035584) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))));
                }
            }
            var_24 = ((/* implicit */int) (unsigned short)0);
            var_25 ^= ((/* implicit */unsigned char) (-(0)));
            var_26 = ((/* implicit */unsigned long long int) max(((-(arr_9 [i_1 - 2] [i_0] [i_0] [i_0] [(signed char)12] [i_0]))), (((((/* implicit */_Bool) (short)-21681)) ? (379730195) : (((/* implicit */int) (unsigned short)19553))))));
            var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)7)) ? (arr_4 [i_1 - 3] [i_1 - 2]) : (arr_4 [i_1 - 3] [i_1 - 2]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (arr_3 [i_1 - 2]))))));
        }
        var_28 ^= ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1928853938)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) - (max((18446744073709551600ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [12ULL] [2]))))))));
    }
    var_29 -= ((/* implicit */signed char) var_12);
}
