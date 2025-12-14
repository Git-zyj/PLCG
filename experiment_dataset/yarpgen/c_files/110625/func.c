/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110625
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
    var_13 = ((/* implicit */int) var_8);
    var_14 = var_9;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) * (((1448626059U) * (3283909712U)))))) ? (((arr_0 [i_0 - 1]) >> (((var_8) - (1921012735U))))) : (var_4)));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(465145664U))))));
        var_16 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), ((short)32736))))))), (max((((/* implicit */unsigned int) 441215291)), (2925261923U))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                var_17 = ((/* implicit */_Bool) arr_0 [i_3]);
                arr_12 [i_2] [i_2 - 2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
            }
            for (int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_16 [i_2] [i_2] [i_4] [i_1] = ((/* implicit */unsigned int) (~(var_6)));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (13144238792453707615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [4ULL]))))))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2415825157U)))) ? (((/* implicit */unsigned long long int) 0U)) : (10166582755500654851ULL)));
                    arr_19 [11U] [i_2] [7LL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [10U] [i_2 - 1] [i_2] [i_2]))) : (24U)))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) var_4)))))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6)))))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_20 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (_Bool)1)) > (-1925551184))));
                    var_21 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    arr_22 [i_2] [i_2] [i_4] [4] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (((unsigned int) arr_14 [i_2])));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_1 - 1] [i_2] [(_Bool)1] [1LL] = ((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) 549628235)) ? (((/* implicit */unsigned int) var_3)) : (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))));
                    var_22 = var_7;
                }
            }
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                arr_28 [i_2] [i_2] [i_8] = var_4;
                var_23 = var_4;
            }
            arr_29 [(_Bool)1] [i_1] [i_2] = arr_0 [i_1];
        }
        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_1] [0U] [0U] [2U])) * (((/* implicit */int) var_10))))) != (7U))))) != (var_9)));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2524650459624949048ULL)) ? (4167294115U) : (var_11)))) ? (arr_14 [(signed char)6]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-107)) > (((/* implicit */int) (signed char)(-127 - 1)))))))))) ? (10166582755500654851ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [8]))));
    }
    var_26 = (+((~(max((var_6), (((/* implicit */long long int) var_10)))))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_5) & (var_9))) | (2431826316U)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((var_1), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 756995902U)) ? (143688618749524431ULL) : (((/* implicit */unsigned long long int) 3537971403U)))))))))));
}
