/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168182
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (unsigned char)228))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max(((_Bool)1), ((_Bool)1))), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)14))))))) << ((((((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (arr_4 [i_0] [i_0]) : (((3928620075U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (3928620051U)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
                {
                    var_20 ^= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_2 [i_2 + 3]))) > (((((/* implicit */int) (unsigned short)46732)) % (((/* implicit */int) (_Bool)1))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (3928620078U)));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) (_Bool)1)))))));
                    var_22 = (short)10;
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_3 + 2] [(unsigned short)10]))) == (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37543))) + (arr_6 [(_Bool)1]))))))));
                    arr_14 [i_0] [i_1] [(unsigned short)8] [i_3 - 1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_3 + 2] [i_0]);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) 4294967295U);
}
