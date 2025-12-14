/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101071
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
        var_13 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((unsigned int) var_8))), (21ULL))) ^ (((/* implicit */unsigned long long int) 673427798))));
        arr_2 [i_0] = ((/* implicit */short) min((870155174616945395LL), (((/* implicit */long long int) (unsigned short)0))));
        var_14 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_15 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 10; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) ((arr_6 [i_1]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) <= (18446744073709551590ULL)))) : (((/* implicit */int) (unsigned short)65535)))))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -7488915234668670662LL))));
                var_17 = max((3648447589264303258LL), (((/* implicit */long long int) (signed char)125)));
            }
        } 
    } 
    var_18 = var_9;
}
