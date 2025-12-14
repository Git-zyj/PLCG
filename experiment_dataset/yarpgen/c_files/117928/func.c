/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117928
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
    var_13 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((var_5) ^ (var_8)))), ((-(var_10))))) + (var_0)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 2728078157543438089ULL))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 1] [i_3] [i_0] [i_0])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2])) < (((/* implicit */int) ((signed char) 6685354247562461786LL)))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (6685354247562461797LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_17 = ((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)));
                    var_18 = arr_7 [i_2 + 2] [i_0];
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) 6685354247562461778LL))), (min((var_1), (var_4)))))) ? (var_0) : (var_0)));
    var_20 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((((/* implicit */long long int) 1522150971)) < (9094567900270257027LL)))), (-6685354247562461777LL))), (((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((/* implicit */long long int) var_8))))))))));
}
