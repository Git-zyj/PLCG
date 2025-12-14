/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174174
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
    var_16 = ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) 4938972588629268056ULL);
            arr_6 [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2]);
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 13507771485080283556ULL))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)13)))))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))));
        var_19 = var_10;
        var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) (unsigned char)243))))));
    }
}
