/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146334
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
    var_15 ^= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12582))))) ? (min((((/* implicit */long long int) var_5)), (var_8))) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)36774)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) : (((/* implicit */unsigned int) max((16320), ((+(var_10))))))));
        var_16 = ((/* implicit */long long int) -611167603);
        arr_5 [i_0] = ((/* implicit */unsigned char) var_4);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_17 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_3)))) ? (arr_7 [0LL]) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) | (611167602)))))));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            var_18 *= ((/* implicit */unsigned long long int) ((short) (-(((((/* implicit */int) arr_3 [i_2 + 1])) / (-611167602))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */long long int) ((int) 7163589788466411252LL))) & (((long long int) 611167602)))) : (min(((-(0LL))), (((/* implicit */long long int) max(((unsigned short)28023), (((/* implicit */unsigned short) var_1)))))))));
            arr_12 [i_1] = ((/* implicit */long long int) 9125729755117834777ULL);
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_17 [i_1] = ((/* implicit */signed char) ((max((var_4), (((/* implicit */int) arr_3 [i_1])))) - (((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_3])))));
            var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) ((arr_2 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))), ((+(((/* implicit */int) arr_0 [i_3]))))));
            var_21 = ((/* implicit */unsigned short) var_10);
            arr_18 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (((((-8656863806485985108LL) + (9223372036854775807LL))) << (((((-611167603) + (611167663))) - (59)))))))) ? (((/* implicit */int) ((signed char) 0U))) : (611167602));
        }
        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 1) 
                {
                    {
                        arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((0) + (((/* implicit */int) arr_10 [i_4 - 3] [i_6 - 1]))))), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49433))))), (((unsigned long long int) (unsigned char)244))))));
                        var_22 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (6237114440189276921LL))))), (((/* implicit */long long int) (signed char)(-127 - 1)))));
                    }
                } 
            } 
            arr_28 [i_1] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4])) ? (0ULL) : (max((((/* implicit */unsigned long long int) (unsigned char)161)), (13774166496150154078ULL)))));
        }
        var_23 += ((/* implicit */long long int) (-(((int) (unsigned short)27709))));
        var_24 = ((/* implicit */long long int) ((unsigned char) min((arr_7 [i_1]), (((/* implicit */long long int) (signed char)3)))));
    }
}
