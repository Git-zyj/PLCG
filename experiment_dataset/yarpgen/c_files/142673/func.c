/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142673
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) & ((~(11751681538692567124ULL)))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (5477302828262183246LL) : (arr_2 [i_0] [(signed char)2])))) ? (((((/* implicit */_Bool) 6695062535016984512ULL)) ? (((/* implicit */unsigned long long int) -7131962082751789703LL)) : (6695062535016984468ULL))) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6695062535016984475ULL)) || (((/* implicit */_Bool) var_4))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [1U] [i_2 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(var_12))))));
                    var_14 = ((/* implicit */short) ((6695062535016984492ULL) == (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_2 [i_1 + 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                {
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(6695062535016984473ULL)))) ? (6695062535016984475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (max((((/* implicit */unsigned int) var_7)), (arr_3 [i_0]))) : ((-(((((/* implicit */_Bool) 12172063931390817470ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25473)))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (signed char i_5 = 4; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((((var_12) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) var_11)) ? (var_8) : (var_8))))) >> ((((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_5 - 2])))) + (237)))))));
                                arr_21 [i_0] [i_1 - 2] [i_3 + 3] [i_4] [i_5 + 2] = ((/* implicit */unsigned short) 4103341229U);
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((11751681538692567134ULL) >> (((var_11) - (710330668U))))) / (((/* implicit */unsigned long long int) (((_Bool)0) ? (0LL) : (((/* implicit */long long int) 131056U)))))))) ? (((((/* implicit */_Bool) var_8)) ? (((7131962082751789699LL) >> (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 4294967168U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63612))) : (-2941426392243672530LL))))) : (((/* implicit */long long int) (+(((1902554868U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)31438))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 23LL)) * (6695062535016984480ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (-7131962082751789690LL))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) % (((((/* implicit */unsigned long long int) -7131962082751789709LL)) * (18446744073709551596ULL))))))));
                }
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 7889419859559002501ULL)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) - (var_8)))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (short)-31439))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (15812573268796338337ULL)));
}
