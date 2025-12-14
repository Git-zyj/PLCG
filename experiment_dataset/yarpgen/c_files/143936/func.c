/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143936
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    var_16 = ((/* implicit */long long int) var_6);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned int) -4756105522616730978LL))))) ? (((/* implicit */unsigned int) 680607984)) : (var_14)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((unsigned char) ((((((/* implicit */_Bool) 680607984)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)61657))));
        var_19 = ((((/* implicit */_Bool) min((-680607968), (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) max((1787995925U), (((/* implicit */unsigned int) 680607969))))) : (((max((var_10), (((/* implicit */unsigned long long int) var_12)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_7 [i_0 - 1])))) : ((-2147483647 - 1))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) << (((((/* implicit */int) var_1)) - (124)))))) ? (((unsigned long long int) -2147483643)) : (arr_6 [i_0 + 1] [i_1]))))));
            var_21 = ((/* implicit */short) (~(((unsigned int) -680607984))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((743913626U) & (var_3))) >> ((((+(((/* implicit */int) (unsigned char)100)))) - (69))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((int) arr_5 [i_0] [i_0 + 1])))));
        }
        var_24 = ((/* implicit */unsigned short) (~((((~(((/* implicit */int) var_0)))) | (max((((/* implicit */int) (unsigned char)91)), (arr_2 [i_0] [16U])))))));
    }
    var_25 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)109)), (((unsigned char) 3943293556023337345LL))))), (max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) (unsigned char)12))))));
}
