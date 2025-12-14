/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103280
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
    var_14 = ((/* implicit */unsigned short) ((long long int) var_2));
    var_15 = ((/* implicit */unsigned long long int) var_6);
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10)))) && (((/* implicit */_Bool) var_6))))), (((32767ULL) >> (((/* implicit */int) (!(((/* implicit */_Bool) -1016868369728747665LL)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_5 [(unsigned short)2] [i_1] [i_2])), (4552767819399957233LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))))) + ((+(min((4611686018427387903ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    arr_9 [i_2] = var_11;
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) + ((+(var_10)))));
    }
}
