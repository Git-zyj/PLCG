/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168710
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)13152)) ? (((var_11) / (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) var_2))));
    var_18 = ((/* implicit */long long int) ((int) (unsigned short)0));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 1906114970)) ? (((/* implicit */unsigned int) 1906114944)) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15323)))))) ? ((-(((/* implicit */int) (short)13152)))) : (var_2)));
        var_19 -= ((/* implicit */unsigned int) 1906114944);
        var_20 = ((/* implicit */unsigned long long int) var_4);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) (+(var_2)));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1]) : (arr_1 [i_1])));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_22 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (1906114960) : (((/* implicit */int) var_4)))) - (arr_3 [i_1])))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (1906114960) : (((/* implicit */int) var_4)))) + (arr_3 [i_1]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_2] [i_1] [6LL] [i_2]))))))));
                            arr_17 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [20LL] [i_1] [(short)20] [i_4] [i_5])) ? ((-(1906114970))) : ((~(((/* implicit */int) var_5))))));
                            arr_18 [i_1] [i_2] [6] [i_3] [i_5] |= ((/* implicit */unsigned int) -68359058177276964LL);
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_11 [i_5] [i_2] [i_3] [i_4] [i_2] [i_2])) - (var_7))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-15324)))))))));
                        }
                        for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) << (((((/* implicit */int) (short)-15331)) + (15336)))));
                            var_26 *= ((/* implicit */unsigned char) ((((1906114971) != (-1906114927))) ? (((var_8) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                            arr_23 [i_2] [i_2] [i_3] [i_4] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_3] [i_6] [i_6] [i_3] [i_3] [i_6] [i_6])) ? (((((/* implicit */unsigned int) var_16)) - (arr_6 [i_2] [i_2]))) : (((/* implicit */unsigned int) var_14))));
                        }
                    }
                } 
            } 
        } 
        var_27 -= ((/* implicit */short) (-(arr_3 [(signed char)4])));
    }
}
