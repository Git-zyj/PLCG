/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170789
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
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)16] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned short) ((unsigned char) arr_1 [i_1]))), (var_2))));
                var_10 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) 1583936162)) >= (-510959075554630171LL))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1]))) : (((/* implicit */int) var_3))));
                arr_6 [(unsigned short)13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) -21)) : (var_6))))))));
                arr_7 [3] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 510959075554630166LL)), (((12600427914768960732ULL) % (((/* implicit */unsigned long long int) -1397591549292787174LL)))))))));
            }
        } 
    } 
    var_11 += ((/* implicit */int) ((signed char) var_9));
}
