/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160436
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
    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) (~((-(((/* implicit */int) var_15)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(1930625809161025731ULL))))));
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(arr_5 [i_0] [i_2] [i_0 - 4] [i_2])))), (min((-352886274706107482LL), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0 + 2] [i_1]))))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) 3317980838083561736LL);
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) -1573542957844882679LL))) >= (((/* implicit */int) ((signed char) 7996250569096974112LL)))));
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_3]))))) - (8941387217889685714LL)));
        var_21 = ((/* implicit */unsigned short) var_11);
    }
}
