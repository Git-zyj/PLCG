/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139252
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
    var_16 = ((/* implicit */signed char) var_3);
    var_17 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)43794))))))));
    var_18 = (signed char)-113;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)21726)) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) (unsigned short)21732)) ? (1073741824ULL) : (6633940608466955178ULL))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_6)))))))));
                    var_20 ^= ((((/* implicit */_Bool) (signed char)-45)) && (((/* implicit */_Bool) max((arr_5 [i_2]), (arr_5 [i_0 + 1])))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1] [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (min((((/* implicit */unsigned int) (unsigned short)21746)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21746)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (var_1)))) ? (((((/* implicit */_Bool) arr_0 [3ULL] [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_0])))))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (~((-(var_4)))));
}
