/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134027
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) ((short) arr_7 [i_0])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_3] [i_4]);
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((-1652422862284244869LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_5]))));
                            var_21 += ((/* implicit */unsigned short) (+(10600994636565959517ULL)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_0] [i_6] = (!(((/* implicit */_Bool) (+(11LL)))));
                            var_22 = ((/* implicit */unsigned int) 10600994636565959517ULL);
                            var_23 = arr_0 [i_3];
                        }
                    }
                    var_24 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20304))) >= (((arr_5 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)10]))))))))));
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */signed char) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
}
