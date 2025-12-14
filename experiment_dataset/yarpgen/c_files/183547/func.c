/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183547
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (unsigned short)9619)) : (((/* implicit */int) (unsigned char)244))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9161728612740781556ULL)) ? (((/* implicit */int) var_2)) : (533278886)))) ? (min((var_1), ((-2147483647 - 1)))) : (var_9))) : (((int) max(((unsigned char)11), (((/* implicit */unsigned char) var_17)))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(var_4))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_23 *= ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) 9285015460968770035ULL)) ? (9161728612740781580ULL) : (((/* implicit */unsigned long long int) arr_1 [5ULL])))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)201)) | (((/* implicit */int) (unsigned char)249)))))))));
            arr_7 [(signed char)19] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) max((79430398), (((/* implicit */int) (short)-15901))))) : (min((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL))))))) ? (((unsigned int) ((((/* implicit */int) var_12)) / (var_9)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_2 [(signed char)14]))) ? ((-(((/* implicit */int) (unsigned char)201)))) : ((+(-1807897716))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_24 = ((/* implicit */short) -9223372036854775796LL);
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_0])), ((short)(-32767 - 1))))) ? (9285015460968770035ULL) : (((/* implicit */unsigned long long int) (~(arr_9 [i_2] [i_0])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) (short)-1)) : (arr_1 [i_2]))) : (((/* implicit */int) arr_8 [i_0]))))))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) 4294967295U);
                        arr_18 [(short)15] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)5)) - (((((/* implicit */int) (unsigned char)249)) - (((/* implicit */int) arr_4 [i_0] [i_0]))))));
    }
}
