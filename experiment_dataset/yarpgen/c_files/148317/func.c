/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148317
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */signed char) ((unsigned char) max((max(((unsigned short)29762), ((unsigned short)29741))), (((/* implicit */unsigned short) ((unsigned char) var_2))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 3; i_4 < 11; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_2 + 2])))) * (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned short)19189))))));
                                var_17 = (unsigned short)24009;
                                arr_11 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) var_11))), (((unsigned int) arr_1 [i_4]))));
                                arr_12 [i_4 - 2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [2U] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) ^ (255U))))), (((/* implicit */unsigned int) arr_8 [(short)8] [i_3 + 1] [i_2] [i_1] [i_0]))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                            {
                                var_18 ^= ((/* implicit */signed char) max((((184673450U) | (2100138191U))), (((/* implicit */unsigned int) ((unsigned char) arr_8 [i_5 + 3] [i_5] [i_3 - 1] [i_2 - 1] [i_2])))));
                                var_19 ^= min((((/* implicit */long long int) max((max((arr_6 [i_0] [i_1] [i_2] [i_5]), (((/* implicit */unsigned short) (signed char)-1)))), (max((((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_2 - 1] [i_3] [i_5])), ((unsigned short)35791)))))), (max((((/* implicit */long long int) (unsigned char)255)), (-1LL))));
                                arr_15 [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_0)), (arr_6 [i_0] [i_2] [i_3 - 4] [i_5]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0]))))))))) / (min((((arr_13 [i_0] [i_1] [i_1] [i_3 + 3] [i_5 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (arr_2 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [5U] [5U] [i_2] [i_3 - 3]))) : (1LL))))));
                                arr_16 [i_1] = max((-6315647834043417114LL), (min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (arr_2 [i_0] [i_1] [i_0]))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 4; i_6 < 12; i_6 += 3) 
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)52077)) : (((/* implicit */int) (unsigned short)65535))))) < (((((/* implicit */_Bool) -6776184813842142489LL)) ? (1119160603U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                                arr_19 [i_0] [i_0] [i_1] [(unsigned short)8] [i_2 + 2] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_6 - 2] [i_3] [i_2 + 3] [i_3 + 3]))) * (arr_3 [i_1] [i_1])));
                            }
                            arr_20 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) 2718355764321392788ULL);
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)3))) && (((/* implicit */_Bool) (unsigned short)65523)))))) < (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (var_7))), (((((-6315647834043417114LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_7 [i_0] [i_1])) - (88)))))))));
            }
        } 
    } 
    var_21 = min((max((min((((/* implicit */long long int) var_4)), (var_7))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)255)), (var_11)))))), (var_13));
    var_22 = ((/* implicit */signed char) min(((short)31), (((/* implicit */short) max((min((((/* implicit */signed char) var_9)), (var_5))), (((/* implicit */signed char) ((var_3) >= (var_6)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        for (short i_8 = 1; i_8 < 21; i_8 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) / (-5381036818993075502LL)))) ? ((+(((/* implicit */int) (unsigned short)52077)))) : (((/* implicit */int) (unsigned char)255))))), (((((min((arr_22 [i_7] [i_8]), (((/* implicit */long long int) arr_29 [(unsigned char)16])))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)183)))) - (179))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_9 = 4; i_9 < 24; i_9 += 2) 
                {
                    var_24 ^= ((/* implicit */unsigned long long int) ((arr_32 [i_9]) / (((/* implicit */long long int) ((/* implicit */int) ((1LL) > (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [5U] [i_7])))))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((arr_32 [i_9]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))))))));
                    arr_33 [13ULL] [i_8] [i_9] [i_9 - 3] = ((/* implicit */unsigned int) arr_28 [i_8]);
                    arr_34 [i_8] = ((/* implicit */long long int) (unsigned char)207);
                }
                arr_35 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)29)) + (((/* implicit */int) (unsigned char)149))))) + (((unsigned long long int) arr_28 [i_8]))));
            }
        } 
    } 
}
