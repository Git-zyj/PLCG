/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11348
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (((!(var_4))) && (((/* implicit */_Bool) var_13))))) - (((/* implicit */int) ((_Bool) var_0)))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12731))))) ? (((((unsigned int) var_8)) << (((((long long int) var_7)) - (6867099960126999554LL))))) : (((var_8) << (((((/* implicit */int) var_12)) - (7795)))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (((((long long int) 3974338113289447385LL)) << ((((-(var_6))) - (3878447457808712657ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & ((+(var_3)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((unsigned long long int) arr_7 [i_2] [i_2])) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23570)))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned char)2)))));
                }
            } 
        } 
        arr_10 [i_0] = var_9;
    }
}
