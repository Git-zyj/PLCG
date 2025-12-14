/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135075
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((arr_3 [(_Bool)1] [i_0] [i_0]) ? (((/* implicit */int) ((((/* implicit */long long int) 113081805)) > (arr_4 [i_0] [0LL] [0LL])))) : (((/* implicit */int) var_10)))) == (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_4))))));
                arr_7 [(unsigned char)10] [i_1] [(unsigned char)10] |= ((/* implicit */unsigned short) (unsigned char)12);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
    {
        arr_10 [i_2] [i_2 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (5100984386538232156ULL))) - (((/* implicit */unsigned long long int) arr_8 [i_2 + 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        var_12 = 16ULL;
    }
    var_13 ^= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 13345759687171319459ULL)) ? (5100984386538232156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((13345759687171319459ULL) - (13345759687171319438ULL)))))))) % (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_4)) - (31185))))))))));
    var_14 = ((/* implicit */unsigned char) var_7);
}
