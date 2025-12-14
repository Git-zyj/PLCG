/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122139
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (((+(3726018244U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)14]))))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 3] [i_0 + 1])) | (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8685038157279154091ULL)));
                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)0)), (6036229378996203444ULL)));
                var_16 = ((/* implicit */unsigned int) var_3);
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (max((((unsigned int) var_5)), (3268453909U)))));
            }
        } 
    } 
    var_17 = (!(((/* implicit */_Bool) (short)14802)));
}
