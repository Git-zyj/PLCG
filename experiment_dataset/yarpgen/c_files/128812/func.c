/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128812
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_9))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) var_1);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1])) >> (((17330202914413516978ULL) - (17330202914413516949ULL)))))) / (max((5821701981703607022ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [10LL] [i_0]))))))) ? ((~(((/* implicit */int) (signed char)9)))) : (((/* implicit */int) (signed char)9))));
                                var_16 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) 65535)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [2] [i_0])), (arr_3 [i_0] [i_1] [i_1])))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_10 [i_0] [14ULL] [i_4]))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) var_2));
                    var_18 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (17330202914413516978ULL) : (((/* implicit */unsigned long long int) var_1))))))))));
                }
                var_19 = ((/* implicit */unsigned int) (unsigned short)32601);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 580968549345376486LL)) ? (((/* implicit */int) var_5)) : ((-(var_4)))));
}
