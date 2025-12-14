/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161060
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 *= ((/* implicit */_Bool) max((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (((/* implicit */int) (short)28280)) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) ((short) min((arr_0 [i_0]), (arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) 0ULL))) : (((/* implicit */int) ((short) (_Bool)1)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (12LL))), (((arr_7 [i_1 - 1] [i_1 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))))))))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((arr_5 [0ULL]) ? (max((((arr_4 [i_2 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (var_15))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_5 [(_Bool)1]))))))) : (((((/* implicit */_Bool) max((-7508592353950023662LL), (((/* implicit */long long int) arr_1 [i_1 - 1]))))) ? (((/* implicit */long long int) ((arr_0 [i_1]) ? (((/* implicit */int) arr_3 [4ULL])) : (((/* implicit */int) var_17))))) : (((((/* implicit */long long int) arr_8 [1] [1] [i_2 + 2])) % (arr_7 [i_1 - 1] [i_2 + 1]))))))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_6 [i_4] [i_3] [i_4])) - (7508592353950023662LL)))) ? ((+(arr_7 [(_Bool)1] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_4])))))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
                    arr_16 [i_1] [i_3] [i_4] [i_4] = ((/* implicit */signed char) arr_12 [i_3 + 1] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_9 [i_6] [i_5]);
                        var_25 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_3))) << ((((+(var_3))) - (4067072222U))));
                        arr_20 [i_4] [i_3] [i_1] [i_5] = ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_5 [i_1])));
                        arr_21 [i_1] [i_3] [i_4] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */int) ((signed char) arr_18 [i_1 - 1] [i_3] [i_4] [i_4] [i_1] [i_6]));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_3 + 2] [i_4] [i_5] [i_7] [i_1] [i_3 - 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))));
                        arr_25 [i_7] [i_1] [i_4] [i_1] [0LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])) ? (arr_7 [i_5] [i_3 + 2]) : (arr_7 [i_3 + 1] [4ULL])));
                        arr_26 [i_7] [i_1] [i_1] [(short)0] = (+(arr_6 [i_1] [i_3] [i_3 + 1]));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_8] [i_4])))) + (((/* implicit */int) var_2)))))));
                    arr_29 [i_1] [i_1] = ((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1]);
                }
            }
            arr_30 [i_1] [i_3] [i_1 - 1] = ((/* implicit */unsigned int) arr_9 [i_3 + 2] [i_1 - 1]);
            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32142)) ? (var_6) : (((/* implicit */unsigned long long int) ((unsigned int) var_6)))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) var_1);
            var_30 *= ((/* implicit */_Bool) ((1836769633) - (((/* implicit */int) (short)6305))));
        }
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned char)100)))), (((/* implicit */int) (unsigned short)26434)))))));
    }
    for (unsigned short i_10 = 2; i_10 < 23; i_10 += 1) 
    {
        arr_37 [i_10 - 1] [(unsigned char)8] = ((/* implicit */unsigned long long int) arr_35 [i_10] [i_10]);
        var_32 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)39101)), (((((/* implicit */_Bool) 10594334349773060481ULL)) ? (286672425U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25009)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-5598174) : (((/* implicit */int) (short)-21557))))), (0ULL)))));
    }
    for (unsigned long long int i_11 = 2; i_11 < 24; i_11 += 4) 
    {
        var_33 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_39 [i_11 + 1]))))));
        arr_40 [(_Bool)1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), ((~(((unsigned int) var_5))))));
        arr_41 [i_11] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26434)) ? (((/* implicit */int) (unsigned short)26434)) : (((/* implicit */int) arr_38 [i_11 + 1] [i_11 - 1]))))), (var_15)))));
        var_34 = ((/* implicit */_Bool) ((((((_Bool) arr_39 [i_11])) || (((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (max((((/* implicit */int) ((_Bool) (signed char)127))), (var_7))) : (((/* implicit */int) ((((((/* implicit */int) var_9)) < (((/* implicit */int) var_2)))) && (((/* implicit */_Bool) ((unsigned int) 9223372036854775798LL))))))));
    }
    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((unsigned int) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (var_14)))))))))));
}
