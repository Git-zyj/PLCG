/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164912
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
    var_10 ^= ((/* implicit */_Bool) ((long long int) 9307021002771293579ULL));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) var_3);
                    var_12 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) 9139723070938258037ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9307021002771293579ULL)) ? (9139723070938258024ULL) : (((/* implicit */unsigned long long int) 288230376151711680LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-288230376151711688LL))));
                }
            } 
        } 
    } 
    var_13 = var_1;
    /* LoopSeq 2 */
    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) /* same iter space */
    {
        var_14 += min((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((((var_1) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_3] [i_3 + 2]))))), (((/* implicit */long long int) arr_5 [i_3] [i_3] [i_3 + 2] [i_3 + 2]))))));
        arr_8 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_3])), (5924411225963482551LL)))) ? ((+(288230376151711687LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) * (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)75)) > (((/* implicit */int) (unsigned char)255))))))))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9307021002771293552ULL))))), (((long long int) ((var_2) ? (9307021002771293579ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1]))))))));
    }
    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((_Bool) ((long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))))));
        var_17 = ((/* implicit */int) (((~(((((/* implicit */_Bool) 9307021002771293585ULL)) ? (9307021002771293585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)13] [(_Bool)1] [(_Bool)1]))))))) ^ (((/* implicit */unsigned long long int) (+(((arr_10 [i_4]) ? (((/* implicit */int) (_Bool)1)) : (-1))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 9307021002771293582ULL)) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) var_8))))))));
    }
}
