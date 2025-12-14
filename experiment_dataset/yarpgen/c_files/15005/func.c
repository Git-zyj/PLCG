/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15005
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
    var_10 -= ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (min((arr_1 [(unsigned short)0]), (((/* implicit */unsigned long long int) 2039126329U))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((arr_6 [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1]))) : (arr_7 [i_0]))), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0]))) ? (2143846992U) : ((-(var_3)))))));
                    arr_9 [9LL] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_8 [i_2] [i_2 + 3] [i_2 + 3] [i_2 + 1]), (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2])))), (((((/* implicit */_Bool) 2039126329U)) ? (((/* implicit */int) (unsigned short)32401)) : (((/* implicit */int) (signed char)123))))));
                }
            } 
        } 
    }
}
