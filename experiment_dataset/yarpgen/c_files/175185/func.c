/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175185
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) var_10);
        var_15 = (+(((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1])))));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (((unsigned int) arr_0 [i_1 + 2]))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)103))))) % (arr_1 [i_1 + 1])));
    }
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        arr_8 [i_2] [i_2 + 2] = ((/* implicit */_Bool) var_9);
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] = min((((/* implicit */int) arr_6 [i_2 - 2])), (var_9));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (signed char)41))))) ? (arr_5 [i_3] [17LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32745))) * (var_4))))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [0U] [(_Bool)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) | ((+(var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (1153870002U))) : (((/* implicit */unsigned int) arr_15 [i_5] [i_6]))));
            arr_20 [i_6] [i_5 - 3] = ((/* implicit */unsigned long long int) (+(arr_18 [i_5] [i_6])));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                arr_25 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (~(arr_22 [i_7])));
                /* LoopNest 2 */
                for (unsigned char i_8 = 4; i_8 < 14; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (short)-17275)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (unsigned char)153)))) : (((((/* implicit */int) arr_11 [i_6] [i_7] [i_9 + 1])) % (arr_23 [i_6] [i_6] [8U] [i_5])))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_9] [i_9] [i_9] [i_9])) ? (arr_27 [i_9 - 2] [i_9 - 2] [i_6] [14ULL] [i_9 + 1]) : (arr_27 [i_9 + 1] [i_9] [i_9] [i_9] [i_9]))))));
                            arr_33 [i_7] [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (arr_9 [i_8] [i_7] [i_5])));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_5] [i_6] [i_7]))));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) (((~(arr_35 [i_5 + 1]))) ^ (((/* implicit */int) var_8))));
                            arr_42 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_47 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14353)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 2]))) : (var_2)));
                    var_24 &= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_5] [i_10] [i_13]))) / (var_7))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_36 [i_5] [i_6] [i_10] [i_6])) : (((/* implicit */int) (short)17275)))))));
                    var_25 = ((/* implicit */long long int) ((signed char) -1162167753));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        arr_50 [i_14] [i_13] [i_10] [13LL] [i_10] [i_6] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1153870018U)) ? (var_9) : (arr_44 [i_5] [i_5] [i_13] [i_14]))) % (((/* implicit */int) ((_Bool) -1162167753)))));
                        arr_51 [i_5] [i_6] [i_10] [i_14] = ((((/* implicit */_Bool) var_10)) ? (arr_18 [i_5 - 3] [i_5]) : (arr_18 [i_5 - 3] [i_5]));
                    }
                }
                for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 4) 
                {
                    arr_54 [i_5] [i_6] [i_6] [i_15 - 3] [i_15] [i_15] = (-((-(var_9))));
                    var_26 = ((/* implicit */signed char) arr_24 [i_5] [i_15 - 1] [i_15] [i_15]);
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) % (1764232559U))))));
                }
            }
            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5 - 3]))) : (var_12))))));
            arr_55 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
        }
    }
    var_29 |= ((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), (var_0)));
}
