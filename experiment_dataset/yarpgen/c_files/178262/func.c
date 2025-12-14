/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178262
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (unsigned short)49975))))) : (var_0)))) : (0LL)));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_15)) ? (0LL) : (((/* implicit */long long int) 1228039029))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_14))))) : (min((((/* implicit */long long int) var_3)), (0LL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 + 2] [i_0])), (max(((unsigned short)6776), (((/* implicit */unsigned short) (signed char)-35))))))) : (((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (+(max((((((/* implicit */int) var_9)) | (((/* implicit */int) var_17)))), (((/* implicit */int) var_18))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) -1657635208))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)0)) + (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1]))), ((~(arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
            var_23 = ((short) ((unsigned char) var_13));
            var_24 = ((/* implicit */short) (unsigned short)0);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            arr_12 [i_1 - 1] = ((/* implicit */long long int) arr_4 [i_1 - 1] [i_3]);
            arr_13 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1])) ? (var_4) : (arr_6 [i_1 + 1] [i_3] [i_1])))) ? (((/* implicit */int) (short)-15525)) : (((/* implicit */int) arr_9 [i_1] [i_1 - 1]))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_18 [i_1] = ((/* implicit */int) arr_5 [i_4] [i_1]);
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) arr_20 [i_5] [i_1] [i_1 + 1] [i_1 + 1]);
                var_26 = ((/* implicit */int) ((unsigned short) var_13));
            }
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
            {
                arr_25 [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) >= (((((/* implicit */_Bool) 12264430480508575367ULL)) ? (((/* implicit */int) (short)18095)) : (((/* implicit */int) var_12))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (0LL))) << (((arr_29 [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]) - (1765318877)))));
                            arr_31 [i_8] [i_8] [(short)1] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (_Bool)0);
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-114)) & (((/* implicit */int) arr_9 [i_8 + 1] [i_8 + 1]))));
                        }
                    } 
                } 
            }
            arr_32 [i_1] = ((var_11) ? (arr_30 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_4]) : (arr_30 [(short)10] [i_1 + 1] [i_1 + 1] [i_1] [i_4]));
        }
        arr_33 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_18) ? ((-(var_4))) : ((+(((/* implicit */int) (unsigned short)14241))))))) ? (((((((/* implicit */unsigned int) arr_11 [i_1 + 1])) | (3857565022U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40917))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)71))))))));
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        arr_38 [i_9] = (~(((/* implicit */int) (_Bool)0)));
        var_29 = ((/* implicit */unsigned char) arr_15 [i_9] [i_9] [i_9]);
    }
    var_30 &= ((/* implicit */int) var_5);
    var_31 = ((/* implicit */long long int) var_6);
}
