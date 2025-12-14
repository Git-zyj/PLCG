/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164631
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [(short)6] = ((/* implicit */int) arr_0 [i_1] [i_0]);
                var_13 = ((/* implicit */int) max((var_13), (max(((((-(arr_1 [i_0]))) - (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)-18))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)22214))))) ? (((((/* implicit */_Bool) (unsigned short)22214)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_1 [i_1]))) : (((/* implicit */int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_2] [i_4] [(short)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_4 + 3]), ((unsigned short)19)))) ? (((/* implicit */int) (unsigned short)22214)) : (((/* implicit */int) (signed char)88))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)22204))))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) + (var_10))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) * (((/* implicit */int) var_2))))))))))));
                }
            } 
        } 
    } 
}
