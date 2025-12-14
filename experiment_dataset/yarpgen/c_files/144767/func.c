/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144767
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
    var_18 -= ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) arr_5 [i_0] [i_1] [i_0] [i_0]))), ((-(arr_1 [i_1])))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((18175063154569700858ULL), (271680919139850758ULL)))))) && (((/* implicit */_Bool) var_15))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_0);
}
