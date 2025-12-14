/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143816
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
    var_19 |= ((/* implicit */short) ((var_15) >= (((/* implicit */int) (signed char)93))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */_Bool) ((int) var_13));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_15)) : (16777216LL)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_21 &= ((/* implicit */_Bool) ((arr_4 [i_1 - 2] [i_1]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) - (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) arr_3 [i_1 + 1])))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_17))));
            arr_8 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 3120591572568540195ULL))));
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_1 + 1]));
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                            var_25 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -16777197LL)) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) arr_4 [i_3] [i_5])))))));
                            arr_19 [i_1] [i_1] [i_4] [i_1] [i_6] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)38689))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11530338278394837716ULL)) ? (-1679853961) : (((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
            } 
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) -1LL);
        }
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) var_2));
        arr_22 [i_1] = ((/* implicit */long long int) 18446744073709551600ULL);
    }
}
