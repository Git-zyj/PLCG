/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132034
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
    var_16 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_1] [(short)11] [(short)11] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) || (((/* implicit */_Bool) (~(arr_2 [13ULL]))))))))));
                    var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0] [i_0])) & (((/* implicit */int) (signed char)-30)))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 2017952616U))) : (((((/* implicit */_Bool) (-(var_4)))) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [17U] [17U] [i_0])))))));
                    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)86)) ? ((-(2017952601U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)30)), (1403163596))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17789390996162536370ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)0)))))))) ? (((((/* implicit */_Bool) ((signed char) var_10))) ? ((~(2277014694U))) : ((~(2017952640U))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)5330)))) & ((~(((/* implicit */int) var_13)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_15);
}
