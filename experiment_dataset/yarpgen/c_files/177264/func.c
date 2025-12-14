/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177264
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
    var_18 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5)))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_1 [i_4]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)15))))) != (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_8 [(unsigned short)3] [i_0 + 2] [i_0] [i_0 - 1] [13ULL] [i_2] [i_0 + 2])) ? (arr_5 [i_0 - 2] [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_2] [i_2] [i_2]), (arr_2 [i_0 + 1] [(signed char)13])))))))));
                }
                var_22 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0 - 1] [i_0]);
                var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)28462)) == ((+(((/* implicit */int) (signed char)5)))))) || (((/* implicit */_Bool) 3938486409874011149LL))));
            }
        } 
    } 
}
