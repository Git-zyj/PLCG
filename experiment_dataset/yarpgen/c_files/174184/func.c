/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174184
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
    var_11 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)54)) ? (13292063221188110570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) 5154680852521441046ULL)) ? (-1927430694) : (var_8))) : (var_8)))), (max((((/* implicit */unsigned long long int) var_7)), (13292063221188110570ULL)))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 5154680852521441036ULL)) ? (((5154680852521441036ULL) ^ (((/* implicit */unsigned long long int) -1906703596)))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (short)-25021))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = (~(max(((~(13292063221188110567ULL))), (((/* implicit */unsigned long long int) arr_2 [i_2])))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (4016714695U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0])))))))));
                }
            } 
        } 
    } 
    var_13 = ((max((((/* implicit */unsigned long long int) ((2329203118U) & (((/* implicit */unsigned int) var_10))))), (((((/* implicit */unsigned long long int) var_8)) & (5154680852521441052ULL))))) | (((/* implicit */unsigned long long int) ((max((-692593178), (((/* implicit */int) var_3)))) | (((((/* implicit */_Bool) var_3)) ? (447351243) : (((/* implicit */int) var_4))))))));
}
