/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133276
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 |= ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) / (max((-4416170645647694067LL), (-1091488593907899052LL)))));
        var_17 = ((/* implicit */short) ((min((max((((/* implicit */long long int) (_Bool)1)), (1091488593907899052LL))), (((/* implicit */long long int) ((-1091488593907899047LL) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) / (((/* implicit */long long int) ((/* implicit */int) (((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) var_13))))) != (-4416170645647694080LL)))))));
        var_18 = ((max((4416170645647694073LL), (((/* implicit */long long int) (_Bool)1)))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((long long int) var_13)))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_20 *= ((/* implicit */long long int) min((((unsigned short) var_11)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14)))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_1] [i_1] [i_4] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) max(((short)-16629), ((short)7989)))), (min((arr_10 [i_4] [i_4] [i_3 + 1] [i_4]), (((/* implicit */unsigned short) (_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) min((((unsigned short) ((long long int) -2154656446571635493LL))), (((unsigned short) ((long long int) arr_11 [i_1] [i_2] [i_3])))));
                        arr_19 [i_2] [i_4] [i_4] [i_4] [i_2] [i_1] = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1091488593907899039LL))))), (((unsigned short) (unsigned short)63627)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_4] [i_6] [i_3] [i_6] [i_6] [i_2] [i_6] = ((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)));
                        arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) (+(((4416170645647694086LL) << (((/* implicit */int) var_13))))));
                        var_21 |= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == ((-(((/* implicit */int) (_Bool)1))))))), ((-(((/* implicit */int) ((_Bool) var_0)))))));
                        var_22 -= ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_21 [i_3 + 1] [i_6] [i_3] [i_4] [i_6] [i_3] [i_6])))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) min((((/* implicit */short) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_6])), ((short)-16629))))))))));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_29 [i_1] [(_Bool)1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (+(max((((long long int) arr_16 [i_1] [(_Bool)1] [(_Bool)1] [i_7] [i_1])), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535)))))))));
                    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-28842))))))))));
                    arr_30 [i_1] [(short)2] [i_2] [i_3] [i_3] [i_7] = ((/* implicit */_Bool) ((((arr_16 [i_3 + 1] [i_3] [(unsigned short)11] [i_3 + 1] [i_3 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_20 [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1]))))));
                    var_25 += ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (short)0)))))) % (min((1091488593907899006LL), (((/* implicit */long long int) (_Bool)1)))))), (((long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_5 [i_2] [i_7])))))));
                }
            }
        }
        /* LoopSeq 1 */
        for (short i_8 = 3; i_8 < 11; i_8 += 4) 
        {
            var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) + (max((arr_4 [i_8 + 1]), (max((((/* implicit */long long int) var_3)), ((-9223372036854775807LL - 1LL))))))));
            arr_34 [i_8] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((short) -3681985557609287112LL))), (((((/* implicit */long long int) ((/* implicit */int) var_15))) % (arr_27 [i_8]))))), ((-(((long long int) (unsigned short)12078))))));
        }
        arr_35 [i_1] = ((/* implicit */long long int) ((unsigned short) ((short) ((long long int) arr_17 [6LL] [i_1]))));
    }
    var_27 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) var_13)))));
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) (unsigned short)53466)) == (((/* implicit */int) (short)0))))), (((short) min((var_9), (((/* implicit */short) var_0))))))))));
}
