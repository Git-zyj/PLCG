/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171364
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
    var_14 = ((/* implicit */short) var_12);
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) -1)) : (min((var_1), (((/* implicit */unsigned long long int) -2)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23770)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) / (arr_2 [i_0])));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_9)))));
            arr_8 [i_0] [(short)7] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 3806035010148851300LL))))) / (((/* implicit */int) var_13))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [(signed char)1] [i_2]))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 523776U))) ? (arr_9 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (2095254685U)));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-3806035010148851301LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0])))))) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_2])) : ((~(var_4))));
                    var_18 = ((((/* implicit */_Bool) ((arr_13 [3ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3])))))) ? (((unsigned int) arr_5 [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_9))))));
                }
            }
        }
        arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) (short)23818))))) ? (((/* implicit */unsigned long long int) ((var_5) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1)))));
    }
}
