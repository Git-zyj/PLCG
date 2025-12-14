/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180419
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
    var_20 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_21 += ((/* implicit */unsigned short) min((((int) ((unsigned int) (unsigned char)15))), (((/* implicit */int) arr_4 [i_0] [i_0]))));
            arr_5 [i_1] = ((/* implicit */unsigned int) ((((_Bool) min((-5670001171247286891LL), (((/* implicit */long long int) arr_3 [i_0 - 1] [i_1]))))) ? (((/* implicit */int) arr_0 [2])) : (arr_1 [i_0])));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_9 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)11)) ? (min((arr_8 [i_1] [i_2 + 1]), (((/* implicit */unsigned long long int) 5670001171247286891LL)))) : (((/* implicit */unsigned long long int) 2798359688U)))) != (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_1] [i_0 - 1] [i_2] [i_1])))));
                var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [11] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [(signed char)6] [11LL] [i_2 + 1])) ? (268435456) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) 1496607607U)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)0] [i_2] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0] [i_0 - 1])))))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_2]))))) : ((+(692232404425215001ULL)))))));
                arr_10 [i_0 - 1] [i_0 - 1] &= ((/* implicit */unsigned long long int) arr_1 [(short)10]);
            }
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5670001171247286891LL)) ? (arr_3 [i_0] [i_0 - 1]) : (((/* implicit */int) (signed char)124))))) || (((/* implicit */_Bool) 2798359689U)))))));
        }
        var_24 -= ((/* implicit */long long int) var_19);
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)128))))) + ((+(arr_12 [i_3])))));
        var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_3] [i_3]))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) arr_11 [11U] [(short)6]);
    }
    var_26 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(var_7)))) : (-1))));
    var_27 = var_17;
}
