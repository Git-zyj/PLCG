/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153810
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 3778960822U)))) ? (((((/* implicit */int) (unsigned char)141)) + (((/* implicit */int) (unsigned char)141)))) : (((/* implicit */int) (unsigned short)9785))));
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0])))))));
        }
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max(((+(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (-1LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) -4035712135216714623LL))) - ((-(((/* implicit */int) (unsigned char)105))))))))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_3 [i_0]))) % ((-(((/* implicit */int) arr_3 [i_0]))))));
        var_20 += ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))))))));
    }
    var_22 = ((/* implicit */_Bool) var_4);
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_8))));
}
