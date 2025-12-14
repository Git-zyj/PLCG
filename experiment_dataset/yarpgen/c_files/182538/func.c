/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182538
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_2)), (arr_0 [i_0] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned short)5] [(unsigned short)5] [i_2] [i_3]))))) : (((/* implicit */int) ((-1487984674) <= (((/* implicit */int) (_Bool)1)))))));
                                var_16 *= ((/* implicit */long long int) var_2);
                                var_17 += ((/* implicit */int) ((arr_10 [12LL] [i_0] [12LL] [i_1] [(signed char)7] [i_3] [i_4 - 2]) != (((((unsigned long long int) (unsigned short)0)) % (((/* implicit */unsigned long long int) (+(-1487984674))))))));
                                var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_4]))) ? ((-(var_7))) : ((~(((/* implicit */int) (_Bool)1))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) -1487984674)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_1])), (arr_3 [i_3])))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_1]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                    arr_13 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515))) : (21ULL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((_Bool) ((int) var_14)));
}
