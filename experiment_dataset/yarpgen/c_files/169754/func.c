/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169754
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
    var_17 = var_14;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])), ((-(-1014685958)))));
                arr_7 [6] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(-1014685959)))) ? (((((/* implicit */_Bool) min((5949309329572099839ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((unsigned int) 9015288554830128699ULL)) : (((/* implicit */unsigned int) ((int) 5906829290684843402ULL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12539914783024708214ULL)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (unsigned char)0))));
                    arr_12 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)48759));
                }
                arr_13 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (9015288554830128699ULL) : (((/* implicit */unsigned long long int) 3046274061U))))) && (((/* implicit */_Bool) ((unsigned char) arr_8 [i_1] [i_1] [i_1])))))) / (((/* implicit */int) max((arr_5 [i_1] [i_0]), (arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
}
