/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10108
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
    var_19 = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned int) var_6)), (var_4))), (((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (var_5)))))), (((/* implicit */unsigned int) var_13))));
    var_20 = ((/* implicit */unsigned long long int) var_15);
    var_21 = ((/* implicit */long long int) min((var_10), (var_17)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)77)), (18446744073709551607ULL))), (min((((/* implicit */unsigned long long int) (signed char)78)), (var_9)))));
        arr_4 [i_0 - 1] [(_Bool)1] &= min((min((((/* implicit */unsigned long long int) arr_1 [i_0 + 3])), (var_0))), (max((((/* implicit */unsigned long long int) (signed char)-109)), (var_9))));
        var_22 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_11)), (min((0ULL), (14793053178901197200ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_0 [i_0])), (var_15))))));
        var_23 = max((max((6597444793255877937ULL), (((/* implicit */unsigned long long int) (short)-5266)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (4294967295ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */int) 33554304ULL);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_24 = ((/* implicit */int) (_Bool)1);
            arr_10 [i_1] = ((/* implicit */_Bool) 4035225266123964416ULL);
            arr_11 [i_1] [i_1] [i_1] = (-2147483647 - 1);
        }
        for (short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) 33554304ULL))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_1] = ((/* implicit */signed char) 18446744073709551615ULL);
                        arr_21 [i_1] [0LL] [i_4] [i_1] [i_5] = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_22 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (signed char)77);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        }
        arr_23 [i_1] = 1856633383344532589ULL;
    }
    var_27 &= ((/* implicit */unsigned long long int) var_6);
}
