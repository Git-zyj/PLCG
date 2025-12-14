/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131133
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_11 += ((/* implicit */unsigned long long int) max((9223372036854775807LL), (min((arr_1 [4LL]), (((/* implicit */long long int) arr_2 [2]))))));
        var_12 = ((/* implicit */short) var_6);
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) 5137926107056832180ULL))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)71))) != (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) -1LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_1))) == (((/* implicit */int) (unsigned short)28694)))))) : ((-(((((/* implicit */long long int) arr_8 [i_4 - 1] [i_3] [i_3])) + (-9223372036854775807LL)))))));
                            var_15 = ((/* implicit */unsigned char) (signed char)15);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_1] [i_3] [i_1] [0LL] [i_6] [i_1] = ((/* implicit */signed char) ((long long int) var_0));
                            var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18714)) ? (-1LL) : (9223372036854775788LL)));
                        }
                        var_17 = ((/* implicit */unsigned short) min((((long long int) (_Bool)1)), (((/* implicit */long long int) arr_14 [i_2] [i_2] [i_4 + 2] [i_1]))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_2] [6LL] [i_2] [(_Bool)0] [(_Bool)0] [i_3])), ((unsigned short)52921)))) ? ((-(((/* implicit */int) ((unsigned char) 67043328))))) : ((-(((((/* implicit */int) var_3)) % (((/* implicit */int) arr_18 [(unsigned short)22])))))))))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12615)) >> (((2369167863U) - (2369167841U)))))) & (var_7)))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_3 [i_4 - 1])))) : (((/* implicit */int) var_8)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [9] [i_1])) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)10] [i_1])) : (((/* implicit */int) arr_20 [i_1] [(signed char)17] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : ((-(-9223372036854775788LL)))));
    }
    var_21 = min((var_10), (var_10));
}
