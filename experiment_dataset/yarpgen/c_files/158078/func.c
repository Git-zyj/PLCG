/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158078
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
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_18)), (max((-7), (((/* implicit */int) var_3))))))), ((~(max((var_4), (((/* implicit */unsigned long long int) var_11))))))));
    var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_16))))), (((/* implicit */int) (unsigned char)0))));
    var_21 |= ((/* implicit */unsigned int) max((0), (((min((((/* implicit */int) (unsigned char)10)), (7))) >> (((min((((/* implicit */int) var_10)), (var_15))) + (950659146)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [(signed char)14] [(signed char)12] [(signed char)14] |= ((signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
                arr_7 [(unsigned short)2] [13LL] [i_0] = ((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (-8526709294063305077LL) : (((/* implicit */long long int) -5)))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_13)) ? (max((12871911276023731247ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))));
}
