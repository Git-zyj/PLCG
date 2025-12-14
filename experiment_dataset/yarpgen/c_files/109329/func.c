/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109329
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        var_11 = ((/* implicit */unsigned int) 3088940178670065777ULL);
    }
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_12 = ((/* implicit */short) ((unsigned char) arr_3 [i_1] [i_1]));
        var_13 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))));
        var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 3088940178670065777ULL)) ? (3088940178670065777ULL) : (((/* implicit */unsigned long long int) var_10))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)127));
        var_16 = ((/* implicit */short) (-(-144453954)));
    }
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) 7935933254476717131ULL);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4 - 1]))))) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (-2147483647 - 1)))))));
                }
            } 
        } 
    } 
}
