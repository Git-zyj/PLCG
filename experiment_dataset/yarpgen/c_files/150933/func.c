/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150933
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
    var_14 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17053)) + (((((/* implicit */_Bool) (unsigned short)1015)) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) (unsigned short)1008))))));
                    var_15 = ((/* implicit */short) (((-(var_5))) != (min((((/* implicit */int) (!(var_4)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)64521)) : (var_1)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_4)), (var_13)))))) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_13)) : (min((4503599593816064ULL), (14754286452990169726ULL)))))));
    var_17 = ((/* implicit */int) (unsigned short)1015);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (18014398509481983ULL))) / (((/* implicit */unsigned long long int) ((-8540330824064029789LL) / (7323080082342766345LL))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
}
