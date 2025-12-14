/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184392
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (signed char)-107)), (3912630478U))) >> (((((/* implicit */int) ((signed char) (signed char)-107))) + (132)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (382336831U)))) ? (((long long int) (_Bool)1)) : (((long long int) 4294967295U)))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
    var_13 = ((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) - (var_5))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((((unsigned int) 7451205276482836933LL)) > (max((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))))));
                    var_15 = ((/* implicit */signed char) ((int) ((arr_0 [i_2] [i_0]) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))))))));
                    var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) 1371192028))))))));
                    var_17 = ((/* implicit */int) max((var_6), (((/* implicit */unsigned int) (!((_Bool)0))))));
                }
            } 
        } 
    } 
}
