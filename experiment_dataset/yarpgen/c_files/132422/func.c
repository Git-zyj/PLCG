/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132422
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
    var_17 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (var_12) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((int) arr_3 [12ULL] [i_1] [i_1 + 2])))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31214))) : (1483029296186022920LL))) - (min((min((2799244943651959024LL), (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) max((arr_3 [i_0] [i_1] [i_0]), (arr_1 [i_0]))))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned char) ((short) ((int) var_10)));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [(unsigned char)8] &= ((/* implicit */long long int) min((((((/* implicit */int) arr_8 [i_2] [i_2])) + ((+(((/* implicit */int) (unsigned char)165)))))), (max((((((/* implicit */int) (unsigned short)31214)) - (((/* implicit */int) arr_8 [i_2] [i_2])))), (((/* implicit */int) (signed char)32))))));
        arr_10 [8LL] |= ((/* implicit */unsigned char) (signed char)33);
        var_19 = min((((/* implicit */long long int) ((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [13]))))) * (((((/* implicit */unsigned int) 4194303)) + (var_3)))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (min((1813935092110683862LL), (((/* implicit */long long int) (signed char)32)))) : (arr_6 [i_2] [i_2]))));
        arr_11 [(signed char)2] |= ((/* implicit */unsigned long long int) (unsigned short)54556);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */signed char) var_1);
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) arr_13 [13])) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_8 [i_3] [(short)12]))));
    }
}
