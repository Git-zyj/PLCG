/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111105
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
    var_16 += ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [21] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(0)))) ? (((unsigned long long int) arr_3 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0])))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)53650)))) - (min((3780723149330545084ULL), (((/* implicit */unsigned long long int) arr_1 [(signed char)4] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1005561191U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440))) : (3451557413U)))) ? (((/* implicit */int) (!(arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (unsigned char)39)))))) : (((((/* implicit */_Bool) ((unsigned int) (signed char)-59))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
}
