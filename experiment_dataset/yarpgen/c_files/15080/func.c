/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15080
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) var_9))));
    var_11 = ((/* implicit */short) (unsigned char)7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((unsigned short) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((long long int) (unsigned char)94))) ? (max((var_8), (((/* implicit */unsigned long long int) (unsigned char)94)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)92)) || (((/* implicit */_Bool) var_9)))))))), ((~(min((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_1] [i_1 + 1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (1498000531U)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [20U] [20U])) ? ((~(((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (min((((/* implicit */int) (_Bool)1)), ((((-2147483647 - 1)) / (((/* implicit */int) (unsigned char)162))))))));
        arr_9 [i_2] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_2] [i_2]))))))) && (((/* implicit */_Bool) arr_4 [i_2] [15ULL])));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        arr_12 [i_3] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_8 [(signed char)20] [i_3])))) : (((/* implicit */int) (unsigned short)65535)))) << ((((((-(976232917U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (47410474U)))));
        var_14 = max((max((((/* implicit */unsigned long long int) var_6)), (arr_4 [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((int) 2147483647))));
        var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) (signed char)18)))));
    }
}
