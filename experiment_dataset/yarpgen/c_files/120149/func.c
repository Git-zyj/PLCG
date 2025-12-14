/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120149
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) % (1565566429U)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min(((short)-32145), (((/* implicit */short) var_13)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2729400867U)) ? (((/* implicit */long long int) var_5)) : (-144115188075855872LL)))) ? (var_17) : (((/* implicit */long long int) (+(var_5))))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4294967282U)) : (arr_1 [i_0] [i_0])))));
        arr_4 [(_Bool)1] &= ((/* implicit */unsigned int) 261632LL);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 821736608U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-25927))))) ? (arr_6 [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32144)))));
        var_20 |= ((/* implicit */short) ((signed char) ((unsigned int) var_7)));
        arr_7 [i_1 + 2] = ((/* implicit */unsigned int) (short)32144);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32159))));
    }
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */signed char) arr_10 [i_2]);
        var_22 = ((/* implicit */long long int) arr_6 [i_2]);
    }
    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */int) arr_5 [i_3])) != (((/* implicit */int) (short)-32145))))))) != (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32144))) >= (1565566420U)))), (((unsigned char) arr_9 [i_3])))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            arr_29 [i_4] [i_5] [i_7 - 1] &= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_3] [i_3 + 1])) > (((/* implicit */int) arr_14 [i_3] [i_3 + 1]))));
                            arr_30 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] = (-(arr_16 [i_3 - 1] [i_7 + 1]));
                            arr_31 [i_7] [i_5] [i_5] [14U] [i_4] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-32159))));
                            var_24 = ((/* implicit */signed char) -576460752303423488LL);
                        }
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_5)));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */_Bool) 3947158812U)) ? (9223372036854775807LL) : (arr_9 [i_3]))) > (((((/* implicit */_Bool) 3752402515U)) ? (-261632LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                        }
                        arr_35 [i_3] |= ((/* implicit */signed char) ((arr_25 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9)))));
                    }
                    var_27 ^= ((/* implicit */short) max((arr_6 [i_3 + 1]), (((/* implicit */unsigned long long int) min((576460752303423487LL), (((/* implicit */long long int) (short)25895)))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) / (var_4))))));
}
