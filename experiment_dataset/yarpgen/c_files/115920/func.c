/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115920
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
    var_11 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_4)), (var_5)))), (max((7586668829724560631ULL), (((/* implicit */unsigned long long int) (unsigned short)11391)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (short)-27678))))), (min((((/* implicit */int) var_10)), (var_8))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */short) min((max((max((var_7), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((var_3), (arr_0 [i_2])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((-1641198642), (((/* implicit */int) var_10))))), (min((var_6), (((/* implicit */long long int) (_Bool)1)))))))));
                    var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) (unsigned char)1)), (arr_1 [(short)8] [i_1]))), (min((((/* implicit */unsigned short) (unsigned char)253)), (var_0)))))), (min((max((((/* implicit */unsigned long long int) (unsigned char)2)), (var_7))), (((/* implicit */unsigned long long int) max((3661993879U), (((/* implicit */unsigned int) 1641198632)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((min((((/* implicit */int) (signed char)0)), (1641198640))), (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (unsigned char)1)))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)32747)), (var_0)))), (max((((/* implicit */unsigned long long int) var_8)), (var_7)))))));
}
