/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102425
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
    var_17 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)240)) << (((((var_5) + (6032291102162849220LL))) - (7LL)))))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((3469879463U) >> (((var_13) - (1019445251723430460LL))))) : (((/* implicit */unsigned int) max((-1680768319), (((/* implicit */int) var_14)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) (unsigned char)145)), (var_13))) > (((/* implicit */long long int) ((-1624941387) & (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) ((6997105674090317960ULL) < (((/* implicit */unsigned long long int) arr_2 [i_0]))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) ((min(((+(var_13))), (((/* implicit */long long int) min((var_16), (var_4)))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((+(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned short) min(((-(arr_2 [i_1]))), (((/* implicit */long long int) var_11))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1] [i_1]))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))), (max((((/* implicit */long long int) 2147475456)), ((-9223372036854775807LL - 1LL)))))))))));
        arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_1])))))))));
        var_21 = ((/* implicit */unsigned char) 67104768);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */int) (unsigned char)49)), (arr_7 [i_1] [i_1]))) + ((-(arr_7 [i_1] [i_1])))));
    }
    for (short i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        var_22 = ((/* implicit */int) (((~(arr_11 [i_2]))) & (((((/* implicit */_Bool) arr_11 [i_2 - 2])) ? (arr_11 [i_2 - 2]) : (arr_11 [i_2 - 1])))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((signed char) ((arr_11 [i_2 - 1]) / (((/* implicit */unsigned long long int) arr_10 [i_2 - 2]))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((1595251483) >> (((((arr_6 [i_3] [i_3]) ? (var_12) : (((/* implicit */unsigned long long int) var_13)))) - (17255643612463170980ULL)))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-((+(arr_2 [i_3]))))))));
    }
    var_26 = ((/* implicit */_Bool) var_5);
    var_27 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)32)), ((~(((/* implicit */int) (short)-22319))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
    {
        for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (max((arr_14 [i_5] [i_4 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-127))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_15 [i_4] [i_4])))) ? (((/* implicit */int) min(((signed char)74), (var_2)))) : (((/* implicit */int) (unsigned char)112)))))));
                arr_20 [i_4] |= ((/* implicit */unsigned long long int) min((arr_17 [i_5 - 1]), (((/* implicit */unsigned short) (short)-9672))));
            }
        } 
    } 
}
