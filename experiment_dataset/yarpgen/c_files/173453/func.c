/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173453
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15487945182295374337ULL))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) (+(((long long int) arr_1 [i_0] [i_2 - 1]))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((arr_2 [i_0] [i_3]), (((unsigned int) arr_3 [0LL] [i_1])))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((((long long int) ((long long int) (short)-3364))), (((/* implicit */long long int) var_0))));
                        arr_11 [i_0] [i_4] [i_2] [i_0] [i_4] = ((/* implicit */long long int) min((arr_2 [i_4] [i_1]), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (3475757734310563424LL)))))))));
                        arr_12 [i_0] [i_0] [0LL] [i_2 - 2] [i_4] &= ((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 1]);
                    }
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (unsigned short)50065)) ? (((((_Bool) (_Bool)0)) ? ((~(-3475757734310563423LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))) : (7466634879914033146LL));
    var_22 &= ((/* implicit */unsigned int) var_9);
}
