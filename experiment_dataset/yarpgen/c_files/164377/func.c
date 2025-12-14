/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164377
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
    var_15 = ((/* implicit */signed char) 1922475939U);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (1637869765) : (((((/* implicit */_Bool) -1225214231)) ? (((/* implicit */int) (unsigned short)25767)) : (1015966664))))) : (-1225214239)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60131))) / (arr_3 [1U] [i_0]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1705942076)))) * (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_3 [i_0] [i_0])))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : ((-(arr_3 [i_0] [i_0]))))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_2 [i_1] [i_1]))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 1225214214))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) ((max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)60131)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_5 [i_1] [i_1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (1225214245) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) (signed char)-38)) : ((-(((/* implicit */int) (unsigned short)39768)))))))))));
        var_22 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) / (18446744073709551610ULL))))))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) 2147483626)) ? ((((_Bool)1) ? (arr_11 [i_2]) : (arr_11 [i_2]))) : (arr_9 [i_2])));
        var_24 = ((/* implicit */signed char) (unsigned short)60139);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_2]) ^ (arr_4 [i_2])))) ? ((~(arr_4 [i_2]))) : (8655929626912134485LL)));
    }
}
