/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146844
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) (short)1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned int) ((int) min((var_13), (var_2))))) * (((((/* implicit */_Bool) 3308329000U)) ? (((/* implicit */unsigned int) var_8)) : (arr_4 [i_0] [0U]))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 3308329000U)))))) ? (((((262112U) % (3308329000U))) * (((/* implicit */unsigned int) (~(-1420643593)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19017)))));
                    arr_9 [(short)2] [4U] [(short)2] [i_2] = (~(((((arr_4 [i_1] [i_1]) < (986638306U))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)127)))))));
                    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 3308329000U)) : (arr_0 [i_1])))))));
                    var_24 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) 1543399629U)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_10 [(unsigned char)8] [i_3])) ? (((/* implicit */unsigned int) var_10)) : (var_16)))))));
        var_25 -= ((/* implicit */int) (-(min((arr_11 [i_3 - 1]), (((/* implicit */unsigned int) var_3))))));
        arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) < ((+(658093640U)))));
        var_26 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) (~(arr_12 [6U] [i_3 + 1])))))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_11);
}
