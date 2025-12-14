/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123367
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)192)), (((1371500196) << (((((/* implicit */int) (unsigned char)63)) - (63)))))))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_0]))))))) : ((-(arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) min((33554304LL), (((/* implicit */long long int) arr_1 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (short i_3 = 4; i_3 < 17; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1 + 3] = (+(((((/* implicit */unsigned long long int) arr_4 [i_3] [i_1 + 3])) / (((var_9) & (((/* implicit */unsigned long long int) 5478820203886992067LL)))))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))))), (((/* implicit */unsigned long long int) min((-5478820203886992067LL), (((/* implicit */long long int) var_8)))))))) ? (5302198324142802746ULL) : (((/* implicit */unsigned long long int) ((int) arr_7 [i_1])))));
                    }
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) var_3);
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_6] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) arr_5 [i_1 - 1] [i_5]);
                            var_13 -= ((/* implicit */unsigned char) arr_3 [i_1]);
                        }
                        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (arr_16 [i_1 + 1] [i_1 + 4] [i_3 + 2]) : (arr_16 [i_1 + 1] [i_1 + 4] [i_3 + 2]))) ^ ((+(arr_16 [i_1 + 1] [i_1 + 4] [i_3 + 2])))));
                        var_15 = ((/* implicit */long long int) (+(arr_0 [i_1])));
                    }
                    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 133955584U)) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-31))))))))));
                    var_17 *= max(((!(((/* implicit */_Bool) arr_7 [18])))), (((((/* implicit */int) arr_20 [i_1 - 1] [i_1 + 2] [i_3 - 3] [(_Bool)1] [i_1 + 2])) <= (((/* implicit */int) arr_20 [i_1 - 1] [i_1 + 1] [i_3 - 1] [(_Bool)1] [i_3])))));
                    arr_22 [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (-(4161011712U)))) && (arr_20 [i_1] [i_1 + 2] [i_3 + 1] [i_1] [i_1]))));
                }
            } 
        } 
        arr_23 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (var_1) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1 + 4] [i_1 + 2]) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (max((min((((/* implicit */unsigned long long int) 4161011696U)), (8974199030145194528ULL))), (((/* implicit */unsigned long long int) max((-5478820203886992076LL), (((/* implicit */long long int) var_5)))))))));
        var_18 = (~(max((((((/* implicit */_Bool) -1LL)) ? (arr_9 [i_1 + 1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (unsigned char)61)))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) != (min((((/* implicit */unsigned long long int) var_6)), (var_9))))))) & (max((((/* implicit */unsigned int) max((var_7), (((/* implicit */short) var_6))))), (var_0)))));
}
