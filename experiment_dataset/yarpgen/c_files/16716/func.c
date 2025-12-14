/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16716
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
    var_13 = ((/* implicit */unsigned int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) ((max((11U), (((/* implicit */unsigned int) var_9)))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3097087286U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((1096276057) / (((/* implicit */int) (signed char)9))))) : (arr_2 [i_0 - 1] [i_2 - 2] [i_2])))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((signed char) ((((/* implicit */int) ((_Bool) var_10))) >> (((max((35U), (((/* implicit */unsigned int) (_Bool)0)))) - (17U)))))))));
                    var_15 *= ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [(_Bool)1]))))) ? (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_10)))))))));
                    arr_8 [i_0] [i_0] [i_0] [(short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1804507155)) ? ((-(((/* implicit */int) arr_5 [i_0 - 1] [6ULL] [i_2 + 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_16 = ((/* implicit */signed char) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (4603550151050900673LL)))) ? (var_0) : (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) (~((~(1550865565))))))));
                }
            } 
        } 
    } 
}
