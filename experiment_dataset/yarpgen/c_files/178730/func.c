/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178730
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((3138405744U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2))))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) arr_5 [i_2 + 1] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (var_3)))));
                    var_11 = (+(((/* implicit */int) (unsigned char)44)));
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((803055771) - (803055766)))))) && (((/* implicit */_Bool) ((arr_4 [i_0] [i_2]) / (var_6))))))))));
                    arr_8 [i_2] [(unsigned char)0] [i_2] = arr_5 [(signed char)3] [i_2] [14U] [20U];
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((((/* implicit */unsigned int) (signed char)90)), (1365193782U))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((3898168945355882980ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))))), (3898168945355882983ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : (16159954851203087201ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_9 [i_3 + 1]);
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 2])) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) arr_9 [i_3 + 1]))));
    }
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) & (var_4))))));
}
