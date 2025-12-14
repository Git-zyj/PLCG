/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18487
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (+(min((((/* implicit */long long int) min((var_14), (((/* implicit */int) (unsigned char)0))))), (min((6723351749957690406LL), (((/* implicit */long long int) var_5))))))));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) < (((/* implicit */int) (!(((/* implicit */_Bool) -6723351749957690407LL)))))));
                    var_20 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)9)), (var_6)))), (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (var_13) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 4]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [(signed char)9] [(signed char)9] [i_2] [4ULL] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [(unsigned short)0] [(_Bool)1] [(short)5] [i_3] [i_4])), (-574899559917530271LL))))))));
                                var_21 -= ((/* implicit */unsigned long long int) -1LL);
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_0 + 1] [i_2] [i_4])), (((arr_1 [i_1] [i_4]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))))) <= (((((/* implicit */_Bool) (signed char)107)) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])))));
                                var_23 *= ((/* implicit */long long int) min((((unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0 + 3] [(_Bool)1])), (((/* implicit */unsigned short) ((short) ((unsigned short) arr_5 [3LL] [3LL] [3LL]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (unsigned char)25))));
}
