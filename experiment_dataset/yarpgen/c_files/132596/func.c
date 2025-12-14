/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132596
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(var_5))));
                                var_13 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >= (((int) arr_4 [i_0] [i_1] [i_2]))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_3])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (arr_2 [i_0] [i_1])));
                            }
                        } 
                    } 
                    var_15 ^= arr_1 [i_0] [i_1];
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (var_6) : (((/* implicit */int) arr_10 [i_0] [i_0])))))));
                    var_17 = (short)8314;
                    arr_13 [9ULL] [i_1] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
        arr_14 [i_0] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (18162119636870516037ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_2);
}
