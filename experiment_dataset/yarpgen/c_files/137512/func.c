/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137512
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 |= ((/* implicit */signed char) max((((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_5))));
        var_16 = var_7;
        var_17 = ((/* implicit */unsigned int) min((var_17), (var_12)));
        arr_4 [(unsigned char)4] = ((/* implicit */_Bool) var_0);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) ((arr_14 [i_0] [i_2] [i_2] [i_2]) | (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])))))), (4294967286U)));
                            arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_1))))))) == (((((long long int) (short)-32745)) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0]))));
                            arr_16 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_3 + 2] [i_3] [i_1])) : (((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3]))))) < (((arr_10 [i_3 + 2] [i_2] [i_3 + 1] [i_2] [i_3 - 1]) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0]);
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_0)), (((short) var_11))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32754)) / (((/* implicit */int) (unsigned short)32640))))) * (arr_18 [i_5])))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)79)))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5])) || (((/* implicit */_Bool) arr_19 [i_5] [i_5]))))) >= (((/* implicit */int) max(((short)32767), (arr_19 [i_5] [i_5])))))))));
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 1]))))), (min((arr_18 [i_5 - 1]), (((/* implicit */unsigned long long int) arr_19 [i_5 - 1] [i_5 - 1]))))));
    }
    var_25 = ((/* implicit */signed char) max((var_14), (var_14)));
    var_26 = (-(var_7));
}
