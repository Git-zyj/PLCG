/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184136
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] [11LL] = ((/* implicit */short) 11513191722939069205ULL);
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (+(5433894413008548634ULL))))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (((max((-489503321), (-794129794))) % ((-(1937230789))))))))));
                    var_15 ^= ((/* implicit */unsigned int) 489503323);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6933552350770482411ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))) ? ((-(-794129793))) : ((+(((/* implicit */int) var_6))))))))))));
}
