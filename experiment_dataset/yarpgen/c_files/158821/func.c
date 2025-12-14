/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158821
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
    var_18 = var_13;
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_2))))) <= (((((/* implicit */_Bool) var_10)) ? (-897727126243521155LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))))) / ((-((+(897727126243521169LL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)11] [i_1])))))));
                    var_21 = ((/* implicit */short) max((((arr_6 [i_0] [i_1 - 2]) % (arr_2 [i_1 - 2]))), (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((int) ((arr_8 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1]))))));
                                var_23 |= ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)98))))) ? (min((-897727126243521164LL), (((/* implicit */long long int) arr_9 [5ULL] [i_3] [i_2] [i_2] [i_1] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)113))))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) var_14))), (12U)));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_5);
}
