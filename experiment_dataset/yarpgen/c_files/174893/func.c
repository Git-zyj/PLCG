/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174893
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
    var_17 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (((((_Bool)1) ? (13564069914229925857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) << (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 1199049532U))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3053279485545805342ULL)) ? (15985553380057525823ULL) : (((/* implicit */unsigned long long int) 3106018028U))))) ? (((/* implicit */long long int) 1194398606)) : (var_9))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17))))))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) (~(9970282594956667301ULL)));
        var_22 = ((/* implicit */short) ((long long int) var_2));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) arr_0 [11ULL]);
            var_24 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (var_3)))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_3] [i_1]);
                            var_26 &= ((/* implicit */unsigned long long int) (-(arr_17 [i_3])));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((signed char) arr_5 [i_2])))));
                        }
                    } 
                } 
            } 
        }
    }
}
