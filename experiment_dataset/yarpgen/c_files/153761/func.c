/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153761
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
    var_20 = var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_21 = arr_8 [i_0] [i_1] [8ULL];
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((unsigned int) arr_2 [i_2]))))) > (var_5)));
                }
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) var_9);
                            var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned short) -1LL))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3U)) <= (arr_10 [(short)3] [i_1] [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_3])) | (((var_16) + (((/* implicit */int) arr_13 [(signed char)10] [i_3] [(short)0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((int) (signed char)52));
}
