/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114271
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (min((var_8), (((/* implicit */long long int) var_10))))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)0))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((var_8), (var_8)))))));
    var_13 = ((/* implicit */unsigned char) ((short) var_9));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))) ? (min((arr_0 [i_0] [(short)22]), (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_15 += ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(short)18] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_0 [i_1 - 3] [i_0]) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [8LL] [i_1])))))))) : (((((var_5) | (((/* implicit */unsigned long long int) var_1)))) | (((/* implicit */unsigned long long int) ((2057074135) + (((/* implicit */int) (signed char)0)))))))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) ((((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))) << (((((((((/* implicit */_Bool) arr_1 [(unsigned short)15] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) + (167327452910113084LL))) - (18LL))))));
        }
        for (unsigned short i_2 = 4; i_2 < 22; i_2 += 1) /* same iter space */
        {
            var_16 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 4] [i_2 + 2] [i_2 + 2])) || (((/* implicit */_Bool) (signed char)-33))))), (((((/* implicit */_Bool) ((arr_6 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)))) ? (arr_7 [i_2 + 1] [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) || (((/* implicit */_Bool) (unsigned short)43756)))))))));
            arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) << (((arr_1 [i_2 - 3] [i_2 - 3]) - (211070716U)))))) == (min((arr_1 [i_2] [23U]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_0] [i_2])))))))));
        }
        /* vectorizable */
        for (short i_3 = 4; i_3 < 23; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 1; i_4 < 23; i_4 += 2) /* same iter space */
            {
                arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [i_4 + 1])) ? ((~(14460737183181053613ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_11))));
            }
            for (long long int i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 2147483647))));
                arr_17 [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_3);
            }
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [7ULL] [i_3 + 1] [i_3 - 4])) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((int) var_0)))));
            arr_18 [i_3] = ((/* implicit */unsigned char) arr_6 [i_0]);
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_22 [i_0] [i_6] = ((/* implicit */unsigned long long int) var_10);
            arr_23 [i_0] [i_0] [12U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_6]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((804758699068824887ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
            var_21 = var_11;
        }
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5772))) : (17641985374640726728ULL)))) ? (((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) min(((short)448), (var_0)))) + (31755))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (8279249336044775003LL) : (var_1))) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    }
}
