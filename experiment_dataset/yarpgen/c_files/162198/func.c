/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162198
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
    var_17 = ((/* implicit */unsigned long long int) (+(max((-630763376), (630763376)))));
    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 10074344283752615706ULL)) ? (((/* implicit */int) (unsigned short)17097)) : (((/* implicit */int) (_Bool)1))))), (var_2)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -4652495927670504102LL))))) : (((/* implicit */int) var_15))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */_Bool) (unsigned short)32736);
                    var_20 = ((/* implicit */_Bool) 2697109920U);
                    var_21 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned int) (unsigned short)8706))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (signed char)-18)))) : ((-(((/* implicit */int) (signed char)-18)))))), ((~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) * (((((/* implicit */int) (signed char)33)) * (((/* implicit */int) (signed char)49))))))));
                    var_22 = max((((((/* implicit */long long int) ((/* implicit */int) var_11))) + (-4652495927670504121LL))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
