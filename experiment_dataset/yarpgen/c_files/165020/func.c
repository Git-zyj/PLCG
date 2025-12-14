/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165020
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4633816935193905411LL)) ? (-605408688467243065LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57)))))))) ? (((((/* implicit */_Bool) var_3)) ? (-7231008438127057616LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_10))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (~(4633816935193905411LL)))))));
    var_19 = ((/* implicit */long long int) var_16);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (((max((var_5), (((/* implicit */unsigned int) (short)-32748)))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243)))))));
}
