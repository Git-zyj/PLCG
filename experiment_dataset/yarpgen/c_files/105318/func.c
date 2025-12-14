/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105318
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
    var_13 = ((/* implicit */signed char) ((_Bool) min((var_10), (max((((/* implicit */long long int) (signed char)-2)), (-6793342210552072643LL))))));
    var_14 += ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_1 + 3]);
                var_16 = ((/* implicit */short) max((var_16), (((short) min((arr_5 [i_0 + 1]), (arr_5 [i_0 - 2]))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((short)27250), (((/* implicit */short) (_Bool)0)))))) & (arr_1 [(_Bool)1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)101)))))))) : ((-((-(((/* implicit */int) var_8))))))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)27250))) + (var_7))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)51))) : (arr_1 [i_0] [i_1])))))) ? (max(((~(((/* implicit */int) (signed char)-70)))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)60)), (var_8)))))) : ((((!((_Bool)1))) ? (((/* implicit */int) arr_3 [(unsigned char)0] [i_1 + 3] [i_0 + 3])) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)3126), (((/* implicit */short) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((~(var_1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((~(((/* implicit */int) (_Bool)0))))))))))));
}
