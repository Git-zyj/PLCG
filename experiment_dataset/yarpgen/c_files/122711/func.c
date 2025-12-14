/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122711
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(unsigned short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) ((short) arr_4 [i_0] [i_1] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) == (((/* implicit */int) var_15)))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)12228)) : (((/* implicit */int) (signed char)24)))) * (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_19) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : ((~(((((/* implicit */_Bool) 1798106353U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_19)))))));
    var_21 = ((/* implicit */long long int) var_2);
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2120)) ? (((/* implicit */int) (unsigned short)30746)) : (((/* implicit */int) (short)-5469))));
    var_23 = ((/* implicit */long long int) var_15);
}
