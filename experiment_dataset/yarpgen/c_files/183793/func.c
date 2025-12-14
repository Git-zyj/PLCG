/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183793
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] |= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 607312851U)) ? (arr_7 [i_0]) : (((/* implicit */long long int) 2762233975U)))) > (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (607312847U)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (min((((arr_0 [12ULL] [12ULL]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1]))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)188)) ? (5330903828981116535LL) : (arr_7 [i_2])));
                    var_12 = ((/* implicit */unsigned char) ((int) (unsigned short)65535));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_0 + 1] [i_1] [6U] = ((/* implicit */unsigned char) 138748851959121942LL);
                        arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] = max((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (arr_6 [i_0 - 1] [i_3] [2LL]))), (((/* implicit */long long int) (_Bool)1)));
                        var_13 = min((max((min((-1LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (~(arr_10 [i_0] [i_1] [i_1] [i_0])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_3 [i_1] [i_1] [5])))))))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_16 [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [(short)8] [i_4 - 1] [i_4 - 1] [i_5] [(short)8])))))));
                            arr_19 [8LL] [i_4 + 2] [i_1] [(unsigned char)5] [i_0] = arr_16 [i_0 - 1] [i_0 - 2];
                            var_16 = ((/* implicit */unsigned int) arr_16 [i_0 - 2] [i_1]);
                            var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_0] [i_0]))) >> (((((/* implicit */int) arr_1 [i_0])) - (49375)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), ((+(min((((/* implicit */long long int) var_7)), ((+(var_2)))))))));
    var_19 = ((/* implicit */long long int) var_5);
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)31)) | (-70546464)));
}
