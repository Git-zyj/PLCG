/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11572
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 11LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) > (arr_1 [i_1] [i_0])))) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 2]))))) ? (arr_8 [i_0] [i_0 + 2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)7)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_3] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) 1174231337);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((_Bool) ((unsigned long long int) (unsigned char)155))) ? (((((/* implicit */int) (unsigned short)48627)) + (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) min((arr_10 [i_1] [i_2] [i_0 - 1] [i_0 - 1] [i_2] [i_3]), (arr_10 [i_0 - 1] [i_3] [i_0 - 1] [i_2] [i_0] [i_2])))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_0]))) - (((/* implicit */int) (unsigned short)24374))))), (((((/* implicit */_Bool) arr_14 [i_0 + 3] [i_4 - 3] [i_4 - 2])) ? ((+(arr_4 [i_4]))) : (((/* implicit */unsigned long long int) 1961643179U))))));
                            var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned char)12] [i_4 - 3] [i_4] [i_4])) & (-169080079))));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_4] = 11599322514187556004ULL;
                        }
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -169080079)) & (arr_3 [i_0]))) & ((~(arr_4 [i_0])))))) ? (var_8) : (max((((/* implicit */unsigned int) ((short) (unsigned short)16910))), (1110192912U)))));
                    }
                    var_21 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned char) var_2)), (var_11))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 2])) ? (arr_15 [i_2] [i_0 - 2]) : (arr_15 [i_0] [i_0 + 1])))));
                    arr_19 [14ULL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((short) arr_5 [i_2] [i_1] [i_0]))) ? (6847421559521995612ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (arr_16 [i_0] [i_1] [i_0] [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0] [i_2] [i_2] [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 945948137)) & (18446744073709551615ULL)))))))));
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned long long int) ((unsigned int) 11654727339412003661ULL));
    }
    var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (2375245628U) : (((/* implicit */unsigned int) 169080079))))));
}
