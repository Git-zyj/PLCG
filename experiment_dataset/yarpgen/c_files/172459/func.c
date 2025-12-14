/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172459
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) >> (((((/* implicit */int) var_0)) - (30810)))))) ? (var_13) : ((~(((/* implicit */int) (unsigned char)8))))));
                arr_8 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) * (2033225623U)))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)0))))))) : (((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50667))) / (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (var_18))))))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -3532097803746994385LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)227))))) ? (-294379841332452864LL) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-9496)) + (2147483647))) << (((((/* implicit */int) (signed char)19)) - (19)))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_13);
}
