/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159697
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3486))) : (9401352265566659468ULL)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_3)) % (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)3486))))))) : (((((((/* implicit */int) var_11)) != (((/* implicit */int) (_Bool)1)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [20U] [i_0] [20] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 3]))) | (arr_4 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((2048) + (((/* implicit */int) arr_3 [4LL])))))))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */int) (signed char)31)) - (((/* implicit */int) var_10)))))))));
                    arr_10 [i_0] [0LL] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (((((/* implicit */_Bool) 3257314808U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (arr_4 [8ULL] [i_1]) : (((/* implicit */unsigned long long int) 1863004460U)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_9);
}
