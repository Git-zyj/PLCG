/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13123
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
    var_10 = ((/* implicit */unsigned int) ((_Bool) var_6));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */short) -1509195097);
                    var_11 = ((/* implicit */long long int) (~(((arr_0 [i_1]) ? (arr_2 [4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))));
                    var_12 &= ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_0 [i_2]))))) / (((/* implicit */int) arr_4 [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7535632748893483548LL)) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) -7535632748893483544LL))))) ? (((/* implicit */unsigned long long int) arr_3 [i_2] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_8 [i_3])))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (-7535632748893483544LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((arr_9 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_3])))))))));
        arr_11 [i_3] = ((/* implicit */signed char) arr_8 [i_3]);
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        arr_14 [13LL] [13LL] = var_9;
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) + (var_0))))))));
        var_16 = ((/* implicit */unsigned int) max((min((arr_9 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_12 [i_4])))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) arr_13 [i_4])) - (2814228436U))), (((/* implicit */unsigned int) arr_10 [i_4] [i_4])))))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) arr_10 [i_5] [i_5]);
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 2814228428U))));
    }
    var_19 = var_3;
    var_20 = ((/* implicit */unsigned short) var_5);
}
