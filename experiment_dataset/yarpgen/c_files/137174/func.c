/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137174
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) 11493030036303896227ULL);
        var_11 = ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = arr_3 [i_1] [i_1];
        arr_6 [i_1] = ((/* implicit */long long int) var_7);
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (max((arr_4 [i_2]), (arr_4 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (((unsigned int) (signed char)0)))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_2] [i_3] [i_2]))) : (((unsigned long long int) max((9ULL), (((/* implicit */unsigned long long int) arr_7 [i_2])))))))));
            arr_14 [i_3] = ((/* implicit */unsigned long long int) max((arr_12 [i_3] [i_3] [i_2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-4)))))));
            arr_15 [i_2] [i_3] [i_3] = var_5;
            var_13 = ((/* implicit */unsigned long long int) max(((~(739254159U))), (((/* implicit */unsigned int) ((unsigned char) max((var_1), (arr_11 [i_2] [i_3] [i_3])))))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_14 ^= ((/* implicit */signed char) var_1);
                            arr_23 [i_2] [i_3] [i_4] [i_3] [i_4] [i_3] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            arr_27 [11U] [i_2] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4248890094U)) || (((/* implicit */_Bool) 18446744073709551606ULL)))) && (((/* implicit */_Bool) ((arr_24 [3U]) >> (((var_9) - (1390215840U))))))))), (((max((18446744073709551606ULL), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7] [i_7] [i_7])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 + 1] [i_7 - 1])))))));
            arr_28 [i_2] [i_7] = ((/* implicit */unsigned int) 18446744073709551606ULL);
            arr_29 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_7] [i_7 + 1] [i_7 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7 + 2])))))) : (18446744073709551607ULL)));
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (arr_11 [i_2] [i_7 + 2] [8U])));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((4294967291U) % (var_7)))) ? (5ULL) : (((((/* implicit */_Bool) var_5)) ? (arr_19 [(signed char)16] [(signed char)16] [i_2] [i_8] [(_Bool)1] [i_8]) : (((/* implicit */unsigned long long int) var_4))))));
            arr_33 [i_2] [i_2] = ((/* implicit */signed char) arr_24 [i_8]);
            arr_34 [i_8] [i_2] [i_2] = ((/* implicit */unsigned int) ((10ULL) / (((/* implicit */unsigned long long int) 1586689017U))));
            var_17 = ((/* implicit */signed char) ((arr_12 [i_2] [i_2] [i_8]) ^ (((/* implicit */long long int) var_9))));
            arr_35 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_8] [i_8] [i_8] [i_2] [i_8] [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_8] [i_8] [i_8])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1586689017U)) ? (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (2708278278U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_9] [i_9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) var_2))))))))) ? (((unsigned long long int) arr_19 [i_2] [i_9] [i_9] [i_9] [i_2] [i_2])) : (((/* implicit */unsigned long long int) var_4))));
            var_19 = ((/* implicit */signed char) arr_10 [i_2] [i_9]);
        }
    }
    var_20 = ((/* implicit */unsigned char) 13ULL);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((unsigned long long int) var_8))));
}
