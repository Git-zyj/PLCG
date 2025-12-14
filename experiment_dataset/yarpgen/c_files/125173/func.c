/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125173
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_13 ^= ((/* implicit */unsigned long long int) max((max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_7 [i_0 - 1] [i_0 - 3] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0 - 3])), (var_5)))))))));
                    var_14 = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_8)), (var_5))) / (((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 2] [i_1] [i_0])) ? (arr_6 [(_Bool)1] [i_1] [i_1] [i_1 + 1]) : (var_7)))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : ((+(((/* implicit */int) (!((_Bool)1)))))));
                    arr_8 [i_0] [i_0] [i_1] [i_1 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3]))))) : (max((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1 + 1] [i_0] [8LL]))))), (max((((/* implicit */long long int) (_Bool)0)), (8683494371002023996LL)))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_7 [(unsigned short)14] [(unsigned short)14] [6ULL])) ? ((+(3741551547094297407ULL))) : ((-(var_2))))) : (((/* implicit */unsigned long long int) max((max((var_6), (((/* implicit */long long int) arr_4 [9ULL] [i_1] [i_2])))), (max((((/* implicit */long long int) var_12)), (arr_3 [7U] [(unsigned short)7])))))))))));
                    var_16 -= ((/* implicit */unsigned int) var_12);
                }
                var_17 ^= ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_0)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_8)) : (arr_2 [i_1]))))))));
                var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1]))))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_1 - 1] [i_1 + 2]), (((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1]))))) : (((arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned int) var_1)), (var_7))))), (((/* implicit */unsigned int) var_4)))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_5)))) ? (var_11) : (max((var_11), (((/* implicit */unsigned int) var_4)))))) : ((-(var_5))))))));
}
