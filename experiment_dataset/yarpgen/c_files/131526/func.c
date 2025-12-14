/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131526
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((65534U) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) 4294901790U);
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) ((short) -4984191204890665547LL));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((long long int) (signed char)0)))))));
            var_14 = ((/* implicit */unsigned short) (((~(arr_3 [i_0] [i_0] [i_0]))) >> ((((~(65534U))) - (4294901741U)))));
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_9 [(unsigned short)3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2])), (var_4)))) ? (((long long int) -4045080541405581672LL)) : (((((/* implicit */_Bool) 4294901761U)) ? (((/* implicit */long long int) 18U)) : (-7642701067808425594LL)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : ((-(((/* implicit */int) arr_8 [9] [i_0] [i_2]))))));
            var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) * (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_2])) : (arr_3 [i_0] [i_0] [i_2]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (var_4)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (var_0) : (arr_0 [i_0] [i_2]))) : (min((var_1), (arr_0 [i_2] [i_0]))))) - (5462237456674286193LL)))));
        }
    }
}
