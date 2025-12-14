/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169419
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
    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((max(((_Bool)0), (((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [2ULL])))))), ((!(((/* implicit */_Bool) 15304475812306747235ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            var_15 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
            var_16 = ((/* implicit */unsigned int) (~((+(var_0)))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_0 + 3]))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 2])) >= (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_1 [i_0 + 1]))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_4 - 1])) ^ (((/* implicit */int) arr_11 [i_4] [i_3] [i_2 + 3] [i_1 + 2] [i_0 + 2])))));
                            var_18 -= ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (arr_9 [i_0] [i_1 + 2] [i_2 + 3]));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) var_8);
                            var_19 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_20 ^= ((((/* implicit */unsigned long long int) arr_14 [i_6 - 1] [i_2 + 2] [i_0 - 2] [i_0 + 2] [i_0 + 2])) | (((unsigned long long int) (_Bool)0)));
                            arr_18 [i_1] [i_1] [i_2] [i_1] [i_6 - 1] = 0U;
                            arr_19 [i_3] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_6] [i_1] [i_0]))))) | (345550296U)));
                        }
                        arr_20 [i_1] = ((/* implicit */unsigned int) (!(((_Bool) var_10))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32187)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))) | (arr_7 [i_0 + 3] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        }
    }
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3949417006U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_10)) ? (11033617641775303925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) 3949417006U)))) < (var_9)));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), ((+(((unsigned long long int) var_12))))));
}
