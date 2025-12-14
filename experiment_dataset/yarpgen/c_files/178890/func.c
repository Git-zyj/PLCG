/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178890
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
    var_11 = ((/* implicit */long long int) min(((~((+(((/* implicit */int) (unsigned short)18627)))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((-623931144850689801LL), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)5296)))))))));
                arr_4 [8LL] [i_1] = ((/* implicit */unsigned long long int) min((3968U), (((/* implicit */unsigned int) (unsigned short)27723))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)0)), (arr_3 [i_0] [i_1 + 1] [i_1 - 1])))) ? (((/* implicit */int) max(((unsigned short)46908), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)37813)) <= (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1])))))))));
                arr_5 [i_1 + 1] [i_1] |= ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)46909)) : (-1)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_2);
}
