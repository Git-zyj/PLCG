/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145893
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [(_Bool)0] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_1)) ? (-9223372036854775799LL) : (((/* implicit */long long int) -1853082704)))), (((/* implicit */long long int) arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1])))) < (((/* implicit */long long int) 1046615988))));
                    arr_8 [(unsigned char)4] [6ULL] [6ULL] [(signed char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (-1046615988) : (max((((/* implicit */int) (unsigned short)55684)), (-1046615988)))))) ? (var_0) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (4611686018427387904ULL)))) ? (max((((/* implicit */unsigned long long int) var_18)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 + 2]))))) ? (3206034841U) : (((/* implicit */unsigned int) -1046615988))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_18))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((signed char) 9088961893041105450LL)))));
    var_21 += ((/* implicit */unsigned short) var_2);
    var_22 = ((/* implicit */long long int) var_8);
    var_23 = ((/* implicit */unsigned long long int) var_18);
}
