/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130435
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (~(arr_0 [i_0]))))) ? (arr_2 [i_0]) : (min((1632836100U), (((/* implicit */unsigned int) (_Bool)0))))));
        var_20 *= ((/* implicit */_Bool) (+(-731534694)));
        var_21 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(arr_0 [1ULL])))) ? (((int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)0)))), (arr_0 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [(signed char)16] [i_1] &= var_10;
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (arr_6 [i_1])))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1023))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_17);
        arr_15 [(unsigned char)16] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2]))) : (1062093508U)));
    }
    var_22 = ((/* implicit */unsigned long long int) (-(-1192089904)));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 12; i_3 += 1) 
    {
        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_26 [i_5] [2U] [i_3 - 2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1411700478)) ? (0ULL) : (((/* implicit */unsigned long long int) var_18))));
                    arr_27 [i_3] [i_4] [i_5] = ((/* implicit */_Bool) arr_5 [i_5] [0LL]);
                }
                var_23 += ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                arr_28 [i_3] [i_3 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_22 [i_4 + 1] [i_4 - 1]))))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_25 [i_4] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [8U] [i_3 - 1]))), (((((/* implicit */_Bool) (unsigned short)24738)) ? (arr_5 [12U] [i_4]) : (199955454U)))))) ? (((/* implicit */int) arr_19 [i_4])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_11 [i_3]))))))))));
            }
        } 
    } 
}
