/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157324
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
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (~(-5786750503435333552LL)))), (16262760868554867087ULL))), (((/* implicit */unsigned long long int) var_1))));
                var_12 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -5786750503435333552LL)) || (((/* implicit */_Bool) var_5))))), (756024554U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))) > (min((min((2689996543U), (var_5))), (((/* implicit */unsigned int) ((unsigned char) var_8)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((min((var_1), ((!(((/* implicit */_Bool) 1561004314U)))))) || (((/* implicit */_Bool) ((var_3) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    var_14 = ((/* implicit */unsigned short) ((unsigned int) 0ULL));
}
