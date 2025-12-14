/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174628
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
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)1))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned int) 0LL))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)254))))));
        var_14 = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_8)))), (min((((/* implicit */long long int) 1051446637U)), (arr_0 [i_0]))))), ((~(((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        var_15 -= ((/* implicit */long long int) 1274298263U);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_1 [i_0 + 1])) + (((/* implicit */int) arr_1 [i_0 + 2])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) var_10);
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_0 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_7 [i_2])), (((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))))), (((/* implicit */long long int) ((short) 7180708729819451298LL)))));
        var_19 = ((/* implicit */unsigned long long int) min((((-7180708729819451298LL) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) + (var_0))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15818))))) ? (((/* implicit */int) ((short) 0ULL))) : (((/* implicit */int) ((unsigned short) (unsigned char)195)))));
        var_21 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_1 [i_2])))) + (((((/* implicit */int) ((unsigned short) var_5))) - (((/* implicit */int) ((short) arr_1 [i_2])))))));
    }
    var_22 = min((((unsigned int) ((((/* implicit */_Bool) 3937727985U)) && (((/* implicit */_Bool) 1314607426U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (((_Bool)0) ? (var_2) : (var_2))))))));
    var_23 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) var_4)))));
}
