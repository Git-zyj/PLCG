/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160128
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
    var_17 *= ((/* implicit */signed char) var_3);
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2])) ^ (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2]))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9017)) ? (((/* implicit */int) (unsigned short)43769)) : (((/* implicit */int) (unsigned short)56519))));
                    var_20 ^= ((min((9632565225120716092ULL), (((/* implicit */unsigned long long int) 2909264362U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                    arr_10 [i_1] [i_0] = (+(min((arr_1 [i_0]), (arr_0 [i_2] [i_2]))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) 149827930U)))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_8);
}
