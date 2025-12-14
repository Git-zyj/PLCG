/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158889
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
    var_20 = ((/* implicit */int) max(((-(var_17))), (((unsigned int) ((unsigned long long int) var_19)))));
    var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (unsigned short)27272))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? ((((!(((/* implicit */_Bool) 2237025593412488463ULL)))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((4224103216U) > (((/* implicit */unsigned int) var_18)))))))) : (min((511U), (70864059U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_22 = max(((-(((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))), (min((max((var_19), (arr_2 [i_1] [i_0] [i_0]))), (((/* implicit */unsigned int) var_2)))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) (~(min((var_11), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [10U]))) >= (17293822569102704640ULL)))), (max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])), (14082138546614948440ULL))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_6)) : (((4224103225U) * (var_11))))) ^ (arr_1 [i_0])));
                arr_5 [i_0] [4U] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((arr_1 [(unsigned char)18]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))) ? ((-(2228381024U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > ((~(((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((int) var_4))));
            }
        } 
    } 
}
