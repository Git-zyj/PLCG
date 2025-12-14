/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129098
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */unsigned int) (+(var_15)));
                    arr_6 [i_0] [i_0] [i_2 - 1] [i_2 + 3] = ((/* implicit */signed char) var_10);
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_4 [6LL] [i_1] [(_Bool)1] [6LL]) || (((arr_1 [i_0 - 3]) >= (((/* implicit */unsigned int) ((arr_4 [i_0 - 2] [i_1] [i_2] [i_1]) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)41)))))))));
                    var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_2 [(signed char)3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [7ULL] [i_1] [(unsigned short)4] [7ULL])))) << (((((arr_4 [(_Bool)1] [i_1] [i_2] [i_2 + 3]) ? (var_16) : (arr_1 [i_2 + 3]))) - (207859775U))))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)0)))) + (min((var_16), (((/* implicit */unsigned int) var_17)))))), (((/* implicit */unsigned int) (short)5076))));
}
