/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178405
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
    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (max((((((/* implicit */_Bool) (unsigned short)61686)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (58160318670801389LL))), (((/* implicit */long long int) ((_Bool) 2146959360)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = arr_1 [i_0];
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_21 -= ((/* implicit */unsigned short) (+(arr_3 [i_3] [i_3])));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_22 = ((((/* implicit */_Bool) -10)) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) ((unsigned short) arr_1 [i_0]))));
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 1600755944)) ^ (1152921367167893504LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+(arr_13 [i_3] [i_1 - 3] [i_1]))))));
                            var_24 = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (_Bool)1)))));
                        }
                        for (long long int i_5 = 4; i_5 < 16; i_5 += 1) 
                        {
                            arr_17 [11LL] [i_0] [i_0] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((long long int) (unsigned short)14977));
                            arr_18 [i_0] [i_1 + 2] [i_0] [i_2] [i_1 + 2] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_3])) : ((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), ((((+(((/* implicit */int) arr_19 [i_3] [i_3] [i_2] [i_1 + 2] [i_0])))) == (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
                            var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1 + 2] [i_3])) != (((/* implicit */int) arr_12 [i_1 - 3] [i_6]))));
                            var_27 &= ((/* implicit */_Bool) (~(arr_3 [i_6] [i_3])));
                            var_28 += ((/* implicit */unsigned short) ((6713771389609396142LL) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])))));
                            var_29 = ((/* implicit */unsigned long long int) ((_Bool) 2146959370));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)97)) & (((/* implicit */int) arr_21 [i_3] [i_3] [i_2] [i_2] [i_2] [i_1] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */long long int) (+(((((_Bool) (signed char)103)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (unsigned short)31)) >> (((7359069125049136682ULL) - (7359069125049136655ULL)))))))));
    var_32 = ((/* implicit */_Bool) var_5);
    var_33 = ((/* implicit */unsigned long long int) (-((~(((long long int) (_Bool)1))))));
}
