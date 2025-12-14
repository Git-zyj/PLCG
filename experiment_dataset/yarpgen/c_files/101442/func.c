/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101442
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
    var_13 &= (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38298)) / (((/* implicit */int) (unsigned char)119))))) ? (((/* implicit */int) (unsigned short)27237)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27246))) == (6726585511106926087ULL))))))) : (((((_Bool) (_Bool)1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned char)245), (((/* implicit */unsigned char) arr_4 [i_0]))))))))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)27238)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)241)), ((unsigned short)38282)))))))));
            }
        } 
    } 
}
