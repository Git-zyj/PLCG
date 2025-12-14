/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142567
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65)))))))));
                    var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-53)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
                    var_14 = (-(-13LL));
                    var_15 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (((!((_Bool)0))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : ((+(((/* implicit */int) (unsigned short)65535))))));
    var_17 = ((/* implicit */_Bool) var_6);
    var_18 = ((/* implicit */unsigned long long int) var_10);
}
