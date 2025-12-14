/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17594
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) max((1206620290U), (((/* implicit */unsigned int) (short)-31086))))) ? (((/* implicit */long long int) var_4)) : (min((var_0), (((/* implicit */long long int) var_8))))))))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_2))));
    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((-(var_9))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)61412))))))) > (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_14 |= ((/* implicit */unsigned int) (!(var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((var_4) > (((/* implicit */int) arr_1 [i_2])))))))) > (1206620290U)));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (arr_5 [i_0])))) ? (min((arr_3 [i_1 + 1]), (((/* implicit */unsigned long long int) var_10)))) : ((~(arr_3 [i_0])))))))));
                }
            } 
        } 
    } 
}
