/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108024
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7326166146707262099LL)) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-203)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_21 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-6215950367120214413LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18752)))))))));
                    var_22 *= ((/* implicit */long long int) (~((+(arr_8 [14LL] [i_2] [i_2])))));
                }
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 + 2] [i_3 + 2]))) : ((+(arr_4 [i_5]))))));
                                var_24 = ((/* implicit */_Bool) ((long long int) ((arr_6 [i_0] [i_0]) <= (arr_6 [i_1 - 1] [i_3 + 1]))));
                                arr_16 [i_0] [i_3 + 2] [i_1] [i_0] |= ((/* implicit */unsigned int) (-((-(((var_2) ^ (((/* implicit */long long int) arr_7 [i_0]))))))));
                                arr_17 [i_0] [i_0] [i_1] [(unsigned short)12] [i_1] [i_4] [4LL] = ((/* implicit */_Bool) max(((-(arr_8 [i_5] [i_1] [i_3 - 1]))), (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_3 + 2] [i_1 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 ^= ((/* implicit */_Bool) ((unsigned char) var_7));
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) var_19)) ? (var_6) : (((/* implicit */unsigned long long int) var_15)))))))));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (-7326166146707262101LL) : (var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_15)))) ? (((/* implicit */long long int) var_8)) : ((~(var_15))))))));
}
