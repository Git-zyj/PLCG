/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175510
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) var_5)));
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((unsigned short) -9223372036854775782LL);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775782LL)) || (((/* implicit */_Bool) (unsigned short)38260))))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
            var_21 = ((_Bool) arr_0 [i_0 + 1]);
            arr_7 [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_4 [i_0] [i_0] [i_1]) ? (-9223372036854775758LL) : (3399725526416054050LL))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775788LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (18446744073709551615ULL)));
                        arr_13 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 29ULL)) ? (arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16137678633860522477ULL)) ? (((/* implicit */unsigned long long int) -7484692678290033247LL)) : (8727998315790248012ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_2 [(unsigned short)9])))) : (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
    }
}
