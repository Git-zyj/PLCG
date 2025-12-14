/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129005
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
    var_16 = ((/* implicit */signed char) (-((+(((/* implicit */int) var_12))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned int) (+(var_0)));
        var_18 = (!(((((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((signed char) var_15));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1834907874U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (((unsigned int) var_2))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (arr_8 [2LL] [2LL])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_2])))), ((~(((/* implicit */int) var_15))))));
        arr_10 [i_2] = (-(((/* implicit */int) var_15)));
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (var_14))))))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_22 = ((/* implicit */short) arr_12 [i_3]);
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (min((((/* implicit */unsigned int) (signed char)-84)), (3568389723U)))))));
    }
    var_23 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) : (var_7))))), (max((min((var_3), (((/* implicit */unsigned int) var_9)))), (((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7)))))));
}
