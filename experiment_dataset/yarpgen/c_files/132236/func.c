/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132236
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [(signed char)14] = ((/* implicit */unsigned long long int) ((signed char) var_0));
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) var_12));
        arr_4 [14] = ((/* implicit */int) (-(var_15)));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_13 [0ULL] [(unsigned short)1] [0ULL] [15LL] [i_0] [15LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (var_19) : (var_14)));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (var_14) : (var_14)));
                        var_23 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) var_5)));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) ((int) var_1));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_18)))))) : (((unsigned long long int) (-(var_8))))));
    var_26 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (-(var_5)))))));
}
