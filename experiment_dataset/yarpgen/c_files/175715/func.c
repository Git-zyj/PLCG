/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175715
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_2 [i_0])) != (((((/* implicit */_Bool) -12)) ? (((/* implicit */long long int) -502838337)) : (var_5)))));
        var_13 = ((/* implicit */signed char) (((~(((/* implicit */int) var_10)))) > (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)144)), (7861684341465664261LL))))));
    var_15 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (-7861684341465664261LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))));
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 9; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_15 [i_1] [i_2] [i_3] [i_2 - 1] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) var_0))), ((+(((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) var_8))))))));
                    var_17 = ((/* implicit */unsigned char) min((((var_9) - (var_5))), (((/* implicit */long long int) var_12))));
                    arr_16 [1LL] [i_2 + 1] [i_1] = ((/* implicit */unsigned short) (+(((unsigned long long int) 2907603619U))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11084669158629150943ULL)) ? (17465676668682337447ULL) : (((/* implicit */unsigned long long int) -1288704380162715296LL))))) ? ((~(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1])) == (((/* implicit */int) arr_8 [i_1] [i_1])))))));
    }
}
