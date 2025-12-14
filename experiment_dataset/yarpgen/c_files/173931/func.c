/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173931
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (+(var_10))))));
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */signed char) var_6);
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1 - 1]))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_2 [i_1 + 3]))))) < ((-(((/* implicit */int) arr_2 [i_1 + 3]))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (~((-(arr_3 [i_1 - 1])))));
    }
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_4)) > (-605600942))))));
            arr_12 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((var_0) - (11383452821719839280ULL)))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2 - 2])) ? (arr_10 [i_2 - 2]) : (arr_10 [i_2 - 2])));
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((arr_9 [i_2 + 1]) ? (((/* implicit */int) arr_9 [i_2 + 1])) : (((var_10) >> (((/* implicit */int) arr_9 [i_2 + 1]))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) -605600954)) & (arr_15 [i_4] [i_4]))), (((/* implicit */unsigned int) arr_2 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : ((~(arr_15 [i_4] [i_2 + 2])))));
        }
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            arr_19 [i_2 - 2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_2 + 3]);
            var_20 = ((/* implicit */int) min((var_20), (((int) min((((/* implicit */long long int) arr_6 [i_2 + 2])), (var_7))))));
        }
        arr_20 [i_2] [i_2] = ((/* implicit */_Bool) -605600954);
        var_21 = ((/* implicit */unsigned long long int) (((~(arr_8 [i_2 - 2]))) <= (((/* implicit */int) ((unsigned char) arr_3 [i_2 + 1])))));
    }
    var_22 = ((/* implicit */int) (unsigned short)31912);
}
