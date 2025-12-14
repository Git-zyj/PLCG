/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174439
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
    var_18 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_0 [i_1]))))) > (((/* implicit */int) max((arr_2 [i_0] [i_2] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))));
                    var_20 = max(((_Bool)1), ((((_Bool)1) && ((!(((/* implicit */_Bool) (signed char)-126)))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1)))))))));
                    arr_6 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 7258922914555295601LL)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (signed char)84)))) & (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-7))))) | (max((var_14), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_22 = var_13;
}
