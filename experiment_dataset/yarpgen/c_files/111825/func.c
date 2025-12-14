/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111825
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
    var_15 = ((/* implicit */unsigned char) var_14);
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) (unsigned char)7);
                                var_17 = (~(((/* implicit */int) arr_5 [(unsigned char)4] [i_3] [i_4 - 2])));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned char) (~((~(min((-6497481895708079557LL), (((/* implicit */long long int) arr_12 [i_5] [i_1] [i_2] [i_1] [(unsigned char)6]))))))));
                                var_19 += ((/* implicit */unsigned char) var_3);
                            }
                            var_20 = ((/* implicit */unsigned char) ((((min((-6497481895708079533LL), (((/* implicit */long long int) var_9)))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_5))))) ? (-6497481895708079563LL) : (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_12))) ? (((/* implicit */int) arr_10 [i_3] [(unsigned char)7] [7] [i_3])) : ((-(((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)6] [(_Bool)1])))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [1U] [i_1] [i_0] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)0))))));
                var_22 = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
}
