/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101061
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((5500674479282016900ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), (max((0ULL), (((/* implicit */unsigned long long int) var_13))))));
                arr_4 [i_0 + 2] [i_0] [i_0 + 2] = var_10;
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0]))) == (arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0])))));
                                var_20 = ((/* implicit */unsigned short) (((((+(arr_9 [i_0] [i_0 - 1] [i_0 - 2] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_1 - 1] [i_2] [i_1 - 1] [i_0])))))) && (((/* implicit */_Bool) ((((var_5) < (0ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [16ULL] [i_1 + 1]))) : (10278699950823563590ULL))))))));
                                arr_12 [i_0] [i_1] [i_1] [13ULL] [i_1] [i_1] = ((/* implicit */unsigned char) 1394031182);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 1] [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_0 [i_0 - 2] [i_0 + 2]))) : (min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0 + 2] [i_0 - 2])))));
            }
        } 
    } 
}
