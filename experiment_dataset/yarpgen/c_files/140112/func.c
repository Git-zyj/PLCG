/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140112
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_12)), (7349315487656911527ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19869)) / (((/* implicit */int) var_2))))))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_3))))))) + (((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1])), (max((((/* implicit */long long int) arr_2 [i_0 + 1])), (arr_0 [i_0 - 1])))));
        var_18 = ((/* implicit */signed char) (+((~(max((arr_3 [i_0] [i_0]), (((/* implicit */int) (unsigned char)35))))))));
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [(unsigned char)19] [i_0])) ? (-2147483645) : (2147483644)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [11U])))) * ((-(((/* implicit */int) (_Bool)0))))))) : ((+(min((1339536248485585844LL), (((/* implicit */long long int) 258048U))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */long long int) max((min((arr_1 [i_0 - 1]), (((/* implicit */unsigned char) (_Bool)0)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (((/* implicit */_Bool) (unsigned char)29)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : ((-(arr_0 [i_0]))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (4294709248U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12903)) ? (arr_3 [i_1 + 3] [1U]) : (((/* implicit */int) var_14)))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)121))) : (var_0)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(var_9)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))))));
            arr_9 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_7 [8ULL] [i_2] [i_1])) - (((/* implicit */int) (_Bool)1))))));
            arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (arr_0 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        }
        for (unsigned short i_3 = 4; i_3 < 9; i_3 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-12903)))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((~(arr_8 [i_1 + 1] [7LL]))) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))));
            arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 - 4] [i_3 - 4])) ? (((var_3) ? (arr_14 [(unsigned char)10]) : (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) arr_11 [i_1]))))));
        }
        for (unsigned short i_4 = 4; i_4 < 9; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                arr_20 [(unsigned char)5] [4U] [i_5] [5U] = ((/* implicit */long long int) var_3);
                arr_21 [9] [i_4] = ((/* implicit */_Bool) ((signed char) arr_1 [i_1 + 2]));
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_25 [8LL] [8LL] [i_6] [8LL] = ((/* implicit */short) (-(((arr_16 [i_1 + 3] [i_4 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_19 [i_1 - 2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (short i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)182))));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_28 = ((/* implicit */unsigned int) (unsigned short)22234);
                    var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_29 [i_7] [(_Bool)1] [i_7 - 1] [i_7]) >> ((((((-2147483647 - 1)) - (-2147483621))) + (47)))))) && (((/* implicit */_Bool) 8953310383968658151LL))));
                }
                var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_1] [i_4 + 1] [(short)4] [(unsigned char)10])) ? (((/* implicit */int) arr_19 [i_1 + 2])) : ((-(((/* implicit */int) var_9))))));
            }
            arr_30 [i_1] [4U] = ((arr_3 [i_1 - 1] [i_4 - 1]) / (arr_14 [i_1 - 1]));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 2; i_9 < 8; i_9 += 1) 
            {
                var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1]))) % (arr_16 [i_4 + 1] [i_9 + 3])));
                arr_35 [i_9 + 1] [i_4 + 1] [i_4 + 1] [i_1] = (((!(((/* implicit */_Bool) 1063410980)))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_9 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (-2813377559334878393LL))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned char)4] [(unsigned char)4]))))));
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) -4LL))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            }
        }
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2813377559334878408LL)) ? (258043U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        arr_36 [6LL] [6LL] = ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_28 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 - 2]))));
    }
    var_34 = ((/* implicit */_Bool) (short)1736);
}
