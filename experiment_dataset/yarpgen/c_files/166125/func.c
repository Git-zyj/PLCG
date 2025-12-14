/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166125
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
    var_19 &= ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) -1697305552)) && (((/* implicit */_Bool) 1367565273081728529ULL)))) && (((/* implicit */_Bool) var_4))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-94)), (var_2)))) ? (min((min((var_14), (((/* implicit */long long int) 67108800U)))), (((/* implicit */long long int) 15836978)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1697305570)) || (((/* implicit */_Bool) var_6))))), (var_7))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (var_2)))))), (min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)1920)), (3932160)))), (((((/* implicit */_Bool) (unsigned char)128)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [4LL]))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((/* implicit */int) var_3)), (-1697305571))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3754868720U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (3287963669305450413LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))) : (max((((/* implicit */unsigned long long int) arr_5 [i_0])), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (3664874309343494271ULL)))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_3])))))) * (arr_0 [i_3]))))));
                        arr_10 [i_0] [(unsigned short)8] [i_2] [i_1] = ((((int) arr_6 [i_0] [i_1] [i_1 - 1])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 + 1])) || (((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)4] [i_1 - 1]))))));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */unsigned char) arr_5 [15U]);
    }
}
