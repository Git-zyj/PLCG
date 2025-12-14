/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177874
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_1] [(_Bool)1])), (arr_0 [i_0])))) < (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])), (arr_7 [i_0] [i_0] [i_0])))))), (arr_6 [i_0]));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0] [i_0])) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned short)16303)))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2]))))), (max((((/* implicit */unsigned int) arr_6 [i_2])), (arr_3 [i_0] [i_1] [i_0]))))))))));
                    arr_11 [i_0] = ((/* implicit */_Bool) ((int) ((unsigned int) (unsigned char)222)));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) max((arr_9 [i_1] [i_1] [0LL]), (arr_9 [i_0] [i_0] [i_2])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [8LL]))) / (arr_3 [i_0] [9ULL] [i_2]))))), (max(((-(arr_3 [i_0] [i_1] [(_Bool)1]))), (((/* implicit */unsigned int) min((arr_6 [i_1]), (((/* implicit */unsigned short) arr_8 [i_2] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_18 = min((var_8), (((/* implicit */unsigned long long int) ((var_3) > (((/* implicit */int) ((var_9) > (((/* implicit */int) var_0)))))))));
}
