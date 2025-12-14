/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163498
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
    var_11 |= (-(((((/* implicit */_Bool) 2077099531)) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])), (arr_0 [8LL])))) ? ((-(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((short) (_Bool)0)))))) ? (((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) (_Bool)1)))) / (((arr_2 [i_1] [i_1] [6LL]) * (((/* implicit */int) (_Bool)1)))))) : ((~(((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(signed char)5] [i_0]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) 15641582134316446506ULL))));
                            var_14 = ((/* implicit */_Bool) arr_3 [i_0] [4LL]);
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) ((signed char) ((short) (_Bool)1)));
            }
        } 
    } 
}
