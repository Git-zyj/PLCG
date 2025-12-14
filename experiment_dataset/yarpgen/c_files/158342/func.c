/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158342
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)64588)) : (((/* implicit */int) (_Bool)1)))))) ? (((unsigned long long int) 5036342552746249991ULL)) : (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */long long int) arr_4 [i_0] [(signed char)20] [i_2])) : (-8192LL))), (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_1 - 1])))))));
                    arr_9 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) arr_7 [i_1]);
                }
                for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    var_16 = ((/* implicit */short) 72057594033733632ULL);
                    arr_12 [i_1] = arr_11 [i_1] [i_1];
                    var_17 = ((/* implicit */signed char) max((var_17), (max((arr_3 [i_3] [i_1]), (max((((/* implicit */signed char) (_Bool)1)), (((signed char) 64512U))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (max((3433942664U), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)127))))), ((unsigned short)6848)))))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 2147483647))));
    var_20 = ((/* implicit */unsigned int) var_2);
}
