/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176265
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
        arr_2 [i_0] = ((/* implicit */short) var_5);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))) ? (((/* implicit */int) ((unsigned char) ((3914495012U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (var_8)));
        var_14 = ((/* implicit */int) 3914495012U);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_15 = (-((+(var_9))));
        var_16 = ((/* implicit */int) max((((((((/* implicit */_Bool) 3914495012U)) ? (var_11) : (var_4))) / (((/* implicit */unsigned long long int) max((380472280U), (((/* implicit */unsigned int) arr_3 [i_1]))))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0)))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) 3687799026U);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_17 = ((((((/* implicit */_Bool) 607168269U)) ? (arr_4 [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 2] [i_2 + 1]))));
                    var_18 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (max((((/* implicit */unsigned int) (unsigned short)21859)), (3687799026U))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43676)) >> (((-583022846) + (583022870)))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_1])), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)21858), (((/* implicit */unsigned short) arr_3 [i_1])))))) : (var_10)));
                    var_21 ^= ((/* implicit */long long int) ((unsigned int) arr_11 [i_1] [i_1]));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(380472283U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (arr_11 [i_1] [i_1])))) : (arr_8 [(unsigned short)10] [i_1] [8ULL])))));
    }
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3914495006U)))))) != (var_7)))), (var_5)));
}
