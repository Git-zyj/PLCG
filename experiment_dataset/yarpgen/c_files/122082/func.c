/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122082
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
    var_18 = ((/* implicit */_Bool) max(((~(min((var_9), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) ((-14) ^ (((/* implicit */int) var_4)))))));
    var_19 = ((/* implicit */unsigned short) ((short) var_11));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */unsigned int) -14)) != (var_11)))) | (((/* implicit */int) arr_1 [i_0] [i_0])))), (((arr_0 [(_Bool)1]) + ((~(-6)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) var_8)), (var_11))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0]))))))))));
                        arr_11 [i_0] [i_0] [(unsigned short)6] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) max(((+((~(-24))))), (((/* implicit */int) arr_2 [i_0]))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-23))))) - (min((((/* implicit */unsigned long long int) arr_12 [i_2 + 2] [i_4 + 1] [i_4] [i_4] [i_0])), (var_12)))));
                            arr_14 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 2] [i_4 + 1] [i_0] [i_4 + 1]))) : (arr_12 [i_2 + 4] [i_4 + 1] [i_4] [i_4 + 1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_4 + 1] [i_4])) || (((/* implicit */_Bool) arr_3 [i_2 - 1] [i_4 + 1] [17ULL]))))) : ((~(((/* implicit */int) var_7))))));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [3ULL] = ((/* implicit */unsigned long long int) (~(((((unsigned int) arr_5 [i_1] [i_0] [i_4 + 1])) >> (((((/* implicit */int) ((unsigned char) -5472371456626869377LL))) - (102)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) (+(17LL)));
                            var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) ((var_17) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) < ((~((+(((/* implicit */int) (_Bool)1))))))));
                            arr_18 [i_2 + 2] [i_1] [i_2] [i_0] [5LL] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-78)), (min((arr_12 [i_1] [i_2 + 1] [i_2 + 3] [i_3] [i_0]), (arr_12 [i_1] [i_2 + 1] [i_2 + 3] [i_5] [i_0])))));
                            arr_19 [i_0] [10ULL] [i_2 + 4] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(5472371456626869377LL))), (((/* implicit */long long int) max((((/* implicit */signed char) var_5)), (arr_7 [i_1] [i_3]))))))) || (((/* implicit */_Bool) 23))));
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_14))));
                    }
                } 
            } 
        } 
    }
}
