/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176988
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0])))));
        var_14 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (2937116394U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned short)16383)))))));
        var_15 += ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    var_16 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32246))))))) >= (max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (var_11))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 4; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 4])) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 3])) : (((/* implicit */int) arr_3 [i_1] [i_1 - 4])))))));
        var_17 ^= 14038467238655940599ULL;
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 - 4] [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))))) : (var_5));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)1))))), ((((!(((/* implicit */_Bool) arr_6 [i_2])))) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (var_1) : (var_1))) : (((/* implicit */unsigned long long int) ((long long int) (short)(-32767 - 1))))))));
                        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((var_10), (((/* implicit */unsigned int) arr_4 [i_2] [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22624)))))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1377054946U))))) : (((/* implicit */int) ((unsigned short) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_2] [i_3])), (var_1)))))))));
                        arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)16442);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_3 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) (short)-32247)))) >> (((((((/* implicit */_Bool) (unsigned short)16382)) ? (((/* implicit */int) (short)-32246)) : (((/* implicit */int) arr_3 [i_6 - 1] [i_6 - 1])))) + (32259))))))));
                        arr_28 [i_8] [i_6] [i_6] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56728)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6])))))) : (3849553118676623369ULL)))));
                        var_21 += ((/* implicit */unsigned short) max((((/* implicit */int) arr_26 [i_6] [i_7 + 1] [i_7] [i_8] [i_7])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_6] [i_7] [i_8]))) : (281474976710655ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_8] [i_6]))))) : (((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
    }
}
