/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120749
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
    var_18 = ((/* implicit */long long int) (-((-((-(var_15)))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_2))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_5 [i_0] [1LL] [i_2])) ? (((/* implicit */int) arr_8 [(unsigned short)2] [(unsigned short)2])) : (((/* implicit */int) arr_3 [i_2])))))) ^ (((/* implicit */int) (!(((((/* implicit */int) var_5)) != (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1 + 2])))))))));
                    var_21 = ((((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1])) ? (var_1) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1])))) <= (max((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0])), (arr_7 [i_0] [i_1] [i_1] [13LL])))), ((+(((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2] [i_1])))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1]))))), ((-(((/* implicit */int) arr_3 [i_2]))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) : (((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((var_2) - (4001233904U)))))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) arr_4 [i_2] [i_1]))))))));
                }
            } 
        } 
    } 
}
