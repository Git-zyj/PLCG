/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136497
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
    var_16 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((short) 4294967295U));
        var_17 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) min(((short)26371), (arr_1 [i_0]))))) | (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
        var_18 = var_1;
        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) min(((unsigned short)48581), ((unsigned short)6))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
                    {
                        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) (unsigned short)48581)));
                        arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 267572832)) ? (arr_0 [i_4]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))), ((-(((/* implicit */int) arr_1 [i_3])))))))));
                        var_20 ^= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) arr_13 [i_4 - 3] [i_4 - 2] [i_4 + 2] [i_4 - 2] [i_2])) <= (arr_11 [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -1412051157)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) 10U))));
                            arr_20 [i_1] [i_6] [i_6] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                            arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30954)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25481))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) (~(1329091111U)))), (((((/* implicit */_Bool) 716883522U)) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1])) : (arr_0 [i_1])))))));
                        }
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (short)-6160)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4211579422U)))));
                        var_23 = arr_9 [i_1];
                        var_24 ^= ((/* implicit */unsigned int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_11 [i_1] [i_1] [i_1] [i_1]))) ? ((+(((/* implicit */int) arr_8 [i_1])))) : (((/* implicit */int) min((arr_16 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    }
                    var_25 = max((((((/* implicit */_Bool) arr_12 [i_3])) ? ((-(var_12))) : (((/* implicit */unsigned long long int) arr_9 [i_1])))), (((/* implicit */unsigned long long int) max((arr_10 [i_1]), (arr_10 [i_1])))));
                }
            } 
        } 
        var_26 = min(((+(max((arr_6 [i_1] [i_1] [i_1]), (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((/* implicit */int) ((72057591890444288ULL) == (((/* implicit */unsigned long long int) 267572832))))) : ((~(((/* implicit */int) (short)10228))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = (-(((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [i_7]))) : ((+(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        arr_25 [i_7] = ((/* implicit */_Bool) arr_5 [i_7]);
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_7 [i_7] [i_7] [i_7])))))))));
    }
}
