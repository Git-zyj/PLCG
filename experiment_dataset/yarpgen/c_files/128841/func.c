/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128841
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
    var_18 = ((/* implicit */short) var_1);
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_7))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 576460202547609600ULL))));
        var_22 = ((((/* implicit */_Bool) max((536854528), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) 1071846372U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))))));
        var_23 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_0 + 1] [(signed char)3])))) == ((+(((/* implicit */int) arr_1 [i_0 + 2]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) ((_Bool) var_17));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) * (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) : ((~(((/* implicit */int) arr_1 [i_0 + 2]))))));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) arr_3 [i_0 + 2] [i_2]);
            /* LoopSeq 2 */
            for (signed char i_3 = 4; i_3 < 13; i_3 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) : (1071846372U)));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_0))));
                var_29 = ((/* implicit */long long int) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 3] [i_3] [(signed char)13]))))) * (((/* implicit */int) arr_1 [i_3])))));
            }
            for (signed char i_4 = 4; i_4 < 13; i_4 += 3) /* same iter space */
            {
                var_30 -= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (1071846348U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 - 4])))))));
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [13])), (max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(_Bool)1])) < (((/* implicit */int) arr_0 [i_0] [i_4]))))))))))));
                var_32 -= ((/* implicit */unsigned short) min((min((max((var_3), (3511432575U))), (((/* implicit */unsigned int) (unsigned short)0)))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_4 - 4])) < (((/* implicit */int) arr_2 [i_0 + 1])))))) * (((unsigned int) var_2))))));
            }
            var_33 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_0)))));
        }
    }
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) 18446744073709551615ULL)))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 - 1]))));
            var_36 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_5] [i_6])) : (((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_5] [i_6]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_5 + 1]), (arr_1 [i_5 + 1])))))));
            var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (max((var_7), (((/* implicit */long long int) arr_1 [i_5]))))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_6]))))), ((~(var_3))))) : (max((arr_3 [i_5] [i_6]), (arr_3 [i_6] [i_5])))));
        }
        for (int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */_Bool) arr_0 [i_5 - 1] [i_5 + 2]);
            var_39 = ((((/* implicit */_Bool) (unsigned short)40891)) ? (((/* implicit */int) (unsigned char)77)) : (-1));
        }
        var_40 = ((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_5] [i_5]);
    }
}
