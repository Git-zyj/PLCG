/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164950
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
    var_20 = ((/* implicit */unsigned long long int) var_5);
    var_21 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_22 = ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_10), (((/* implicit */short) arr_1 [i_1])))))))) ? (((/* implicit */int) ((_Bool) var_11))) : ((+((-(((/* implicit */int) (unsigned short)65535)))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50682))) : (var_1))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))) ? (max((max((((/* implicit */unsigned long long int) var_19)), (var_13))), (((/* implicit */unsigned long long int) max((var_19), (((/* implicit */short) (unsigned char)14))))))) : (((arr_1 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_2 [i_0] [i_1] [i_0])))));
                var_24 = ((/* implicit */unsigned short) ((((min((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_19)))) * (var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)12823), ((short)12850)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] = (!(((/* implicit */_Bool) var_9)));
                var_26 = ((/* implicit */unsigned short) arr_0 [i_2 - 1]);
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1]))))))))));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) var_16)), (8055337455816398040ULL)))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_3))), (((/* implicit */unsigned long long int) (signed char)118))))));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((arr_5 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_2 - 1] [i_4 + 1])) : (var_4)))))))));
                                arr_21 [i_2 - 1] [i_3] [i_4 + 1] [i_2] [i_6] = ((/* implicit */unsigned short) (((~(max((var_2), (((/* implicit */unsigned long long int) var_16)))))) << (((min(((~(((/* implicit */int) (signed char)(-127 - 1))))), ((~(((/* implicit */int) var_15)))))) + (110)))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) arr_2 [i_2] [i_2] [i_4]);
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 16; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_27 [i_2] [i_2] [i_2] [i_2 - 1] [(short)16] &= ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [4ULL] [i_3 + 1] [4ULL]))))), (max((arr_17 [(signed char)12] [i_3 - 1] [(signed char)12]), (arr_17 [(_Bool)1] [i_3 - 1] [(_Bool)1])))));
                                arr_28 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8] [i_4 - 2] [i_3] [i_2 - 1])))) * (((/* implicit */int) max((arr_18 [i_8] [i_8] [i_8] [i_8] [i_4 - 2] [i_3] [i_2]), (arr_18 [i_8] [i_8] [i_8] [i_4] [i_4 - 2] [i_3] [i_3]))))));
                                var_31 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    arr_29 [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (arr_9 [i_2] [(signed char)19] [i_4])))) ? (((/* implicit */int) var_16)) : ((+(((/* implicit */int) var_0))))))) + (((((/* implicit */_Bool) (+(var_3)))) ? (((var_5) ? (arr_5 [i_4]) : (var_3))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                }
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (short i_10 = 2; i_10 < 19; i_10 += 2) 
                    {
                        for (long long int i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            {
                                arr_37 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] = ((/* implicit */long long int) max((min((max((8055337455816398040ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_36 [i_2] [i_3 - 1] [i_2] [i_3] [i_3 - 1] [i_3 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_33 [i_2] [i_3 - 1] [i_2] [i_2])), (1350575852455282137ULL)))) || (((/* implicit */_Bool) var_3)))))));
                                arr_38 [i_10] [(unsigned short)10] [(unsigned short)10] [i_10] [i_10] [i_2] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_2] [i_2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
