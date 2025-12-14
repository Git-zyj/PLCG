/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166589
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)90))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        var_16 = ((/* implicit */_Bool) min((min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 + 1]))), (arr_0 [i_0 - 1] [i_0 + 1])));
        var_17 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) arr_0 [i_0 - 1] [i_0 + 1])));
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_2])), (544587115U))))))) <= (((/* implicit */int) arr_7 [i_2]))));
                    var_20 = ((/* implicit */long long int) arr_0 [i_0 - 1] [i_1]);
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min((min(((~(-1946536515))), ((+(((/* implicit */int) arr_7 [i_0])))))), (((/* implicit */int) ((signed char) var_0)))));
                    var_21 += ((/* implicit */signed char) arr_7 [i_2]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        var_22 &= ((/* implicit */long long int) ((arr_9 [i_3 - 1]) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1]))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            arr_13 [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) -3355010624025770712LL))) ? (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */unsigned int) 19802729)) : (arr_12 [i_3] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 + 1] [i_4 + 2])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                arr_18 [i_3] [i_4] [i_5] = ((/* implicit */short) (+(((3750380157U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)30053)))))));
                var_23 += ((/* implicit */signed char) ((long long int) arr_11 [i_5]));
                var_24 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_4 + 3])) ? (1043682495860919538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30053)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 + 1] [i_5] [i_5]))) : (arr_12 [i_3 + 1] [i_5] [i_5]));
                arr_19 [i_5] |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_4] [i_4] [(unsigned char)0]))));
            }
        }
        arr_20 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_3] [5] [16ULL] [i_3 + 1])) > (((/* implicit */int) arr_17 [i_3] [(unsigned short)17] [i_3]))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_17 [i_3] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (unsigned char)111))));
        var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_17 [(short)5] [i_3 - 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1]))) : (8769759346312653675LL)))));
    }
    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_6))) : (((/* implicit */unsigned long long int) (-(var_11)))))))));
}
