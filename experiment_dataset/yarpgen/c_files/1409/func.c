/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1409
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
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [(unsigned char)6] [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 - 3] [i_1] [i_2]))) : (var_10))))))));
                    arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_1] = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_7)))));
                    arr_7 [i_0] [i_0] = (+(((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (unsigned char)60)))) <= (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 - 2]))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_1 [i_0]))), (min((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)0] [i_1 - 1] [i_0]))) / (var_9))))))))));
                    arr_8 [i_0] [i_0 - 2] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((unsigned char) var_6)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0]))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2859420394647271942ULL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-108)), (var_11))))))));
    var_18 = ((/* implicit */signed char) var_11);
}
