/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125865
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
    var_20 ^= ((/* implicit */short) min((((var_16) / (((/* implicit */unsigned long long int) ((long long int) (signed char)111))))), (((/* implicit */unsigned long long int) (short)6178))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (var_16) : (((/* implicit */unsigned long long int) -353184818897474085LL)))) : (((((/* implicit */_Bool) 353184818897474085LL)) ? (var_3) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max(((short)4), (var_19)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 2]))) : (min((arr_3 [5U] [(signed char)9] [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_2])))))) < (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) var_5)), (arr_4 [i_2] [i_0] [i_0])))) % ((-(((/* implicit */int) var_8)))))))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) min((min((-353184818897474085LL), (((((/* implicit */_Bool) 16777215U)) ? (arr_5 [i_2]) : (var_18))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [21U] [i_1])) : (((/* implicit */int) var_10))))))))));
                    var_22 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) 1589838010U)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (16777215U))) >> (((((((/* implicit */int) var_10)) | (((/* implicit */int) var_5)))) - (24809)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) var_17);
        var_24 = max((arr_2 [i_0] [i_0 + 2]), (((/* implicit */long long int) ((unsigned int) arr_4 [i_0] [i_0] [i_0]))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned char) (((!(((/* implicit */_Bool) 4278190089U)))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) 16777215U))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (((var_17) << (((((arr_3 [i_4] [i_4] [(_Bool)1]) + (7862898030131572019LL))) - (24LL))))))))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */short) max((var_5), (var_11)))), (min((arr_11 [i_4] [i_4]), (arr_11 [i_4] [i_4])))))), (((((/* implicit */_Bool) (short)-13376)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_4]))) : (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))))));
                arr_12 [i_3] = ((/* implicit */_Bool) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_16))), (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_3]))))) - (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_18)) ? (arr_5 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) 4278190099U)) ? (arr_5 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))))))))));
            }
        } 
    } 
}
