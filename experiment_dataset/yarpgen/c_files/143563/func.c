/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143563
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
    var_14 = ((/* implicit */int) ((_Bool) (-(var_0))));
    var_15 = ((/* implicit */short) (~(((((/* implicit */int) ((866996520U) == (866996520U)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)12486), (((/* implicit */short) var_10)))))) | (((unsigned long long int) 3427970775U))))) ? (((/* implicit */int) max((arr_2 [i_1] [i_1] [i_0]), (arr_2 [i_0 + 3] [i_0 + 3] [i_0])))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))) > (3427970755U)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))))));
                arr_4 [i_0] |= ((/* implicit */unsigned long long int) 866996520U);
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)171)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) : (max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) var_5))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (max((((/* implicit */int) (!(((/* implicit */_Bool) (-(3427970776U))))))), (max((var_9), (((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)84))))))))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_2]))));
        var_18 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (min((var_0), (((/* implicit */long long int) ((866996520U) < (((/* implicit */unsigned int) var_9)))))))));
    }
}
