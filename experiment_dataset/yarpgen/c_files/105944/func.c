/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105944
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
    var_18 = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (4305813265707928621LL)))) : (var_6))) ^ ((~(min((((/* implicit */unsigned long long int) -4305813265707928621LL)), (var_11))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((+(var_12))) - (((((/* implicit */_Bool) 4494069241160334057ULL)) ? (((/* implicit */int) (short)27028)) : (var_13)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [(unsigned char)5] [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) & (max((((/* implicit */unsigned long long int) -4305813265707928619LL)), (17811702396084843704ULL)))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_2]);
                    var_20 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((-5168215646006911159LL) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)8])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) % ((-((-(((/* implicit */int) arr_1 [i_1 + 2]))))))));
                }
            } 
        } 
    } 
}
