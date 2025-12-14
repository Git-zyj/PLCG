/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181922
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_7))));
                var_21 = max((((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) (signed char)-90)) > (((/* implicit */int) (unsigned short)17217)))));
                var_22 += ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) (unsigned short)17217)) ? (((/* implicit */int) (unsigned short)17217)) : (((/* implicit */int) (unsigned char)154)))), ((~(((/* implicit */int) arr_3 [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        var_23 = arr_5 [i_2] [(_Bool)1];
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~((-(((unsigned long long int) arr_5 [i_2 + 1] [i_2])))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3]))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_3] [i_3]))))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_3] [i_3])), ((unsigned short)41693))))))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (short)0))));
    }
    var_27 = ((/* implicit */_Bool) var_11);
    var_28 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) ((_Bool) var_12))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_19))))))) ^ (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (var_14))))));
    var_29 = ((/* implicit */unsigned int) min((min((var_8), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)23842))))))), (((/* implicit */long long int) ((((_Bool) var_5)) && (((/* implicit */_Bool) var_14)))))));
}
