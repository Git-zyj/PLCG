/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163711
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
    var_15 = var_12;
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((10594224017797490140ULL), (10594224017797490138ULL)))) ? (((((/* implicit */_Bool) 1170989181)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) : (var_9)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)-35);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_2 - 1]))));
                            var_18 += ((/* implicit */unsigned int) var_13);
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (+(arr_16 [i_0] [i_1] [i_0] [i_2 - 1] [i_4] [10])));
                        }
                        for (int i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_1] [i_2 + 1] [i_1] [i_5] [i_2] [i_2 + 1] = ((/* implicit */int) arr_9 [i_1]);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((arr_18 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1])) : (((/* implicit */int) var_0)))));
                            var_19 += ((/* implicit */unsigned int) 1170989192);
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5 + 1] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_18 [i_2] [0] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)122)) : (1170989200))))));
        arr_23 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 233158997U)) ? (-7228354317341299607LL) : (((/* implicit */long long int) -1170989188))))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) >= ((+(233159015U))))))) : ((+(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
    {
        arr_26 [2] [2] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_24 [i_6] [i_6 + 1])) >= (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_6])))))) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        arr_27 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (arr_25 [i_6 - 1])))));
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) ((arr_25 [i_6]) <= (((/* implicit */int) arr_24 [i_6] [i_6 + 1]))))) : (arr_25 [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_24 [i_6 + 1] [i_6 + 1]), (arr_24 [i_6 + 1] [i_6 + 1]))))) : (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6421629427208674807LL)))))));
    }
    var_22 = ((/* implicit */short) ((var_14) << (((max((var_13), (((/* implicit */unsigned long long int) var_10)))) - (18446744073709549839ULL)))));
}
