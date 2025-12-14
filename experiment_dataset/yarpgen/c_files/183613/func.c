/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183613
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) arr_0 [i_1])))))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 += ((/* implicit */signed char) ((((/* implicit */int) var_9)) <= ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_2] [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) ((short) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                }
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    arr_11 [i_1] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [12ULL] [i_1 - 1]))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [6] [i_1 - 1])) ? (arr_5 [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((unsigned int) arr_9 [i_1 - 1] [i_1] [i_3])) : (min((var_5), (((/* implicit */unsigned int) max((arr_0 [i_0]), ((short)9))))))));
                }
                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)1))) ? (((((/* implicit */unsigned long long int) var_2)) - (arr_5 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) (+(49306273430320879LL))))));
                var_20 -= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_10))) < (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_2);
}
