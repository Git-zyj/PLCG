/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135174
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */int) min((arr_1 [(short)7]), (var_5)))) * (((/* implicit */int) (!(((_Bool) arr_1 [2])))))));
        var_14 = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_0]))));
        var_15 = ((/* implicit */int) var_9);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 6; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) arr_3 [i_0]);
                    arr_7 [i_0] [i_1] [i_0] [i_2 - 3] = var_10;
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                    arr_9 [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_7))), (((/* implicit */unsigned long long int) -7751034263127361776LL))));
                    var_17 &= ((/* implicit */int) (-(max((2614621707U), (((/* implicit */unsigned int) arr_2 [(short)4] [4LL]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (+(var_7)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_10 [(unsigned short)0]))));
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((_Bool)0) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) * ((~(((/* implicit */int) var_9))))))))))));
    var_21 |= ((/* implicit */short) 1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) var_6);
        var_23 = ((/* implicit */int) arr_12 [i_4]);
        arr_15 [i_4 - 1] = ((/* implicit */unsigned char) (signed char)-56);
    }
    for (signed char i_5 = 3; i_5 < 23; i_5 += 4) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((448836645U), (((/* implicit */unsigned int) (signed char)103))));
        arr_20 [i_5 + 1] [(unsigned short)11] = ((/* implicit */unsigned char) (+(var_0)));
        arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -1009556581)) ? (((max((var_0), (((/* implicit */long long int) var_10)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) 1009556599)) ? (((/* implicit */int) (unsigned char)65)) : (1009556593))))) / (((/* implicit */int) var_1))));
        var_25 = ((((/* implicit */_Bool) min(((short)-31034), ((short)24730)))) ? (var_8) : (((1009556557) * (((/* implicit */int) arr_17 [i_6] [i_6 + 1])))));
    }
}
