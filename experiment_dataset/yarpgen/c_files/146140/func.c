/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146140
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
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_11)))) ? (((((/* implicit */_Bool) (unsigned short)49152)) ? (32767U) : (35445233U))) : (32768U)))))));
                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16383)) * (((int) arr_1 [i_0 + 3]))));
                arr_5 [9] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned short)30333), ((unsigned short)30358)))) != (((/* implicit */int) (unsigned short)16392)))))) - (((long long int) max(((unsigned short)30357), ((unsigned short)65535))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-32019)), (((((/* implicit */_Bool) max((1193864558), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14)))))))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) -5633535494509271281LL);
    var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_10))), (var_17)))) ? (var_19) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (var_3))), (((/* implicit */int) (unsigned short)49175)))))));
    var_25 = ((/* implicit */unsigned int) var_19);
}
