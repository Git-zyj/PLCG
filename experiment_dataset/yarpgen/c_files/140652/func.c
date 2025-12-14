/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140652
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
    var_13 = ((/* implicit */unsigned char) ((((_Bool) var_12)) && (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) max((6095945516286608609LL), (((/* implicit */long long int) (short)5610))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((max((((/* implicit */unsigned int) var_5)), (var_6))) >> (((2223641627U) - (2223641609U))))));
                var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((-(((((/* implicit */int) var_1)) - (((/* implicit */int) var_4))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((var_8) - (2875582282U)))))) ^ (((((/* implicit */_Bool) (short)5579)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) | (8224608292624182487LL)));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (short)-5579));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5601)) ? (((/* implicit */int) (short)-5)) : (max((((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (unsigned short)27101)) ? (((/* implicit */int) (unsigned short)43782)) : (((/* implicit */int) var_7))))))));
}
