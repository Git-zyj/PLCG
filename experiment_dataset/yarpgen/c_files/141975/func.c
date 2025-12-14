/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141975
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? ((-9223372036854775807LL - 1LL)) : (((((/* implicit */_Bool) (signed char)-27)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19200)))))));
        var_20 *= ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_14 [(_Bool)1] [i_1] [i_2] [i_3 + 1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (var_6))) ^ (((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1] [i_2]) ^ (arr_4 [i_0] [i_1 + 1]))))));
                        arr_15 [i_0] = ((/* implicit */int) (~(13803805094784935188ULL)));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (11258714148330269232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (var_6))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))))))));
}
