/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160240
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
    var_19 = ((/* implicit */unsigned char) (-(var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) (signed char)-83)))))));
                var_21 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)110)), ((-(arr_0 [i_0 + 1])))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_0 + 1] [i_0]));
                        arr_10 [3ULL] [i_1] [i_1] [i_2] [i_0] [i_3 + 1] = ((((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))));
                        arr_11 [i_0] = (~(((arr_0 [7U]) << (((/* implicit */int) var_15)))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) (signed char)101)) & (747658672))))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) ((short) arr_7 [i_0 - 1] [i_0]));
                            arr_19 [i_1] [(signed char)10] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) -1LL))) ^ (var_3)));
                            var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-59))));
                            arr_20 [i_0 + 2] [i_0] [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) 869371872)) : (arr_0 [i_0 - 1])));
                            arr_21 [i_0] [i_1] [(signed char)7] [(signed char)7] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_27 &= ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) var_14)))));
                        arr_24 [i_0 + 1] [i_1] [i_0] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-110))));
                    }
                    var_28 *= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((_Bool) arr_16 [i_0] [i_1] [4U] [i_1] [i_0])))))));
                    arr_25 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (min(((~(var_10))), (((/* implicit */unsigned long long int) (~(var_17))))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), (var_10))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) < ((-(var_8)))))));
    var_30 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) < (((((/* implicit */_Bool) -1692038826)) ? (4024653228U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) * (((/* implicit */int) (((-(var_10))) > (((/* implicit */unsigned long long int) (-(var_3)))))))));
}
