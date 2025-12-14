/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154798
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
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(3196504118087611874ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 15250239955621939741ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (4184587824U)))) : (((1084657212950017109LL) - (var_0))))), (1084657212950017101LL)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = 110379468U;
                    arr_10 [i_0] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)30))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 2] [i_0 + 1] [i_2]))) : (-8368341624976140733LL)))) ? (((((/* implicit */unsigned long long int) min((-4951601077147337599LL), (-18LL)))) ^ (3196504118087611874ULL))) : (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1 + 1] [i_2 - 1]), (arr_4 [i_1 - 1] [i_1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((((((/* implicit */_Bool) 4184587844U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) % (var_7))), (var_5))))));
}
