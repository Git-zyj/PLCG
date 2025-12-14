/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134066
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
    var_11 |= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)7])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))))));
        var_13 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [(signed char)11])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1))) % (((((/* implicit */_Bool) 805306368)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_15 = (((~(var_7))) < (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) ^ (((/* implicit */int) var_9))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (short)2016)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(-1778873266))))));
                        arr_14 [i_2] [i_3] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) arr_5 [i_2] [i_5]);
                        var_18 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (var_7))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2))))) == (((arr_12 [i_2] [i_2] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) min((arr_6 [i_2]), (((/* implicit */int) arr_2 [i_2] [i_2]))))) : ((~(-3083291499023308924LL)))));
        var_20 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_9)) ? (arr_12 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])))) < (((/* implicit */unsigned long long int) ((((arr_11 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))) : (var_6))) | (((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_2]))))))))))));
        var_21 = arr_3 [i_2];
        var_22 = ((/* implicit */short) arr_13 [(unsigned short)8] [i_2] [i_2]);
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)39648)), (-2123120585)))))))) >= (var_6)));
    var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (var_1)))) ? (((((/* implicit */_Bool) 293006337)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((max((((/* implicit */long long int) (unsigned short)19)), (-1039361436348014568LL))), (min((var_6), (var_1)))))));
}
