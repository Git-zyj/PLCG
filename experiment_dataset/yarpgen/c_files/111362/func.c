/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111362
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_18 = (-(((arr_0 [i_0]) ? ((+(((/* implicit */int) (signed char)97)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14301576199773744804ULL))))))));
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))), (min((var_10), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_0 [(_Bool)1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) var_5))))) : (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))));
        var_20 ^= ((/* implicit */signed char) min((((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)62))))));
        var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= ((~(((/* implicit */int) arr_1 [i_0] [i_0])))))))) == (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned long long int) 1713068786)) : (3ULL))));
        var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_10)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((max((var_3), (var_3))), (((/* implicit */signed char) arr_0 [(_Bool)1])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) << (((/* implicit */int) var_4))))) ? (arr_5 [i_2 + 1] [i_2]) : (max((((/* implicit */unsigned long long int) var_15)), (var_10)))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_2 + 2] [i_2] [i_2 - 1])) : (min((((/* implicit */unsigned long long int) var_14)), (arr_5 [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
            arr_6 [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) min((max(((_Bool)0), ((_Bool)1))), (((_Bool) (signed char)68)))))));
        }
        var_24 &= ((_Bool) ((unsigned long long int) var_7));
        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((arr_1 [i_1] [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) var_13))))))), (((unsigned long long int) arr_2 [i_1] [i_1]))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) min((arr_4 [i_1] [(_Bool)1] [6ULL]), ((+(((/* implicit */int) (_Bool)1)))))))));
    }
    var_27 = ((/* implicit */int) var_1);
}
