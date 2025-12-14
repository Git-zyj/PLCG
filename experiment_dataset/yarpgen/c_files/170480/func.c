/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170480
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((arr_5 [i_0] [i_1] [i_1]), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (2988302078953683822LL)))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)30133))) : (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (((/* implicit */int) ((unsigned short) (unsigned short)30133)))))));
                            arr_12 [i_2 + 1] [i_0] [i_2 + 1] [i_3 + 1] [i_3] = ((unsigned long long int) min((((/* implicit */int) var_3)), (min((0), (((/* implicit */int) (unsigned short)60278))))));
                            arr_13 [i_0] [i_1] [i_2] [(signed char)8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3])) : (var_6))))));
                            var_14 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_6 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))))) ? (min((((/* implicit */long long int) ((_Bool) arr_10 [10ULL] [i_1]))), (((((/* implicit */_Bool) 0ULL)) ? (var_7) : (arr_8 [i_0]))))) : (((((/* implicit */_Bool) var_10)) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_0)))))) ? (var_0) : (((/* implicit */unsigned int) ((1447742565) / (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -1))))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_17 *= ((/* implicit */signed char) min((169585026474430168ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                        var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_19 -= ((/* implicit */unsigned short) (+(((long long int) max((var_5), (((/* implicit */signed char) arr_20 [i_4] [i_5] [(unsigned short)17] [i_7])))))));
                        arr_24 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_6)) ? (arr_19 [i_5] [i_5 + 1] [i_6]) : (1506325479U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) var_7)) : (min((((/* implicit */unsigned long long int) arr_18 [i_4])), (arr_22 [11ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5]))))))))));
                    }
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) arr_20 [i_6] [i_5 + 2] [i_5 + 2] [i_4]))))) ? (((var_4) / (((/* implicit */unsigned int) 1929537233)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_5] [i_5] [i_6] [i_4]) <= (var_10)))))))), ((~(((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)5555))) : (var_12)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_28 [i_4] [i_5] [i_6] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((int) (!(((/* implicit */_Bool) arr_15 [i_5]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (var_2))))) <= (arr_26 [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 2]))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_4] [8LL] [i_6] [i_8] [i_4] [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8] [i_5] [i_8] [i_5] [i_5 - 1] [i_5 + 1]))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_6))))))))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        arr_32 [i_4] [i_4] [i_5] [3LL] = ((/* implicit */unsigned long long int) arr_21 [i_5] [(signed char)15] [(signed char)15] [i_5] [i_4] [i_5]);
                        arr_33 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_5] [i_5] [i_5 + 2] [i_9 + 1]))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_4] [i_4] [6ULL] [6ULL] [i_5 + 1])) ? (((((/* implicit */int) var_8)) ^ (var_6))) : ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
                        arr_36 [(_Bool)1] [i_4] [i_6] [i_10] &= ((signed char) (unsigned short)43441);
                    }
                    arr_37 [i_5] [i_5 + 2] [i_5 + 2] = ((/* implicit */long long int) ((unsigned short) ((((2754390377U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42825))))) ? (((((/* implicit */_Bool) (unsigned short)16384)) ? (7554328848935954601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12237))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16507)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50322))) : (9223372036854775807LL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 1; i_11 < 10; i_11 += 1) 
    {
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11 - 1]))) : (var_0))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_24 -= ((/* implicit */unsigned long long int) arr_25 [i_12] [i_13] [i_12] [(unsigned char)18]);
                    var_25 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_34 [i_11] [i_12] [i_13] [i_11 + 1] [i_13] [i_11 + 1]))))));
                }
                arr_46 [7] [i_12] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (min((var_10), (((/* implicit */unsigned long long int) arr_38 [i_11])))) : ((+(10879348223514987900ULL)))))) && (((/* implicit */_Bool) var_4))));
            }
        } 
    } 
}
