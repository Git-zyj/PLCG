/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13041
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)));
    var_19 = ((/* implicit */unsigned int) min(((-(max((var_7), ((-2147483647 - 1)))))), ((-(((/* implicit */int) ((unsigned short) 2147483647)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(var_16)));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_20 = ((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (short)16817))) - (((/* implicit */int) ((((/* implicit */_Bool) 7330996228367335366ULL)) && (((/* implicit */_Bool) var_7)))))))) ^ ((+(((((/* implicit */unsigned int) ((/* implicit */int) (short)5016))) - (var_1))))));
}
