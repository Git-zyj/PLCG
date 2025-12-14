/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185762
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
    var_15 = ((/* implicit */long long int) var_14);
    var_16 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 |= ((/* implicit */_Bool) (+((+(((long long int) arr_8 [i_0] [i_0] [i_0]))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_1]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        var_18 = max(((+(((unsigned long long int) var_1)))), (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_2] [i_0])), (arr_8 [i_0] [i_1] [i_0])))) : ((+(arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                        var_19 += ((/* implicit */_Bool) max((max((arr_9 [(_Bool)1] [i_1] [17ULL]), (((/* implicit */unsigned long long int) arr_4 [i_1])))), (((unsigned long long int) arr_9 [i_0] [i_2 + 3] [i_4]))));
                        var_20 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                        var_21 |= ((/* implicit */unsigned char) ((long long int) max(((unsigned char)123), (((/* implicit */unsigned char) arr_0 [i_0])))));
                    }
                    var_22 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_0]))))), ((+(arr_9 [i_0] [i_1] [i_2 + 3]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned long long int) var_7))));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4051159907195946347ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (13129380768156358374ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((_Bool) var_0))), ((unsigned char)203)))))))));
}
