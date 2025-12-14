/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135931
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
    var_19 *= ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) ((unsigned short) var_5))))))));
        var_20 ^= ((/* implicit */short) ((max((arr_0 [i_0]), (arr_0 [i_0]))) / (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_17)))), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (unsigned char)223)), ((unsigned short)37336))), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2])))))) % (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])) ? (arr_6 [i_0] [i_0] [i_1] [i_2]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (unsigned short)37349))))) ? (arr_0 [i_1]) : ((-(1291978055))))) ^ (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [(short)15] [i_3] [i_2] [5ULL] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_11)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [(unsigned char)16])))) - (((/* implicit */unsigned long long int) -1407919152)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)3)))))));
                                var_22 = ((/* implicit */int) ((12832635668666637058ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 + 2] [i_3 - 1] [9])) && (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_18)))))))) << (((((min((((/* implicit */unsigned long long int) var_18)), (var_1))) * (((/* implicit */unsigned long long int) max((arr_15 [i_3] [i_1] [i_3] [i_3] [i_4] [i_4] [i_3]), (((/* implicit */int) var_12))))))) - (4473278972697520873ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] = (((!(((/* implicit */_Bool) (+(arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_7 [(unsigned short)13] [17] [i_0] [i_0])))) : (arr_3 [i_0] [i_0] [3]));
    }
    var_23 = ((/* implicit */short) ((((int) (!(((/* implicit */_Bool) var_3))))) + (((/* implicit */int) var_17))));
}
