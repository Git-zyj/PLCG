/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122916
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
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_3)) : ((-(var_13))))) / (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_12))))))));
    var_21 = ((/* implicit */short) var_17);
    var_22 = ((int) (~(3741865262U)));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_4 [(unsigned short)17] [(short)11] [i_2 - 2])) : (553102050U)))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0 - 3] [i_1] [(unsigned char)8]), (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 3] [i_1] [(unsigned char)3]))))))))) * (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (var_16) : (((/* implicit */int) arr_6 [i_1] [i_2 - 1]))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_4)) : (0LL)))))));
                    var_25 |= arr_3 [16LL] [16LL] [(unsigned char)4];
                    var_26 = ((/* implicit */unsigned char) ((int) arr_1 [i_0]));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0 - 3] [i_0])), (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_17))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [(_Bool)1]) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [12])))))) / (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)12560))))))))))));
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_0 + 4] [i_0 + 1] [i_0 + 3]), (((/* implicit */unsigned int) (unsigned short)36669))))) ? (((/* implicit */int) arr_5 [i_0 + 1] [9] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1]))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)167)) ? (1331781521638059855LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28802)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) : (arr_7 [i_3] [i_3] [i_3])));
        arr_13 [i_3] = ((/* implicit */unsigned char) arr_8 [i_3]);
        var_29 = ((/* implicit */unsigned char) arr_5 [i_3] [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_3))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */signed char) min(((-(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_12))))))), (((/* implicit */int) (short)32767))));
        var_30 = ((/* implicit */signed char) max((var_16), (((/* implicit */int) ((4294967283U) > (((/* implicit */unsigned int) arr_22 [i_5])))))));
        var_31 |= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (-274485802) : (arr_22 [(unsigned char)6])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_5] [i_5])))))));
        arr_24 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)155))))) ? (((unsigned long long int) (short)-18265)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)36665)), (arr_22 [i_5]))))));
    }
}
