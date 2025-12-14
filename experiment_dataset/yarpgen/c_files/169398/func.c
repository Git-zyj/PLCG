/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169398
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
    var_13 = ((/* implicit */unsigned short) ((int) (unsigned short)46419));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)185))));
    var_15 = ((/* implicit */signed char) (((((~(((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)8945)))))) + (2147483647))) << (((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (short)32767)))))) - (185)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 3] [i_0 + 3])) || (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) arr_1 [i_1]))))))), ((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2] [i_0])))) && ((!(((/* implicit */_Bool) var_0))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) min((15U), (9U)));
            }
        } 
    } 
}
