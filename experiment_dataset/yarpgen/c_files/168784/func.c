/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168784
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)172))))) ? (5713448128314170813ULL) : (((/* implicit */unsigned long long int) var_4))));
    var_13 = ((/* implicit */long long int) var_11);
    var_14 = var_0;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_6 [(unsigned char)1] = arr_5 [i_1];
        arr_7 [(unsigned char)5] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) (unsigned char)174)))));
    }
    for (unsigned int i_2 = 4; i_2 < 16; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_9 [i_2] [i_2]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            arr_14 [(unsigned char)10] [i_2] [i_3] = (~(((/* implicit */int) ((_Bool) arr_10 [i_3]))));
            arr_15 [i_2] [i_3] [(signed char)17] = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (-2255377943672767980LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))));
        }
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                arr_21 [i_2] [i_2] [15U] = ((/* implicit */int) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    var_18 = (-(((/* implicit */int) ((_Bool) arr_20 [i_5] [i_5] [i_6 + 1]))));
                    arr_24 [i_6] [i_4] [(_Bool)1] [i_4] = ((/* implicit */int) (+(3677677227564328888LL)));
                }
            }
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned char)48))))) : (var_7)))));
                arr_27 [4ULL] [4ULL] [13ULL] = (!(((/* implicit */_Bool) var_9)));
                var_20 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-30552)) : (((/* implicit */int) (unsigned char)11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1736861214)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned short)34720))))) : (max((((/* implicit */unsigned long long int) (short)32765)), (var_2))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (875939590))))));
            }
            arr_28 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_5))) >> (((((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) arr_11 [i_2 - 4] [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 + 1])))) - (21630)))));
        }
        arr_29 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24824))) : (var_4))))))), ((~((~(((/* implicit */int) var_8))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_10 [i_8]))) ? (((-1139676871) & (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_22 [2LL] [i_8] [(_Bool)1] [i_8] [(unsigned short)11] [(unsigned short)11]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((817021546U) >> (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
        arr_35 [i_8] [i_8] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_13 [(unsigned char)3] [i_8] [i_8])) - (100)))))) / ((~(arr_26 [i_8] [i_8]))));
        arr_36 [i_8] [i_8] = (~(((((/* implicit */_Bool) (~(7097076911128549632LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -8645355832077695645LL)))) : (arr_26 [i_8] [i_8]))));
    }
}
