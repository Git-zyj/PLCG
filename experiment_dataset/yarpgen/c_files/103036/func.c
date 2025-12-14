/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103036
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
    var_16 ^= ((/* implicit */short) max((var_11), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)5848)))), (((/* implicit */int) ((short) 0ULL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((int) (((_Bool)1) ? (arr_8 [i_1 + 2] [i_1 + 1] [i_2 - 1] [i_2] [i_2 - 3]) : (var_6))));
                            arr_9 [i_0] [i_1 - 2] [i_2 - 4] [i_3] = arr_7 [i_0];
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (+(var_7));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned char) (short)5234)))));
                            }
                            /* vectorizable */
                            for (short i_5 = 1; i_5 < 21; i_5 += 2) 
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(arr_11 [i_2 - 1] [i_5 + 1]))))));
                                var_20 = ((/* implicit */unsigned short) ((unsigned char) ((-2282556289540302087LL) == (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                            }
                            for (int i_6 = 3; i_6 < 24; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */long long int) (((+(((/* implicit */int) var_4)))) * (((/* implicit */int) ((((/* implicit */_Bool) 2282556289540302091LL)) || (((/* implicit */_Bool) 2282556289540302086LL)))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1 - 2]))))))));
                            }
                            arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_17 [i_1 + 2] [i_2 - 2] [i_3] [i_3] [i_3]) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)56481), (((/* implicit */unsigned short) ((_Bool) 7U))))))) : (min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) 2282556289540302077LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) : (var_11)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]);
                var_24 = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
