/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12969
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [1LL])) / (var_14))), (((((/* implicit */int) arr_2 [(signed char)9])) % (-1148173531)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_2 [i_0]))))))) : (((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            arr_7 [(short)6] [i_1] [i_1] = var_7;
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (-(((unsigned long long int) max((((/* implicit */short) (unsigned char)255)), ((short)-32764))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_1 - 1] [i_0]), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_2] [(short)7] [i_3] [2LL] [i_4]))))) ? (((/* implicit */long long int) var_9)) : (arr_1 [i_1 - 2])))), (max((((/* implicit */unsigned long long int) (unsigned char)0)), (min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_4])), (var_13))))))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-((-(max((arr_11 [i_1] [8ULL] [i_1] [(_Bool)1]), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [9U]))))))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_3))));
            }
        }
    }
    for (signed char i_5 = 3; i_5 < 7; i_5 += 4) 
    {
        var_24 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-54)) ? (var_9) : (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) arr_8 [i_5] [(unsigned short)8] [i_5] [(signed char)8])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-54)) == (((/* implicit */int) (unsigned char)14)))))))));
        var_25 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_3))))));
    }
    for (signed char i_6 = 3; i_6 < 22; i_6 += 2) 
    {
        var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_6))));
        var_27 &= ((/* implicit */unsigned char) (-(min((max((var_7), (((/* implicit */unsigned long long int) (unsigned char)237)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) (short)20523)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (signed char)127)))) != (((/* implicit */int) (signed char)104)))))));
        var_29 = ((/* implicit */short) (~(((((/* implicit */_Bool) 151865766)) ? ((~(((/* implicit */int) (signed char)-92)))) : (((/* implicit */int) (_Bool)0))))));
    }
    var_30 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) (signed char)104)) ? (var_18) : (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)0)), (var_4)))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
    var_31 = ((/* implicit */unsigned short) (+(((var_11) ? ((-(3563963830329798891ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)116)) ? (var_18) : (((/* implicit */unsigned int) -152592318)))))))));
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_5))));
}
