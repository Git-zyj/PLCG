/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153971
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_13)))) | (((((/* implicit */_Bool) max((var_1), (var_1)))) ? ((~(((/* implicit */int) (signed char)48)))) : (-382131378)))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */short) var_3);
            var_16 &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-2677)) ? (((((/* implicit */int) (signed char)-80)) + (382131351))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))));
            var_17 ^= ((/* implicit */_Bool) (~(-382131383)));
            arr_5 [i_0] [(signed char)18] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -382131378)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (7499756237546871189ULL))))))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))) == (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44034))) : (18446744073709551610ULL))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)58681))))) & (((((/* implicit */unsigned long long int) 1962723089241992268LL)) | (arr_1 [i_2]))))));
            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */short) arr_8 [(unsigned short)20]))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_10)) ? ((+(4830188080445195143ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0])))))));
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_19 += ((/* implicit */unsigned short) min((var_3), (arr_11 [15LL] [i_0])));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3] [(unsigned short)1] [(signed char)10])) | (-382131385)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_1 [i_4]))) : (((/* implicit */unsigned long long int) (~(arr_18 [i_5] [i_4] [i_3] [i_0])))))), (((/* implicit */unsigned long long int) var_7)))))));
                        var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-19404)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [1U] [14LL] [i_4] [i_5] [i_3] [i_4])))) ^ (((/* implicit */int) max(((signed char)-118), ((signed char)127))))))) ? (min((18446744073709551610ULL), (((/* implicit */unsigned long long int) -2272090728676958855LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [(signed char)8] [i_4]))))) - (arr_13 [i_0] [i_5 + 1] [i_5] [i_5 - 1]))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_4))));
        }
    }
    var_23 ^= ((/* implicit */int) (_Bool)1);
}
