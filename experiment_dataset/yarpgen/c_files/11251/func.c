/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11251
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
    var_19 = ((/* implicit */_Bool) (~(max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_2))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_0 - 2] [i_0 + 2])))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                    var_22 = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)252)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) arr_6 [(unsigned char)2] [i_0] [i_2 + 1] [i_2]))))) ? (max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_0]))) : (((/* implicit */int) (unsigned char)3))))));
                }
            } 
        } 
    } 
}
