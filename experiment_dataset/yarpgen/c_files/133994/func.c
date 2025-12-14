/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133994
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9)))) ? (max((((/* implicit */long long int) var_5)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9132))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (-887420989)))) ? ((+(16648181181183332235ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-1)), (1440270452U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((2547893648U) == (arr_6 [i_0] [i_0] [i_2] [i_2]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((var_8), (((/* implicit */signed char) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_5 [i_2])) : (arr_2 [i_1]))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [8U])) : (((/* implicit */int) var_0)))) | (((/* implicit */int) var_8)))))));
                    arr_8 [i_1] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_12)) != (arr_1 [i_0]))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)139)))))));
                    arr_9 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [(_Bool)1])) ^ (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)10] [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : ((~(arr_1 [i_1])))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(1440270453U)));
                }
            } 
        } 
    } 
}
