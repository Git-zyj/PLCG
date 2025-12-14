/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150742
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
    var_19 = ((/* implicit */signed char) var_18);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0])))));
        arr_2 [8LL] = ((/* implicit */unsigned long long int) min((3202612504151724595LL), (((/* implicit */long long int) ((unsigned short) ((17) - (-17)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_21 = ((/* implicit */signed char) arr_3 [i_1]);
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (-(2884880076517639633ULL)));
        }
        for (short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_22 = ((/* implicit */signed char) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) arr_5 [i_0]))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((/* implicit */int) arr_4 [i_2 - 1])) >= (((/* implicit */int) arr_4 [i_2 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 + 1])) >> (((/* implicit */int) arr_4 [i_2 - 1]))))))))));
            }
            var_24 += ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_11 [i_2 - 2] [i_2 - 1] [i_2] [i_2]))), (max((arr_10 [i_2 - 1] [i_2] [i_2]), (((int) arr_3 [i_0]))))));
            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */short) (((~(17))) != (((/* implicit */int) (!(((/* implicit */_Bool) -26)))))));
            arr_13 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_0 [i_2 + 1]) : (arr_0 [i_2 - 1])))) == (var_17)));
        }
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) max((arr_3 [i_0]), (min((max((arr_8 [i_0] [i_0]), (arr_3 [(_Bool)1]))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4])) & ((+(max((((/* implicit */int) (signed char)-126)), (var_11)))))));
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((21ULL) > (((/* implicit */unsigned long long int) -2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3715079078U)) ? (((/* implicit */int) var_8)) : (595296189)))) : (arr_14 [i_4] [i_4])))) ? (max((((/* implicit */unsigned int) arr_15 [i_4])), (((arr_14 [(unsigned short)6] [2ULL]) * (((/* implicit */unsigned int) arr_10 [(short)1] [i_4] [i_4])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 18))) ? (min((3), (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) ((_Bool) 4))))))));
        var_26 += ((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) arr_3 [(_Bool)1])) || (((/* implicit */_Bool) arr_3 [i_4])))) && (((/* implicit */_Bool) min((arr_5 [i_4]), (((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4]))))))));
    }
}
