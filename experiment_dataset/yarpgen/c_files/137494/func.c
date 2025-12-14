/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137494
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2]))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                            {
                                arr_13 [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_1 [(short)1] [(short)1])) ? (235484008U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (2585740557U)))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_3 [i_1]))), (arr_12 [i_3] [i_3] [i_1 - 1] [i_3] [3LL])))) ? ((-(((int) var_0)))) : (((/* implicit */int) (!((_Bool)1))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                            {
                                arr_17 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
                                arr_18 [i_0] [i_1 + 1] [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & ((~(((/* implicit */int) (_Bool)1))))));
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */long long int) var_9)) : (-9223372036854775806LL)))));
                            }
                            arr_19 [i_2] [(unsigned char)15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 1])) ? (arr_16 [i_0] [i_1 - 2]) : (arr_16 [i_0] [i_1 - 1])))) | ((~((((_Bool)1) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)29017))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 - 1])))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)63));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_23 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)15)), (3547161272U)));
        arr_24 [i_6] &= ((/* implicit */unsigned long long int) max((((((((/* implicit */unsigned long long int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])) <= (5767562930345217056ULL))) ? (((((/* implicit */int) arr_8 [i_6] [i_6] [(unsigned char)6] [(unsigned short)13] [i_6])) & (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 16372342809262815922ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_4 [i_6]))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        arr_27 [i_7] = ((/* implicit */_Bool) ((18446744073709551611ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)13)) - (((/* implicit */int) var_11)))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(arr_6 [i_7] [i_7] [i_7] [i_7]))))));
    }
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        arr_31 [11ULL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max(((short)-13536), (arr_29 [i_8] [i_8])))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */short) ((max((max((10206699014778731819ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)37))))))) * (((/* implicit */unsigned long long int) arr_6 [i_8] [i_8] [i_8] [i_8]))));
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_8 [i_8] [i_8] [i_8] [i_8] [i_8]), ((short)-32300)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        var_24 = ((/* implicit */_Bool) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_8])))))));
        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)19219))));
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            {
                var_26 = ((/* implicit */short) ((_Bool) var_8));
                var_27 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_1 [i_9] [i_9])))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (_Bool)1))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) > (((int) arr_2 [i_9]))));
                arr_38 [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9] [i_10] [i_9] [i_10] [i_9] [i_9] [i_9])) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)19229)))) : (((var_8) ? (((/* implicit */int) arr_1 [i_10] [i_10])) : (((/* implicit */int) (short)0))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-24690))))))) : (((((((/* implicit */_Bool) (short)-6)) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) + (var_16))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -1LL)) ? (7477576311381632500ULL) : (((/* implicit */unsigned long long int) 3623910644795821559LL))))));
    var_31 = ((/* implicit */short) ((unsigned int) var_1));
}
