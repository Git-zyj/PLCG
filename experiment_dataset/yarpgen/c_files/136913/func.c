/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136913
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 += ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_0)) | (((/* implicit */int) arr_2 [i_2]))))));
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */int) (short)-16143)))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_10 [i_3] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) 3712850395U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3712850395U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
        arr_11 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -587499852)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-9223372036854775796LL)));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_3]))))), (arr_9 [i_3])));
    }
    for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_13 [i_4 + 1])))), (((((/* implicit */_Bool) ((unsigned short) var_17))) ? (((/* implicit */int) arr_9 [i_4 + 1])) : (((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_4])))))))))));
        var_21 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10539)))) || (((((/* implicit */_Bool) (short)32763)) && (((/* implicit */_Bool) arr_8 [i_4 - 1])))))));
    }
    var_22 = ((/* implicit */_Bool) min((((/* implicit */int) var_17)), (((((/* implicit */int) var_12)) >> (((var_6) + (8277837543116290986LL)))))));
}
