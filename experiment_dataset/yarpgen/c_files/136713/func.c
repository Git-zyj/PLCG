/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136713
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_0])))) : (((arr_6 [i_0] [i_0] [i_0 + 1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-19)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (133955584) : (((/* implicit */int) (signed char)121))))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4965623645059988938LL))));
                    var_15 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) min(((unsigned short)5543), (((/* implicit */unsigned short) arr_2 [i_0] [i_0 + 1] [i_0]))))))), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))));
                    arr_9 [(unsigned char)8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [9] [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_2 [i_1 - 2] [i_1] [i_1])))) : ((+(((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((-1988108864) > (((((/* implicit */_Bool) (signed char)54)) ? (var_12) : (-323648550))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) var_2)))) | (((/* implicit */int) min(((unsigned char)120), (((/* implicit */unsigned char) (signed char)24)))))))) : (max((((/* implicit */long long int) min((((/* implicit */int) var_13)), (var_3)))), (((-1691659047275754126LL) - (((/* implicit */long long int) var_0))))))));
    var_17 &= ((/* implicit */unsigned long long int) var_4);
}
