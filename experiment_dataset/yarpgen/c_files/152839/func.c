/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152839
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) (((((~(var_11))) + (9223372036854775807LL))) >> (min((((((/* implicit */long long int) ((/* implicit */int) (short)1))) - (var_2))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13)))))))));
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1 + 2])) < (var_1))))) : (arr_4 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_19 = var_10;
                        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_0] [(short)3] [i_3])) : (((/* implicit */int) var_3)))) & (((((/* implicit */int) arr_10 [11U] [i_0] [i_0])) >> (((var_4) + (1822357932975583371LL))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            arr_16 [(unsigned char)8] [i_2] [i_2 + 3] [i_3] [i_4] = ((/* implicit */unsigned int) (((~(var_2))) | (min((arr_7 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_2 - 1]))))));
                            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_1 + 1] [i_2 + 2] [i_3])), (max((var_2), (((/* implicit */long long int) var_0))))))) & (arr_3 [i_0] [9ULL] [i_2])));
                        }
                    }
                } 
            } 
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) | ((~(-6507096524485866783LL)))));
        var_21 = ((/* implicit */long long int) arr_13 [2U] [i_0]);
        var_22 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((6507096524485866767LL) % (var_9)))) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))));
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))))))) ? (var_11) : (var_7)));
    var_24 *= ((/* implicit */unsigned int) 6507096524485866782LL);
    var_25 = ((/* implicit */short) var_13);
}
