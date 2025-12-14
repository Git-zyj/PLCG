/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182656
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
    var_19 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_12))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)141))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    for (short i_1 = 4; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */int) arr_5 [i_1 - 4])) >= (((/* implicit */int) arr_6 [(unsigned char)9] [(unsigned char)9]))))))) >= (((/* implicit */int) arr_7 [i_1 - 3]))));
        var_22 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_5 [i_1 + 1]))), (((((/* implicit */int) arr_5 [i_1 + 1])) * (((/* implicit */int) arr_5 [i_1 + 3]))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_1])) <= (((/* implicit */int) (unsigned char)108)))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) arr_10 [i_1 - 2]))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_1 + 3])) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))) : ((+(var_13))))))));
        }
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-3979444131102270959LL), (((/* implicit */long long int) (unsigned char)126))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
}
