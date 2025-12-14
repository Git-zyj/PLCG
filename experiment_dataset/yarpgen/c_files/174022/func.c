/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174022
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (unsigned char)191);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_1)))) && (((/* implicit */_Bool) (~(((var_1) / (((/* implicit */int) var_3)))))))));
                    var_13 &= max((max((max((arr_2 [(unsigned char)4]), (arr_6 [8U] [i_2] [i_0] [8U]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)37)))), (((/* implicit */int) ((unsigned char) arr_5 [i_0] [(unsigned char)6] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */long long int) min((var_4), (var_4)));
}
