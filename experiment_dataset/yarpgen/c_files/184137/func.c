/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184137
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
    var_18 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(var_13)))) ? (((12488532762159775631ULL) - (((/* implicit */unsigned long long int) -3453507133970059163LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), ((~(((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13555)) ? (((645011397) >> (((arr_5 [i_0] [i_1] [i_0]) + (707856700))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) != (arr_6 [i_0] [14LL] [i_2] [i_2]))))))) ? ((~(min((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2])), (3453507133970059162LL))))) : (((/* implicit */long long int) ((unsigned int) var_5)))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13555)) ? (((645011397) >> (((((arr_5 [i_0] [i_1] [i_0]) - (707856700))) - (1085224817))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) != (arr_6 [i_0] [14LL] [i_2] [i_2]))))))) ? ((~(min((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2])), (3453507133970059162LL))))) : (((/* implicit */long long int) ((unsigned int) var_5))))));
                    var_20 = ((/* implicit */unsigned char) ((int) (unsigned char)255));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_17);
    var_22 = ((/* implicit */short) var_2);
    var_23 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3453507133970059170LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) & (((((/* implicit */_Bool) var_14)) ? (((var_10) >> (((-8725140991820407132LL) + (8725140991820407195LL))))) : (((/* implicit */unsigned long long int) min((-1639077185), (((/* implicit */int) var_14)))))))));
}
