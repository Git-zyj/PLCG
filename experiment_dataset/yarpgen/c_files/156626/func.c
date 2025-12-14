/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156626
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_7 [i_1] [i_1 + 1] [i_2]), (((/* implicit */short) arr_6 [i_2] [i_0] [i_2]))))), (2819822505901419913ULL)));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((15626921567808131722ULL) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) ^ (15875055006205594056ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_0]))) : ((-((-(var_9)))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_0])))) ? (arr_9 [i_0] [i_1] [i_1 + 2] [i_0]) : (((/* implicit */int) var_11)))))));
                        arr_10 [i_0] [i_2] [i_1 - 1] [i_2] = ((/* implicit */short) arr_0 [i_1]);
                    }
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_13 [6LL] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) max(((short)20571), (((/* implicit */short) arr_8 [i_2] [i_2]))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-18)))) & (((/* implicit */int) arr_8 [i_2] [i_1])))))));
                        arr_14 [i_2] [10U] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                        var_18 = var_7;
                    }
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_19 = var_6;
                        var_20 &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_2] [i_0])) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))));
                        var_21 = ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_2] [i_1 + 1] [i_5])))))));
                        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [(short)2])) ? (((/* implicit */int) arr_1 [(unsigned short)4])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_4 [i_0] [i_1 - 1] [14]))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_20 [i_6 + 1] [i_2] [i_2] [7] = ((/* implicit */unsigned char) (+(((arr_3 [i_1 + 1] [i_1 + 1]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_1] [(unsigned short)12] [i_0] [i_2] [(unsigned short)12] [9] = ((/* implicit */long long int) (+((-(((/* implicit */int) var_1))))));
                            var_23 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_7), (((/* implicit */short) var_11))))) & ((~(((/* implicit */int) arr_1 [i_0])))))))));
                            var_24 += ((/* implicit */long long int) min((min(((+(arr_9 [i_0] [i_2] [(_Bool)1] [i_0]))), (((/* implicit */int) arr_22 [i_6 + 1] [i_7] [(signed char)4] [i_7] [i_1 + 2])))), (arr_9 [i_6 + 1] [i_1 + 1] [i_1 + 1] [i_0])));
                            var_25 = ((/* implicit */long long int) arr_8 [i_2] [i_1]);
                        }
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) -911849539);
                            var_27 = ((/* implicit */unsigned int) (((~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_0)))))) != (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_3 [i_1] [15ULL])), (var_9))) != (((/* implicit */unsigned long long int) arr_26 [(signed char)8] [i_2])))))));
                        }
                    }
                }
                var_28 = ((/* implicit */unsigned long long int) (!(arr_6 [i_0] [i_0] [i_0])));
                var_29 |= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_9 [i_0] [i_1 - 1] [i_0] [i_0]))));
            }
        } 
    } 
}
