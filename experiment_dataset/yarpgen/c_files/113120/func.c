/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113120
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((9223372036854775805LL) / (((/* implicit */long long int) 2236648433U))))) ? (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */_Bool) (short)11962)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (-8103328168922940791LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)11982)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) 2236648429U))))))));
    var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34011)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && ((_Bool)1)))) >> (((((((/* implicit */_Bool) 5614254377712387679ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) - (66)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -7296308400882900348LL)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) (signed char)-21)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29775)))))))) | ((~((+(13013030561373887893ULL))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_0))))), (arr_2 [2LL] [i_1] [14LL])))) ? (((unsigned int) ((short) 1638080383145939887ULL))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))));
                arr_4 [(unsigned short)3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [(signed char)16])) : (((/* implicit */int) (unsigned short)10402))))) ? (((/* implicit */unsigned long long int) 4517836767649254123LL)) : (var_12)));
                arr_5 [i_0] [5U] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((signed char) 16808663690563611728ULL))) < (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_3 [i_0] [i_1])))))))) < (((((/* implicit */int) (signed char)-124)) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)11982)) : (((/* implicit */int) (unsigned short)22435))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (-(25ULL)));
            }
        } 
    } 
}
