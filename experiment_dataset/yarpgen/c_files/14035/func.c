/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14035
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (max((var_14), (var_6)))))), (((((/* implicit */_Bool) var_13)) ? (min((1619928332U), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (+(3242470071U)));
                    var_22 = ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (arr_3 [i_0 + 1])))) - (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))) << ((((((_Bool)1) ? (-656934072) : (((/* implicit */int) (_Bool)1)))) + (656934080))))));
                    var_23 = ((/* implicit */signed char) ((((10817843796429629474ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))))) << ((((~(1023U))) - (4294966222U)))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) max((var_2), (((/* implicit */long long int) var_6)))))) & (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (unsigned short)44730)) - (44721)))))) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])) : (((/* implicit */int) var_16))))));
                }
            } 
        } 
    } 
}
