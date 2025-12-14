/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166876
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((unsigned short)37670), (((/* implicit */unsigned short) arr_3 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [18U])) >= (arr_4 [i_1])))) : (((((/* implicit */int) arr_5 [i_1])) | (arr_0 [i_1]))))) >= (var_1)));
                arr_8 [i_0] [2U] [i_1] = ((/* implicit */unsigned long long int) max(((~(min((((/* implicit */unsigned int) 1116866917)), (1715571998U))))), (((/* implicit */unsigned int) (_Bool)0))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_2);
}
