/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180868
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */short) arr_0 [5LL]);
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
        arr_5 [0LL] &= ((/* implicit */long long int) arr_3 [(unsigned short)0] [i_0]);
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_8 [i_1] = var_9;
        var_12 = ((/* implicit */short) ((min((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1] [i_1]))))), (arr_1 [i_1]))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (7788845058241457769LL)))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                {
                    {
                        arr_16 [(short)0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (short)15);
                        arr_17 [i_1] [i_1] [i_1] [i_4 + 3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_1 [i_2 - 2]) : (arr_15 [i_4 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? ((+(max((-578871838779907973LL), (((/* implicit */long long int) var_5)))))) : ((+(7788845058241457769LL))));
                        var_13 = ((/* implicit */unsigned short) min(((~(1125899906842623LL))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))), (arr_15 [i_1] [i_1] [i_3 - 1] [(unsigned short)8])))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    }
}
