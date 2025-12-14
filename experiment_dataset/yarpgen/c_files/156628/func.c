/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156628
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31103)))))));
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_4)))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [1U] [1U] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_2 [(unsigned short)3])))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_1])), (arr_2 [i_0])))) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) min(((+(arr_2 [i_0]))), (((/* implicit */int) ((arr_2 [i_0]) < (((((/* implicit */_Bool) (unsigned short)850)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [17U])))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_15 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_11)) ? (var_6) : (875668836U)))))));
                    var_16 = arr_8 [i_0] [i_2];
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_2))));
    var_18 = ((/* implicit */_Bool) (-((+((+(((/* implicit */int) var_1))))))));
}
