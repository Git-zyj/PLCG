/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172251
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
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(-8249568391784833537LL)));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1 + 4] [i_2] [i_3] [i_3 + 1] [i_3] = ((/* implicit */long long int) ((int) (+(((/* implicit */int) var_3)))));
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (13328352257938746630ULL) : (((/* implicit */unsigned long long int) (~(var_7))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = 13328352257938746643ULL;
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */short) (signed char)118);
    }
}
