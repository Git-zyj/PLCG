/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184261
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) min((min((((/* implicit */short) var_14)), ((short)-5))), (((/* implicit */short) var_16))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_2)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_17))))) : (min((((/* implicit */long long int) (unsigned char)255)), (0LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (arr_7 [4ULL] [i_1] [i_0]) : (((/* implicit */int) var_17)))))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_1 + 1]))));
        }
        for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 1] [i_3 - 1])) ? (2147483647) : (((/* implicit */int) arr_1 [i_2 + 1]))));
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2 + 1] [i_2 - 1])) != (((((/* implicit */_Bool) -1LL)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))));
                arr_14 [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
            }
            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_2])) : (((/* implicit */int) arr_2 [i_2 + 2] [i_2 - 1]))));
            arr_15 [i_2] = ((/* implicit */long long int) (unsigned char)26);
        }
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))));
        arr_18 [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((0LL) != (((/* implicit */long long int) arr_7 [i_4] [i_4] [i_4])))));
    }
    var_24 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) min((var_12), (var_16))))) % (min((var_8), (((/* implicit */long long int) (short)32767)))))), (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
    var_25 = ((((/* implicit */_Bool) 0LL)) ? ((+(((((/* implicit */_Bool) 16777215)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_13)))))) : (((/* implicit */int) var_17)));
}
