/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172163
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) arr_0 [(_Bool)1]);
        var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)44584));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned long long int) (signed char)-1);
                    arr_6 [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (var_6) : (((/* implicit */int) arr_0 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((-(11658028859073566051ULL))))));
                    var_17 = ((/* implicit */signed char) min((((/* implicit */short) arr_5 [i_1])), (arr_0 [6ULL])));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_18 = ((/* implicit */signed char) (+(((long long int) (signed char)-1))));
        arr_10 [i_3] = ((short) ((long long int) min((var_12), (((/* implicit */long long int) arr_8 [i_3] [(_Bool)1])))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (arr_9 [i_3]))))))) ? (((((((/* implicit */_Bool) -6410964968921567208LL)) ? (((/* implicit */int) (unsigned short)2684)) : (((/* implicit */int) (signed char)56)))) + (max((arr_9 [6]), (arr_9 [i_3]))))) : (min((-1), (((/* implicit */int) (signed char)-6))))));
    }
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(min((((/* implicit */int) (_Bool)0)), (-20)))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
    var_21 ^= var_1;
}
