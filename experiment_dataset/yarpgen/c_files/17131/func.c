/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17131
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
    var_20 &= ((/* implicit */unsigned short) -1306165719);
    var_21 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) - (var_11)))) : (((((/* implicit */_Bool) 9223372036854775799LL)) ? (17403402619928901148ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)122))))) : (arr_2 [i_0] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))));
                    var_22 = ((/* implicit */long long int) (((~(arr_2 [i_2 - 1] [i_2 + 2] [i_2 + 2]))) / (((/* implicit */unsigned long long int) ((var_9) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_23 = ((/* implicit */unsigned short) (+((~(arr_6 [i_0] [i_1] [i_3])))));
                    var_24 = arr_2 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0];
                }
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((var_1) - (var_11))) + (2147483647))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 11405862632948501719ULL)) ? (arr_2 [i_0] [i_1] [1U]) : (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_0] [(_Bool)1])))))) - (49459ULL)))));
            }
        } 
    } 
    var_25 = var_8;
    var_26 = ((/* implicit */short) ((6042617360243718473LL) <= (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_11)) : (max((var_0), (((/* implicit */long long int) var_6))))))));
}
