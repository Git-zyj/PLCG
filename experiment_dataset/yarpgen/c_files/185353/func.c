/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185353
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
    var_10 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)40)))), (((/* implicit */int) ((_Bool) var_4)))))) ? ((~(max((17665317385091770918ULL), (((/* implicit */unsigned long long int) (unsigned short)6979)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_0 [i_0])))))));
                            arr_11 [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)3))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) ((unsigned short) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)71))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    var_14 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_4] [i_1 + 1])), (arr_7 [i_4] [(unsigned short)0] [(signed char)8])))) ? (max((arr_13 [i_0] [i_1 + 1] [i_4]), (((/* implicit */int) arr_1 [i_4] [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_2))))))));
                    var_15 = ((/* implicit */long long int) (signed char)104);
                }
                var_16 |= ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1 + 1] [i_1] [i_0] [i_1 + 1]);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (signed char)81))))), (((unsigned short) var_3)))), (((/* implicit */unsigned short) var_0))));
}
