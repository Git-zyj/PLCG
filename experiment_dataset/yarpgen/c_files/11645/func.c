/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11645
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
    var_18 &= ((/* implicit */long long int) ((unsigned char) var_16));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned short) ((((9149026270952461188LL) < (9149026270952461188LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) != (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((unsigned long long int) -9149026270952461208LL))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_20 -= ((/* implicit */unsigned long long int) ((17737529428328321404ULL) > (((max((2680930111091225686ULL), (17737529428328321396ULL))) + (17400746140309960678ULL)))));
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_8 [i_2 - 1] [i_2] [1ULL]))));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_2 - 2]), (((/* implicit */signed char) arr_6 [i_0] [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [7LL] [i_2 - 1] [(short)11])) ? (((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2 + 1]))))) : (17737529428328321425ULL)));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_2))));
                        var_24 += ((/* implicit */_Bool) ((long long int) 17737529428328321412ULL));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_4 [i_0]), (((/* implicit */int) (unsigned char)45))))), (min((-9149026270952461182LL), (((/* implicit */long long int) var_6))))))) && (((/* implicit */_Bool) arr_2 [10ULL])))))));
            var_26 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15499509991300770315ULL)) || (((/* implicit */_Bool) (unsigned short)62323))))), (((arr_3 [i_0] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_2 [i_4])))));
            var_27 = (~(((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0]) : (arr_4 [i_0]))));
        }
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2947234082408781271ULL)) ? (1134312323U) : (2584142097U)))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))))));
        arr_13 [i_0] [i_0] &= ((/* implicit */int) (+(arr_1 [i_0])));
        var_29 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) >= (max((17957693644761557973ULL), (arr_2 [i_0])))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2052935285)), (var_1)))), (709214645381230219ULL))) : (max((((7362152252647134439ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((arr_15 [0ULL]), (((/* implicit */long long int) var_10)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1))))))));
            arr_21 [i_5] [i_6] |= ((/* implicit */int) ((unsigned long long int) max((((((/* implicit */long long int) var_12)) | (arr_9 [(unsigned short)12]))), (var_1))));
            arr_22 [2ULL] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_5] [3LL] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2091))) : (((arr_2 [i_5]) / (((/* implicit */unsigned long long int) (+(var_14))))))));
        }
        var_32 = ((/* implicit */long long int) max((var_32), (var_11)));
    }
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (unsigned short)35794))));
    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((var_15) & ((~(min((((/* implicit */unsigned long long int) var_12)), (var_17))))))))));
}
