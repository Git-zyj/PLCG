/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17240
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_14);
                var_18 += ((/* implicit */unsigned short) (~(((/* implicit */int) max((var_15), (((/* implicit */short) var_13)))))));
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) ((var_6) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))));
    /* LoopSeq 2 */
    for (int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        var_20 = ((/* implicit */short) min((var_20), (min((((/* implicit */short) (unsigned char)192)), ((short)11682)))));
        arr_10 [i_2] [15ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) 555661200450849523LL)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80)))));
        arr_11 [i_2] = ((/* implicit */unsigned short) var_4);
    }
    for (short i_3 = 4; i_3 < 24; i_3 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (var_11)));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(signed char)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_5)) : (max((((/* implicit */int) (_Bool)1)), (var_4)))))) : (arr_12 [i_3] [i_3])));
    }
    var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (short)-32765)))) : (((/* implicit */int) max((var_12), (((/* implicit */short) var_5)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
}
