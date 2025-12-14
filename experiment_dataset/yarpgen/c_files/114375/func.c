/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114375
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
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_8))))), (var_2)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned long long int) var_6);
                                var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)14355)), ((-(((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_4 + 1] [(unsigned short)14] [i_4 - 1]))))));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18036)) ? (((/* implicit */int) (short)18036)) : (16777215)));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) var_3);
                        var_17 += ((/* implicit */short) ((signed char) arr_3 [i_1] [i_0]));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */short) arr_6 [i_0]);
                        var_19 = ((/* implicit */unsigned char) ((int) ((arr_11 [i_0] [i_1] [i_1] [i_6 + 2] [i_0 - 1]) % (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                        var_20 += ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_21 += ((/* implicit */short) ((long long int) max(((short)-18036), ((short)18048))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */long long int) var_4)) : (arr_21 [i_0])))) ? (((arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((arr_21 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                    }
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) min(((-(((/* implicit */int) (short)-7227)))), (((/* implicit */int) var_2)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 3; i_8 < 17; i_8 += 4) 
    {
        for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) (~(var_11)));
                    var_24 = ((/* implicit */unsigned char) (~(max((max((var_0), (((/* implicit */unsigned int) arr_23 [i_9 - 1])))), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_27 [i_8] [i_9])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        for (unsigned char i_12 = 2; i_12 < 11; i_12 += 1) 
        {
            {
                var_25 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_31 [i_12 - 1]))), ((+(((/* implicit */int) arr_16 [i_12 + 1] [i_11] [i_11]))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        {
                            arr_41 [i_11] [i_11] [(signed char)6] [0LL] [i_11] [i_11] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_7))))), (max((16633417527024527278ULL), (((/* implicit */unsigned long long int) arr_18 [(signed char)2] [i_12 - 1] [i_12 - 2] [i_14]))))));
                            arr_42 [i_11] [i_11] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [12LL] [i_12])) : (max((((((/* implicit */_Bool) 7971080914025577304LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)18)))), (((/* implicit */int) min((((/* implicit */short) arr_33 [i_11])), ((short)-4393))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
