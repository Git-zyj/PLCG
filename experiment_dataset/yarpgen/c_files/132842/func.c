/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132842
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
    var_20 -= ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */signed char) min((((unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned short) var_8))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((_Bool) arr_1 [i_0 + 2] [i_0 - 1])))) * ((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_22 &= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_14)), (0U)))), (((arr_0 [i_2] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) % (((/* implicit */unsigned long long int) (-(1309709606U))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) var_3);
                        arr_10 [i_0] [i_0] [(_Bool)1] [i_2] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)125)) <= (((/* implicit */int) (short)32135)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (var_5)))), (min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])))))) : (min((min((arr_5 [i_0]), (arr_6 [i_1] [(signed char)10]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)30)), ((unsigned short)46863))))))));
                        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) 1309709606U));
                        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((arr_8 [(short)6] [i_1] [i_2] [i_3]) << (((((/* implicit */int) var_6)) - (25742)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_12 [i_2 - 1] [i_2 - 1] [i_0 + 2])))))));
                        var_27 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (var_13)))));
                        arr_14 [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 18))) ? (((/* implicit */int) (short)-31627)) : (-991240090)));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_4 + 2])) >> (((((/* implicit */int) arr_3 [i_4 - 1])) - (63309)))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_29 &= ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (short)1160)), (0U))), (((/* implicit */unsigned int) arr_16 [i_0] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 2]))));
                        arr_17 [(short)3] [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */unsigned int) ((arr_11 [i_2] [i_1] [i_2] [i_5 + 2]) * (((/* implicit */int) ((4294967276U) < (((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 2])))))));
                    }
                    arr_18 [i_0] [7U] [10LL] [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_13 [i_1])), (max((((/* implicit */long long int) var_7)), (9223372036854775807LL))))) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [6U] [6U] [(unsigned char)7])))));
                    var_30 = (~(-576460752303423488LL));
                }
            } 
        } 
        arr_19 [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11049))))))))) ? (((/* implicit */int) (signed char)0)) : ((((+(var_3))) * (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]))))));
    }
    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((unsigned char) var_4)))));
    var_32 = ((/* implicit */unsigned char) var_3);
}
