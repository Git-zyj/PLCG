/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183576
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_5))))))) - (((((((/* implicit */_Bool) (short)-2619)) ? (18446744073709551610ULL) : (15ULL))) / (((var_7) + (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_7);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31564))) : (2513206856651894587ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (((/* implicit */int) arr_7 [i_1 + 2])) : (((/* implicit */int) arr_7 [i_1 + 1])))))));
                    var_15 = ((/* implicit */unsigned short) ((144114638320041984ULL) > (((/* implicit */unsigned long long int) 6507868271558512133LL))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-10459))) - (-8024790395394776998LL)));
    }
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_3])), (arr_10 [i_3])));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) 10901534210445274115ULL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_8 [i_5]))));
                        var_20 = (i_3 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_6] [i_6] [i_3])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_17 [i_3] [i_4] [i_4] [i_4] [i_4] [20ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))) + (1476066873252715955LL)))))) : (((/* implicit */long long int) ((((((((/* implicit */int) arr_16 [i_6] [i_6] [i_3])) - (2147483647))) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_17 [i_3] [i_4] [i_4] [i_4] [i_4] [20ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))) + (1476066873252715955LL))) - (330851996334982379LL))))));
                        var_21 += ((/* implicit */short) ((unsigned short) 18302629435389509631ULL));
                    }
                    arr_18 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) arr_17 [i_3] [i_4] [i_4] [11] [i_4] [3ULL]);
                }
            } 
        } 
        arr_19 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) arr_10 [i_3]))) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_15 [i_3] [i_3] [i_3 - 1])), (var_5)))) == (arr_14 [i_3 - 1]))))) : (((((/* implicit */unsigned long long int) var_5)) * (((arr_14 [i_3 - 1]) >> (((var_9) - (1267002339))))))));
    }
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (min((var_8), (((/* implicit */unsigned int) arr_20 [i_7 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)6916), (arr_20 [i_7 + 1])))))));
        var_22 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) var_4)), (min((var_1), (((/* implicit */unsigned long long int) var_3))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((var_9) >> (((var_5) - (402996182)))))), (min((((/* implicit */unsigned int) var_0)), (4294967274U))))) > (((/* implicit */unsigned int) var_5))));
}
