/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174272
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
    var_19 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (signed char)8))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_2 [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((long long int) (signed char)126)))) ? (745628887U) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)117)) - (((/* implicit */int) arr_1 [(_Bool)1] [i_2])))))))));
                                var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3516722132582215473LL)) ? (var_7) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) arr_7 [14LL] [i_1 + 4] [i_1 + 3] [14LL] [14LL] [14LL]))))) ? (((((/* implicit */int) (signed char)118)) - (((/* implicit */int) ((unsigned short) (_Bool)1))))) : (((/* implicit */int) ((_Bool) ((signed char) var_3))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(signed char)14] [(signed char)14] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_6])))) : (((((/* implicit */_Bool) arr_13 [(signed char)24])) ? (arr_13 [22LL]) : (arr_14 [i_6])))))) ? ((+((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) (signed char)112)))))));
            arr_17 [i_5] = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) arr_15 [i_5] [i_5] [(_Bool)1]))))))));
            var_25 = ((/* implicit */int) min((arr_13 [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775794LL)) ? (936987455U) : (((/* implicit */unsigned int) -76824272)))))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) min((((3680848874U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7]))))), (((/* implicit */unsigned int) min((-1), (((/* implicit */int) (unsigned short)5766)))))));
                    arr_25 [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (33554431U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 24; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */long long int) 2058897682)) : (6696584383079630517LL)));
                                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) arr_21 [i_10] [i_8] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_29 [22LL]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_20 [(signed char)20] [(unsigned short)10] [(signed char)20]))))))))));
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */long long int) arr_20 [i_8] [i_8] [22LL])) : (min((arr_14 [6LL]), (((/* implicit */long long int) min((936987440U), (3484618150U)))))))))));
                                var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_30 [i_10] [i_10] [i_9 - 3] [i_9 + 1] [i_9])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((signed char) min((((long long int) var_18)), (((/* implicit */long long int) var_10))))))));
}
