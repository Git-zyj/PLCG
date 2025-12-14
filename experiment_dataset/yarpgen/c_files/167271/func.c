/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167271
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
    var_13 = ((/* implicit */unsigned short) (!(var_3)));
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_4))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max(((~(((((/* implicit */int) var_10)) * (((/* implicit */int) var_5)))))), (((/* implicit */int) var_7))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (short)1300)))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : ((-(((/* implicit */int) var_10))))));
        arr_9 [i_1] = ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned short) var_2)), (arr_7 [i_1]))), (var_9))), (max((((/* implicit */unsigned short) var_1)), (max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)0))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_16 [i_2] [7ULL] = ((/* implicit */unsigned char) (-((+((-(((/* implicit */int) (unsigned char)211))))))));
                var_15 = ((/* implicit */unsigned char) max((max((arr_10 [i_2]), (arr_10 [i_3]))), (((/* implicit */short) var_3))));
                arr_17 [i_3] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_2] [i_3] [i_3]))))))), (arr_12 [i_2])));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) arr_12 [i_3])) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2])))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))) : (arr_14 [i_3]))))))))));
            }
        } 
    } 
}
