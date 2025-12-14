/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151131
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
    var_20 = ((/* implicit */long long int) ((((4818335249546362021ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36557)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)85)))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13628408824163189625ULL)) && ((!(((/* implicit */_Bool) var_6)))))))) ^ (0ULL))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(var_7)));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_18)))) < (((/* implicit */int) var_16)))) ? ((-(((/* implicit */int) var_16)))) : (((var_13) ? (((/* implicit */int) (signed char)33)) : (arr_4 [i_1] [i_1])))));
        var_24 &= ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) < (((/* implicit */int) (unsigned short)5)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned short) arr_0 [i_1] [i_2]))));
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */short) var_3);
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_26 = min(((unsigned short)14664), (((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17)))) < ((+(((/* implicit */int) arr_14 [i_1] [i_2] [i_1]))))))));
                    var_27 = var_18;
                }
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_28 *= ((/* implicit */unsigned long long int) ((var_7) && (((/* implicit */_Bool) (+(min((((/* implicit */int) (_Bool)1)), (arr_13 [i_1]))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) < ((-(((/* implicit */int) (_Bool)0))))))) < (((/* implicit */int) (((+(((/* implicit */int) var_6)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14681))))))))));
                        var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (-491006090)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-12)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) && (((arr_3 [6]) || (((/* implicit */_Bool) arr_16 [(signed char)2] [i_2 + 1])))))))));
                        var_32 = var_12;
                    }
                    for (unsigned short i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_3] [i_5] [(_Bool)1])) && (((/* implicit */_Bool) var_2)))))))))))));
                        arr_25 [i_1] [i_1] [i_1] [(_Bool)1] [i_5] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535));
                        var_34 = (+(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_6))))) ? ((-(var_9))) : ((~(((/* implicit */int) var_10)))))));
                    }
                    var_35 *= (unsigned char)55;
                }
                arr_26 [i_1] [i_1] = var_2;
            }
            for (int i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                arr_30 [i_9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_23 [i_1] [i_1] [6] [i_2 - 2] [i_2] [i_9])) : (((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (unsigned short)14664)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))));
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((int) (-(((/* implicit */int) (_Bool)0))))))));
            }
        }
    }
}
