/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134726
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
    var_20 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (0ULL)))) ? ((+(min((4ULL), (((/* implicit */unsigned long long int) (unsigned char)148)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))))))));
            var_22 = ((/* implicit */unsigned long long int) arr_4 [(unsigned short)7]);
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) -569839594)) || (((/* implicit */_Bool) (unsigned char)119))))))))));
            var_23 = ((/* implicit */signed char) (+(min(((-(((/* implicit */int) (signed char)8)))), (((/* implicit */int) var_16))))));
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) | ((~(var_14))))))));
        }
        var_25 = arr_6 [i_0] [(short)8] [i_0];
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-9)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
            var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(489671309407792667LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [9U]))) : (arr_0 [i_0] [i_3])))));
            var_28 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((short) var_3))) ? (min((arr_4 [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_3] [i_3])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-41)))))))));
        }
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
        {
            arr_15 [i_4] [i_4] [(_Bool)1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)92))))));
            arr_16 [(signed char)13] [i_4] [(signed char)13] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_4])) : (-1824347857))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_19 [i_0] [i_4] [i_4] = ((/* implicit */long long int) 18446744073709551615ULL);
                arr_20 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) -820237660);
                var_29 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 569839594)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0]))))), ((-(var_17))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_4 - 3] [i_4 - 2])))))));
            }
            var_30 = ((/* implicit */unsigned int) var_5);
        }
        arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1823132198)) > (18446744073709551615ULL)));
        arr_22 [i_0] = (-(((((/* implicit */int) (signed char)92)) << (((((/* implicit */int) (unsigned short)8752)) - (8740))))));
    }
    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_24 [i_6])) ? (arr_24 [i_6]) : (((/* implicit */int) ((((/* implicit */_Bool) 4ULL)) || (((/* implicit */_Bool) arr_24 [24]))))))), (max((arr_24 [i_6]), (min((((/* implicit */int) arr_23 [i_6])), (arr_24 [15LL])))))));
        var_32 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)-3)) | (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)31))))))));
        var_33 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-19)), (var_7)))) % (6ULL))) ^ (((/* implicit */unsigned long long int) (~((+((-9223372036854775807LL - 1LL)))))))));
    }
}
