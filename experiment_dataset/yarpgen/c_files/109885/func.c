/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109885
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-66)))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_2 [7U]))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 + 1]);
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_1]))) & (((((unsigned long long int) arr_4 [i_0] [i_1])) | (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                var_23 = ((/* implicit */unsigned char) min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) + (arr_5 [i_0]))))), (((/* implicit */unsigned long long int) ((-4590857109615042458LL) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 3]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_3))))))));
    var_25 = ((/* implicit */int) var_12);
}
