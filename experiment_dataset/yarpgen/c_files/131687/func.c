/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131687
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
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2998801155U)) ? (((((/* implicit */_Bool) 4184275728U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2479653054U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (var_0)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_0 + 1] [i_1] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)17140)) ? (((/* implicit */unsigned long long int) 6221035732058639836LL)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4215759154U)) ? (18446744073709551613ULL) : (9411439034439637896ULL)))) ? (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))) : (((/* implicit */unsigned long long int) ((var_5) ? (-6221035732058639844LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_15 [9U] = ((/* implicit */unsigned long long int) var_6);
                            arr_16 [i_0] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((arr_10 [i_0] [(unsigned char)8] [i_0]) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) : (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) var_8))));
                        }
                        arr_17 [i_0] [i_0 + 3] [i_0] [i_0] = (((!(arr_10 [0] [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 737582110U)) || (((((/* implicit */int) (unsigned short)48405)) != (((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_1] [i_0 + 2] [i_2] [i_3])))))))) : (min((((((/* implicit */_Bool) 6221035732058639844LL)) ? (4ULL) : (((/* implicit */unsigned long long int) 537105176U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (var_2) : (((/* implicit */long long int) arr_9 [i_0] [i_2 - 1] [i_3]))))))));
                        arr_18 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] = ((1851270472U) ^ (max((3002990119U), (((/* implicit */unsigned int) arr_6 [i_0 + 3] [i_0 + 1] [i_0 - 1])))));
                        arr_19 [i_2 - 1] [i_2 - 1] [2U] [i_2 - 1] = 3ULL;
                    }
                } 
            } 
        } 
        var_16 = ((int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */long long int) min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((var_2) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_5 = 4; i_5 < 9; i_5 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_20 [i_5 + 1]) : (arr_20 [i_5 - 3]))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [(_Bool)1]))));
    }
    var_19 = ((/* implicit */_Bool) ((((unsigned int) min((1851270477U), (((/* implicit */unsigned int) (unsigned char)235))))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) (unsigned short)60670))) ? (((/* implicit */int) var_10)) : (var_9))) <= (((/* implicit */int) ((_Bool) 2443696847U)))));
}
