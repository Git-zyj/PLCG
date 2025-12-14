/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153152
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 2319966242U)) * (18437736874454810624ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1874915601)) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)48283))))))))));
        var_11 = ((unsigned long long int) 18437736874454810620ULL);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & ((-(4294967294U)))));
                    arr_12 [0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_10 [(unsigned char)6] [i_2] [i_3]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
}
