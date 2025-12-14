/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158552
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
    for (short i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_11 ^= arr_0 [(unsigned char)8];
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_12 &= (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119))))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_1 + 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)7461)) || (((/* implicit */_Bool) (signed char)124))))) : (min((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) (unsigned char)63)))), ((-(((/* implicit */int) var_5))))))));
                        arr_9 [i_0] [0] [i_0] [i_3] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (unsigned char)195)), ((-(12148928464727086259ULL)))))));
                        arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (((~(1152903912420802560ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
    {
        arr_14 [(unsigned char)12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [13] [i_4] [i_4] [i_4 + 1])) : (((/* implicit */int) (unsigned char)196)))) % (((((/* implicit */_Bool) arr_2 [(signed char)14] [i_4 - 1])) ? (((/* implicit */int) ((unsigned char) arr_12 [i_4]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))))));
        arr_15 [i_4] [i_4] = (~(((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 + 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6)))));
        var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (17348821515819394982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))))))))) > (((/* implicit */int) arr_8 [20] [20] [i_4])));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        arr_24 [i_5] [i_5] [7ULL] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */int) (unsigned char)123)), (-2042317024))) : (((/* implicit */int) (!((_Bool)1))))));
                        arr_25 [i_7] [i_7] [(unsigned char)2] [i_7] [i_8 + 2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_5 + 1] [i_5] [i_5 + 1] [i_5])) : (arr_13 [i_6])))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))))));
                        var_15 += ((/* implicit */unsigned long long int) arr_5 [i_5] [(short)0]);
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            arr_30 [i_9] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(var_3)));
                            arr_31 [i_5] [13ULL] [i_5] [i_8 + 2] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_0), (arr_6 [i_5 + 2] [i_5 + 1] [i_5]))))));
                            arr_32 [i_5] [i_8 + 1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) var_10)) != (((unsigned int) ((unsigned short) var_0)))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            arr_35 [i_10] [i_8] [i_5] [i_5] [(short)11] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_5] [i_5 + 1])) ? (((/* implicit */int) arr_5 [i_5] [i_5 + 1])) : (((/* implicit */int) (unsigned char)234))))));
                            arr_36 [i_5] [i_8 + 3] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) (unsigned char)248);
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_7] [i_7])) > ((~(((/* implicit */int) max(((unsigned char)195), (((/* implicit */unsigned char) (signed char)-48))))))))))));
                        }
                    }
                    var_17 = ((/* implicit */signed char) var_8);
                    arr_37 [1LL] [i_5] [i_5] = ((/* implicit */signed char) arr_29 [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5] [(short)2]);
                }
                var_18 = ((arr_28 [i_5] [i_5] [(unsigned char)11] [i_6] [i_5] [i_5]) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [8U])))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)133)) ? (var_10) : (((/* implicit */int) (signed char)-63)))), (((/* implicit */int) (unsigned char)131))))), (max((((12387258699408883168ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4002))))), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_6])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_7);
}
