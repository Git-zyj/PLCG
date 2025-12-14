/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155437
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (var_15) : ((~(((int) var_1)))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_18))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_16))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_7)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_22 = arr_9 [i_0] [(unsigned char)8] [i_2] [(signed char)5];
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned char) arr_5 [i_0] [i_1])))))) : (var_5))))));
                    }
                    var_24 = arr_3 [i_0] [i_1] [i_2];
                }
            } 
        } 
    } 
}
