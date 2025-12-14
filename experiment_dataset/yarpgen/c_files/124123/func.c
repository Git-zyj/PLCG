/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124123
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_19 = ((/* implicit */int) (~((+(min((var_1), (((/* implicit */unsigned int) 2147483647))))))));
        var_20 &= (((~(arr_0 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (0U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 |= ((/* implicit */_Bool) (+((~(arr_0 [i_1])))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967274U)))) ? (((/* implicit */unsigned long long int) min((max((var_1), (4294967289U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))))) : ((+(min((var_13), (((/* implicit */unsigned long long int) (signed char)77))))))));
        var_24 = ((/* implicit */signed char) arr_0 [i_1]);
        var_25 = ((/* implicit */unsigned short) (signed char)-78);
    }
    for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) var_16))), (1U))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_10 [14ULL] [14ULL] [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_0 [1U])))), (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))))))))));
            arr_11 [i_2 + 1] = ((/* implicit */long long int) arr_7 [i_2 + 1]);
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        var_28 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) != (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))), (((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_2] [i_3] [i_4] [i_5]))) && ((!(((/* implicit */_Bool) 5U))))))));
                    }
                } 
            } 
        }
    }
    var_29 -= ((/* implicit */long long int) var_12);
    var_30 = ((/* implicit */unsigned char) max(((~(((unsigned int) var_16)))), ((~(max((((/* implicit */unsigned int) var_15)), (4294967295U)))))));
}
