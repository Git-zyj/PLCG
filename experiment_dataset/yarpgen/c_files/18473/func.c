/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18473
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
    var_20 &= var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) 4294967295U);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)121)) + (((/* implicit */int) (signed char)72)))) != ((~(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_2]))))))));
                    var_23 = ((/* implicit */int) (short)6);
                    arr_6 [i_0] [i_1] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)100))))) ? (((/* implicit */int) ((unsigned char) var_17))) : (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) (signed char)121))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)121)), ((unsigned char)2)))) : (((/* implicit */int) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 - 2] [i_1] [i_2 - 1] [i_1] [i_4] = ((/* implicit */short) arr_4 [i_3] [i_2 - 1] [i_0 - 1] [i_0 - 1]);
                                var_24 = ((/* implicit */short) -813725309);
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)51)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_1] [i_0] [i_0 - 2] [i_0] [i_1] [i_1] [2U])), (830183891U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 813725315)) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [1] [i_1])) : (arr_9 [(signed char)13]))))) : (((/* implicit */unsigned long long int) var_19))));
                arr_13 [(unsigned short)6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) | (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [13U])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (arr_7 [(short)7] [i_0 + 3] [i_1] [(unsigned char)0] [i_1] [i_1])))))));
                var_26 = (signed char)-118;
            }
        } 
    } 
}
