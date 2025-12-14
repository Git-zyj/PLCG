/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18156
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) max(((+(-4630464166591527415LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        arr_5 [i_0] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 4117755324U)), (max((((13977092103865292470ULL) / (13977092103865292475ULL))), (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_1 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned short) min((5719639195464531458ULL), (((((/* implicit */_Bool) (signed char)-124)) ? (5496664678544898810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124)))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned int i_3 = 3; i_3 < 9; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_17))) ? ((+((+(arr_1 [i_1 + 2] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 2] [i_2]))) == (((648411065112454876ULL) % (4814029678816137844ULL)))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) arr_3 [i_1 - 1]))) >= (arr_3 [i_1 - 1])));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
}
