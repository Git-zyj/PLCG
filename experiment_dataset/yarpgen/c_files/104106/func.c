/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104106
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
    var_20 = ((long long int) (unsigned short)43575);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [0U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) (unsigned short)43574)) >> (((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) var_2))))) <= (max((((((/* implicit */_Bool) (unsigned short)43571)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3189319512U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))), ((+(((/* implicit */int) (signed char)-94))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (1648459989U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_22 &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)256))))));
                        arr_12 [i_0] = var_18;
                        arr_13 [(signed char)9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_4 = 3; i_4 < 11; i_4 += 3) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)85)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
            arr_18 [i_0] [i_0] = (((!(((/* implicit */_Bool) 4294967295U)))) ? (3189319512U) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) * (var_4))));
        }
    }
}
