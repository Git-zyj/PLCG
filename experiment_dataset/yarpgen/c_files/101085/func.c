/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101085
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) || (((/* implicit */_Bool) var_0)))))));
        var_20 = min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) - (arr_1 [i_0 + 1]))), (max((arr_1 [i_0 - 2]), (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((arr_0 [i_1] [i_1]) % (arr_0 [i_1] [i_1])));
    }
    var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (unsigned short)5082)))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned char) (unsigned char)34)), (((/* implicit */unsigned char) arr_18 [i_5] [i_5 + 1] [i_5 - 2] [i_5] [i_2] [i_5 - 1] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), (var_0)))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_2] [i_5])))) : ((~(((/* implicit */int) arr_12 [i_3] [i_3]))))))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? ((-(var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1536546964)) ? (515343743U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))))))))));
                                var_25 = var_8;
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) (unsigned char)15))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)177), (((/* implicit */unsigned char) var_16))))))));
                    var_27 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
}
