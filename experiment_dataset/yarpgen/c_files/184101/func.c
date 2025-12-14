/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184101
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((signed char) ((arr_0 [i_0]) | (arr_0 [i_0 + 1])))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2068923358), (((/* implicit */int) arr_2 [i_1]))))) ? (((var_12) | (var_5))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_13))))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) min((((signed char) arr_3 [i_1] [i_1])), (arr_2 [i_1]))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) min((arr_1 [i_4 - 1]), (arr_1 [i_4 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (var_10) : (((/* implicit */long long int) arr_0 [i_2 - 1])))))))));
                            arr_13 [i_1] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2068923358)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 - 1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))) : (arr_7 [i_1] [i_1 - 1])))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_4)))))) : (max((2068923371), (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_1])), (var_0)))))));
                            arr_14 [i_1] [(short)17] [(short)13] [i_3] [(short)13] = ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_2 + 2] [i_3] [i_4 + 2] [16U])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0 + 1] [i_2 + 3] [i_3] [i_4 - 1] [i_3] [i_4]))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_2 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2 + 2]))) : (arr_9 [i_0 - 1] [i_2 + 2] [i_0 - 1] [i_4 - 1]))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(max((max((((/* implicit */int) (_Bool)1)), (-2068923363))), (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)118)))))))))));
                        }
                        var_17 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_3])) : (1032192))) : (((/* implicit */int) arr_3 [i_3] [i_1 - 1]))))), (((unsigned int) max((((/* implicit */unsigned char) var_3)), (var_7))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) 1032199))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (((((/* implicit */_Bool) -7881327711085263421LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2068923357)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned int) var_6)), (var_11)))))))))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((int) var_10))));
}
