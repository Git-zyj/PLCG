/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135667
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_0]), (arr_4 [i_0])))) ? (((/* implicit */int) ((short) arr_4 [i_0]))) : (((/* implicit */int) ((_Bool) arr_4 [i_0])))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) (((_Bool)1) ? ((((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((unsigned int) arr_0 [(_Bool)1] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_10 [i_0] [i_1] [i_1] [i_0]) : (4503599627370480LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)14351))))) ? (((((/* implicit */_Bool) var_8)) ? (1464915182U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), (arr_2 [i_2] [i_3]))))))))));
                        arr_12 [i_3] [2LL] [i_2] [2LL] [i_0] &= ((/* implicit */_Bool) min(((+(((/* implicit */int) ((_Bool) arr_2 [i_0] [(short)15]))))), ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [(_Bool)1]))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max(((~(((var_11) << (((/* implicit */int) var_12)))))), (((var_12) ? ((~(var_5))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (var_4)))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-8531))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (7126410290864649341LL)))));
    var_20 = ((_Bool) var_1);
    var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) var_14))), (var_9)))) || (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) != (((long long int) var_7))))));
}
