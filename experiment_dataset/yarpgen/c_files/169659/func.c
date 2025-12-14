/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169659
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_4))))));
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_3))));
                arr_9 [i_0] [i_1] |= ((/* implicit */unsigned char) var_7);
            }
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (-2020621729)))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_16 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) 15418564895973172084ULL);
                    arr_17 [i_4] [i_3] [(unsigned short)1] [i_0] [i_0 - 1] = ((/* implicit */_Bool) (signed char)-127);
                    arr_18 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 182787884)) ? (3028179177736379531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28)))))) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 4) 
            {
                arr_21 [i_0 + 1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-444)) : (((/* implicit */int) (_Bool)1))));
                arr_22 [i_0 + 1] = ((/* implicit */_Bool) var_5);
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (unsigned char)13))));
            }
            var_14 = (_Bool)1;
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */unsigned long long int) var_5)) + (13749731949663496598ULL))) : (((/* implicit */unsigned long long int) ((arr_10 [i_0 + 1] [i_1]) >> (((var_4) - (634979321200539758LL)))))))))));
            var_16 = ((/* implicit */int) min((var_16), (var_3)));
        }
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_7 [i_0])) | (((/* implicit */int) (signed char)0)))), (((/* implicit */int) min(((_Bool)0), ((_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) max((arr_20 [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0 + 1] [i_0])))))))) : (max((((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_1))))), (max((((/* implicit */unsigned long long int) var_2)), (5295682172164025676ULL)))))));
    }
    for (int i_6 = 3; i_6 < 11; i_6 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) 394287907U)) ? (((8ULL) * (((/* implicit */unsigned long long int) 2147483647)))) : (14989505596270064403ULL))), (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) & (1488211374442763620ULL))))))))));
        arr_27 [8] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_3)) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) & (0LL))))) % (var_4)));
        var_19 = ((((/* implicit */_Bool) 1048575U)) ? (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_10)))) ? (((9137663237647526455ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) 1048575U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_30 [(unsigned char)4])))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_31 [i_7])), (((((/* implicit */_Bool) 2020621728)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (var_5)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-26678)) + (2147483647))) >> (6U)))) : (max((arr_29 [i_7] [i_7]), (arr_29 [i_7] [i_7])))));
        var_22 = ((/* implicit */int) min((var_22), (14)));
        arr_32 [i_7] = min((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */unsigned long long int) 9223372036854775807LL)) - (var_9))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)54587)) == (0)))))));
        arr_33 [i_7] = var_2;
    }
}
