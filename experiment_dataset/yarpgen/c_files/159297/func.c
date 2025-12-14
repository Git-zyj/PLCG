/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159297
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
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((6569540622203844217ULL), (((/* implicit */unsigned long long int) var_12))))) ? (-3) : (10))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)246))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_8))))))) ? (arr_0 [3ULL] [i_2]) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)239)))) << (((((/* implicit */int) ((unsigned char) var_0))) - (64))))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((signed char) arr_3 [i_0]))), (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (var_2))))) == (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) * (arr_0 [(signed char)1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-544))) : ((-(arr_1 [i_0] [(signed char)1]))))))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(signed char)3] [(signed char)3])) && (((/* implicit */_Bool) (signed char)126)))))) * (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 - 1] [i_0 - 1])))))) ? (((/* implicit */int) (unsigned char)16)) : (min((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])), (((((/* implicit */int) arr_8 [(unsigned char)1] [7ULL] [(unsigned char)1])) / (arr_7 [i_0] [i_1] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
