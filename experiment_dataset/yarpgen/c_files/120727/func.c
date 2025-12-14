/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120727
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
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 -= var_4;
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) max((min(((-(((/* implicit */int) arr_5 [i_0] [i_0])))), (((((/* implicit */_Bool) 3342238820204963783ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) 15912599383539899170ULL);
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) 4294967272U));
                        var_21 = ((/* implicit */unsigned int) var_2);
                    }
                    var_22 = ((/* implicit */signed char) ((var_7) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) ((var_2) == (var_13)))))))));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) -1833629722))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 981476128376703385ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))), (((/* implicit */unsigned long long int) ((unsigned int) var_0)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (((unsigned char) var_13))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) min(((signed char)-58), (((/* implicit */signed char) var_3))))))))));
    var_25 = ((/* implicit */_Bool) ((((max((3342238820204963783ULL), (((/* implicit */unsigned long long int) var_4)))) == (((unsigned long long int) var_6)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
