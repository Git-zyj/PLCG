/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116453
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned short)31)))))) ? (((((/* implicit */_Bool) 17589765814129017373ULL)) ? (((/* implicit */int) ((_Bool) -7458235682358695216LL))) : (((int) 856978259580534243ULL)))) : (((int) ((_Bool) var_4))))))));
                    var_12 = ((/* implicit */unsigned long long int) ((short) ((short) ((unsigned int) var_10))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((_Bool) 7458235682358695215LL)) ? (((((/* implicit */_Bool) 17589765814129017372ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (17589765814129017373ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)6)))))));
}
