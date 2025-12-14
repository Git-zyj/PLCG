/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123435
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
    var_12 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((((/* implicit */int) var_6)) << (((786432) - (786415))));
        var_14 += ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [7U] [(signed char)10])) * (((/* implicit */int) arr_2 [i_0] [i_0]))))) * (((var_11) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((arr_12 [i_0] [i_1 - 1] [i_2] [i_2] [i_4 + 2] [i_0]) > (arr_12 [i_4 + 1] [i_3] [i_1 - 1] [i_2] [i_1 - 1] [i_0]));
                                var_16 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)179)) > (((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_2) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2814219143U)) % (var_3))))))), (min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}
