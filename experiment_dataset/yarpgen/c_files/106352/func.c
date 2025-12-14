/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106352
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
    var_11 = ((/* implicit */unsigned char) ((((var_10) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10))))) ? (min((((/* implicit */unsigned long long int) var_10)), (min((var_1), (((/* implicit */unsigned long long int) 1190474447U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_12 += ((/* implicit */unsigned int) ((unsigned long long int) 4294967295U));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)60)) && (((/* implicit */_Bool) (unsigned short)42445))))))))))));
                    var_14 += ((/* implicit */long long int) (((~(arr_5 [i_2 - 1] [(unsigned char)12] [i_1 - 2]))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-63), ((signed char)-77))))))))));
                }
            } 
        } 
    } 
}
