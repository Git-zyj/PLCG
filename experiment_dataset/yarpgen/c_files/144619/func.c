/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144619
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_10 [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1]), (var_3)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (5051227277824369485LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2343))))) : (((/* implicit */long long int) ((unsigned int) arr_9 [i_0] [i_0] [i_0] [(signed char)12])))))) ? (var_4) : (((/* implicit */int) max((arr_9 [i_0] [10LL] [10LL] [i_3]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)5] [i_2])))))))));
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_3)))));
                    }
                    for (short i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_2 + 4] [i_2 - 1] [i_4 - 1] [i_4 + 1]))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (unsigned short)63192))));
                        var_19 = ((/* implicit */short) var_13);
                        var_20 = ((/* implicit */unsigned int) arr_7 [i_0] [i_2 + 3] [i_2]);
                        var_21 = ((/* implicit */short) var_3);
                    }
                    var_22 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)34)) << (((((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [12])) << (((((/* implicit */int) min((var_14), (arr_7 [i_0] [i_0] [i_1])))) + (46))))) - (1426063342)))));
                    var_23 *= ((/* implicit */short) arr_4 [i_0] [i_1] [i_2 - 2]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((unsigned long long int) var_15));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((~(((/* implicit */int) var_13))))));
}
