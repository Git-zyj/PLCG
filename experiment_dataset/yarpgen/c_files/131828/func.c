/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131828
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0 + 2] [(short)10])));
        arr_2 [i_0 - 1] = var_13;
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) arr_4 [i_1]);
        var_17 += ((/* implicit */_Bool) arr_5 [(signed char)14]);
        arr_6 [(_Bool)1] &= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (2147483648U)))), (((var_10) >> (((/* implicit */int) arr_3 [12U] [i_1])))))), (((/* implicit */unsigned long long int) var_9))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_9 [10U] [10U] &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_14)) && (var_11)))));
            var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 17693112816349321186ULL))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1] [i_1 + 3] [i_1])) % ((+(((/* implicit */int) var_7))))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 |= ((/* implicit */unsigned int) var_14);
                        arr_17 [i_1] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */short) arr_8 [i_1] [i_4] [i_4]);
                    }
                } 
            } 
            var_21 &= ((/* implicit */signed char) max((((((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [5] [i_1 + 1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_4 [6]), (((/* implicit */signed char) var_6))))))))));
            arr_18 [22U] [i_1] [22U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned int) (-(((int) 6476072230566245846LL))))) : (var_1)));
            var_22 = ((/* implicit */_Bool) var_1);
        }
    }
    var_23 += ((/* implicit */unsigned short) (_Bool)0);
}
