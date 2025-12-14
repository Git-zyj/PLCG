/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103430
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
    var_19 = ((/* implicit */_Bool) var_16);
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)15);
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)12328)) && (((/* implicit */_Bool) 3001078120U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11633)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) (unsigned short)53208))))))) : (((/* implicit */int) (_Bool)1))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(4294967295U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37322))) & (3120672466U)))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)0))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) max(((unsigned short)20821), ((unsigned short)0)))))) == ((+(((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12328))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) * ((~(((/* implicit */int) (unsigned char)0)))))) % ((-(((/* implicit */int) var_7))))));
    var_22 = var_6;
}
