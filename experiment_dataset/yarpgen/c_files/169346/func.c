/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169346
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) -6950381644212590535LL);
                    var_17 = ((/* implicit */unsigned long long int) ((int) arr_8 [i_0] [i_1] [8ULL]));
                    arr_10 [15U] [(unsigned char)11] [(signed char)7] [(signed char)7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [(_Bool)1] [(signed char)14])) > (arr_8 [i_0] [(unsigned short)0] [9LL])))), (min((0U), (4294967285U)))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) : (var_15)));
                    arr_11 [(short)8] [i_1] [(signed char)0] [6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)37)))) + (((/* implicit */int) max((((/* implicit */unsigned short) (short)-23126)), (var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 6950381644212590531LL)))) : (arr_5 [(unsigned short)7] [(short)9])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22903)))));
}
