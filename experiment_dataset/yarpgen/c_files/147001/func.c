/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147001
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
    var_15 = ((int) (+(((/* implicit */int) (unsigned short)4114))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [(unsigned char)3] [1ULL] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) (unsigned char)0)))));
                    arr_11 [i_2] &= ((/* implicit */unsigned char) ((short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-123))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((unsigned short) (-(((unsigned int) 11ULL)))));
    var_17 = ((/* implicit */long long int) (~(((int) ((int) (unsigned short)4114)))));
}
