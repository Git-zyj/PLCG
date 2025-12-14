/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102894
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
    var_18 = ((/* implicit */unsigned char) ((signed char) ((((long long int) 1022)) / (var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22644))) ^ (11LL))) * (11LL))) : (((/* implicit */long long int) arr_2 [i_0 - 1])));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)46763)) <= (((/* implicit */int) (unsigned char)111)))))) < (arr_5 [i_1 + 1] [i_0] [i_0 - 1])))), (((unsigned long long int) (~(((/* implicit */int) var_6)))))));
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) == (arr_2 [i_0 - 1])))), (((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [(unsigned char)4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) (!((_Bool)0))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (-(15LL)));
}
