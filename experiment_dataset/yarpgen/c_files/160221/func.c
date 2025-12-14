/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160221
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
    var_13 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_5 [(signed char)1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (short)-20404)) : (-1)))) ? (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (unsigned short)4746)) : (((/* implicit */int) (unsigned char)168)))) : (((int) var_6)))) * ((+(((((arr_4 [16]) + (2147483647))) >> (((/* implicit */int) arr_2 [i_1] [i_0]))))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((min((-3782727717250113333LL), (((/* implicit */long long int) 0)))), (((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (unsigned short)12139))))))));
            arr_7 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) var_12);
        }
        arr_8 [i_0] = ((/* implicit */int) (-(((long long int) arr_3 [i_0] [i_0] [i_0]))));
    }
    var_14 = ((signed char) (~(((/* implicit */int) var_1))));
}
