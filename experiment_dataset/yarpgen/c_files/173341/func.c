/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173341
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)13782)), (14216778999894427819ULL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_3))));
                        arr_11 [i_0] [i_1 + 1] [i_2] [i_2] = ((/* implicit */signed char) var_12);
                        arr_12 [i_3] [i_1] [i_0] [i_3] [(signed char)3] [i_0] = ((/* implicit */signed char) var_15);
                    }
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8633)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51726))))))))));
                    arr_13 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5274920616110352986ULL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 419263488)))) : (var_12))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (short)30301)), ((unsigned short)51750)))) - (51695)))));
}
