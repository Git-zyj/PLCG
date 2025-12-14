/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172244
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) << (((max((10541471847140994764ULL), (((/* implicit */unsigned long long int) (short)32767)))) - (10541471847140994746ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((signed char) var_9))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_10))))), (((unsigned int) var_13)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((((unsigned int) arr_0 [i_0] [i_0])) != (((/* implicit */unsigned int) (+(arr_2 [i_0] [i_0]))))));
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_4 [i_2] [10ULL] [i_2]))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2 - 1] [14U] [i_1])) == (((/* implicit */int) arr_5 [i_2 - 2] [i_1] [i_1]))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((signed char) ((unsigned int) arr_6 [i_2 + 3] [(_Bool)1]))))));
                }
            } 
        } 
    }
    var_23 = var_7;
    var_24 ^= ((/* implicit */unsigned int) ((_Bool) var_0));
}
