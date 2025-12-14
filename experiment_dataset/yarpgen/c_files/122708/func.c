/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122708
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_10 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) var_5)) : (2035050377U)));
        var_11 |= ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_12 = ((/* implicit */unsigned int) max((var_12), (var_6)));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_8 [(unsigned short)6] = ((/* implicit */unsigned int) ((unsigned char) ((arr_6 [i_1] [i_1]) << (((((unsigned long long int) 2099809267U)) - (2099809251ULL))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(signed char)6] [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) : ((+((+(2195158029U)))))));
        var_14 -= ((/* implicit */unsigned int) arr_4 [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) -190925072);
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (~(var_0)))))));
        arr_14 [i_2] = ((/* implicit */unsigned short) (((-(((unsigned int) arr_7 [i_2] [i_2])))) | (((/* implicit */unsigned int) max((max((arr_5 [(_Bool)1]), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_2])))))));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 2099809266U))));
}
