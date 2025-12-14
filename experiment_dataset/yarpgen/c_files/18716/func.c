/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18716
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_10 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) | (-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (((3352605868U) << (((/* implicit */int) arr_1 [i_0 - 1])))));
        var_11 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 185930104)))) ? (755349176049131508LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1293004027431127406ULL)) ? (((/* implicit */int) (unsigned char)198)) : (2023711755)))))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (arr_4 [(unsigned char)12] [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) 912258255U);
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)222))))) / (((/* implicit */int) var_7)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) var_4)) ? (var_5) : ((+(((/* implicit */int) arr_5 [i_1])))));
                    var_15 &= ((/* implicit */unsigned char) 540479126);
                }
            } 
        } 
    }
    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-101)) ^ (((/* implicit */int) (signed char)120))));
}
