/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15251
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
    var_17 = ((/* implicit */unsigned long long int) (signed char)6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (unsigned short)13526);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4101678356U)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((short) 9223372036854775807LL));
                        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) 193288938U)) ? (((((/* implicit */_Bool) var_11)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 4101678379U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45207))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((int) (unsigned short)14857)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                    }
                } 
            } 
            var_22 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_6 [i_0] [i_0] [i_0]));
            var_23 &= ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_15 [i_0] [i_0] [14LL] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) + (0ULL))))))), ((-(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_4] [i_0] [i_4] [i_4] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (arr_9 [i_0] [i_0] [i_4] [i_0])))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_4]))))), (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_4] [i_0] [i_0]) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_4] [i_4] [i_0])) - (((/* implicit */int) var_4))))), (((((/* implicit */long long int) arr_13 [i_0] [i_0])) + (arr_6 [i_0] [i_0] [i_4]))))))));
        }
        for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            var_25 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0])))));
            var_26 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_5] [i_5 + 2] [i_5]))));
            arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(18446744073709551593ULL)))) ? (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_5 - 2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 296237757U)))))));
            var_27 = ((/* implicit */int) var_11);
        }
        var_28 *= ((/* implicit */unsigned char) ((1023ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16487)))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (arr_19 [i_0] [i_0])))) : (var_16)))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)32764)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (var_4)))))))));
    }
    /* vectorizable */
    for (short i_6 = 3; i_6 < 13; i_6 += 4) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned int) (+(9223372036854775807LL)));
        var_30 -= ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (_Bool)0)))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -817572008)) ? (8474644937751237150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    }
}
