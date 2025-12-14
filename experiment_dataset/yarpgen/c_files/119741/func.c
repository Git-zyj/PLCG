/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119741
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
        var_12 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 8802217568552193237ULL)) && (((/* implicit */_Bool) (unsigned char)14)))))))), (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_11)) ? (8802217568552193237ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)3])))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-6)), ((unsigned short)27004)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)4]))) ^ (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12288)) ? (((((/* implicit */_Bool) 2097151)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((_Bool) arr_0 [(unsigned char)2])))))));
        var_14 = ((/* implicit */int) min((((long long int) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)12288))))), (((/* implicit */long long int) (unsigned short)21))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned short) max((((var_3) != (((/* implicit */long long int) ((arr_11 [i_1] [i_2] [i_3 + 2] [i_3]) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [6U]))))))), (arr_11 [i_1] [i_3] [i_3] [4])));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_21 [(short)9] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_13 [i_2]);
                                arr_22 [(short)10] [i_2] [i_3 - 2] [i_3 - 2] [i_3] [i_3] = ((/* implicit */_Bool) min((max((max((arr_10 [i_1] [(short)11] [i_1] [8U]), (((/* implicit */unsigned long long int) (signed char)63)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [(unsigned short)5]))) & (8271418654034914729ULL))))), (8802217568552193224ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((9644526505157358385ULL) >> (((var_6) - (1513794728U)))))))) ? (max((((/* implicit */int) ((short) var_5))), (((int) var_1)))) : ((-(var_1)))));
}
