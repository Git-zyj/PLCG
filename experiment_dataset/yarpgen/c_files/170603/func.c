/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170603
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
    var_19 = ((/* implicit */long long int) ((int) (~(5623330907195008450LL))));
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) -5623330907195008462LL);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) / (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)-12279)) : (((/* implicit */int) (short)12250)))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_2] [i_2] [i_2 - 1] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) ((min((var_17), (((/* implicit */int) var_6)))) > (((var_0) / (((/* implicit */int) (unsigned char)200)))))))) - (max((((/* implicit */long long int) arr_8 [i_2] [i_1] [i_1] [i_1])), (var_15))));
                var_22 = ((/* implicit */int) -1LL);
            }
        }
        arr_10 [9LL] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) * (((((/* implicit */long long int) var_17)) / (var_12))))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)81)))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_23 = ((/* implicit */short) var_6);
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (((+(((/* implicit */int) (short)12256)))) < (arr_2 [i_0])))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_16)))))))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                for (long long int i_5 = 2; i_5 < 18; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_25 = ((((((/* implicit */_Bool) max((arr_1 [1LL]), (var_3)))) ? (arr_6 [i_0] [i_4]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)16))))))) != (((((/* implicit */_Bool) arr_16 [i_4 + 1])) ? (-8679219903368374264LL) : (var_2))));
                            var_26 = ((/* implicit */short) min((((/* implicit */long long int) arr_15 [i_0] [i_3] [i_6])), ((~(140737488355327LL)))));
                            var_27 = ((/* implicit */long long int) ((unsigned int) var_7));
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(arr_4 [i_0]))) << (((((long long int) (_Bool)1)) - (1LL)))));
        }
        var_28 = min((((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_16)))))), (((((/* implicit */_Bool) min((arr_0 [16U] [i_0]), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_4 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            for (short i_9 = 4; i_9 < 9; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        arr_33 [i_10] [i_10] [i_10] [i_7] = ((/* implicit */short) (-((-(8767204065953210959LL)))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_8 [i_10] [i_8] [i_8 + 2] [i_8]))) ? (arr_4 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        arr_34 [i_8] [i_10] [7] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9 - 3] [i_9 + 3] [i_9 + 2]))) ^ (var_15)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(short)4] [i_7] [14LL] [i_7])) ? (arr_15 [i_7] [i_11] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-12309))))));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        {
                            var_31 = (_Bool)1;
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) -5623330907195008450LL)) && (((/* implicit */_Bool) ((3288837650U) << (((/* implicit */int) arr_23 [i_7])))))));
                            var_33 = ((/* implicit */long long int) ((_Bool) arr_11 [i_11] [i_14]));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */_Bool) min((var_34), (((_Bool) ((int) arr_39 [i_7] [3LL] [i_7])))));
        }
    }
    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
    {
        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_18 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))));
        var_36 = (~((~(min((((/* implicit */long long int) (short)12236)), (-7040081052107008119LL))))));
    }
    var_37 = ((((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) min(((unsigned char)99), (var_8)))) - (78))))) : (min((max((var_3), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_8)))));
    var_38 = ((/* implicit */int) var_13);
}
