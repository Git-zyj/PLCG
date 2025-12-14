/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171882
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((unsigned int) 961710100)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)41005)) ? (961710109) : (((/* implicit */int) (_Bool)1))))))))));
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) -6332784467149386751LL)) ? (-6332784467149386738LL) : (var_8)))))) ? ((((_Bool)1) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min(((+(3639331892U))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((var_3) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) 961710112)) ? (((/* implicit */unsigned long long int) 370932938)) : (var_2))) : (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))));
            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((((/* implicit */_Bool) 4398046511103ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) ((_Bool) (unsigned char)2)))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_14 ^= ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)65535));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((unsigned int) 1281978760795736976LL))));
                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
            }
            arr_11 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (-961710076) : (((/* implicit */int) (short)21888))))) ? (var_0) : (var_0)));
            arr_12 [3LL] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))));
        }
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)3949)))) : (((var_9) ? (var_8) : (var_10))))))));
        arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1331913302U)), ((-(1ULL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
    }
}
