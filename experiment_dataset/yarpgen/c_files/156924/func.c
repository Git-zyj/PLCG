/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156924
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) >= (((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) (short)28393)) : (-1891215111))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (max((var_11), (((((/* implicit */_Bool) (short)28393)) ? (((/* implicit */int) (short)-28393)) : (((/* implicit */int) (signed char)-116))))))));
                var_15 *= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28398)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (7045264279983839092LL)))) ? (((/* implicit */int) ((2147483647) == (((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_1]))))) : ((+(arr_1 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                arr_15 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (+(arr_4 [i_0] [i_3] [i_4])));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1)) < (((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_1] [i_0])) ? (((/* implicit */int) (short)28389)) : (arr_8 [i_1 - 2] [i_1 - 3] [i_0])))));
                                var_17 = ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (min((((/* implicit */int) (short)-28396)), (max((((/* implicit */int) arr_10 [13ULL] [i_1] [i_2] [i_1] [i_1] [i_2])), (arr_1 [i_4] [i_1]))))) : ((-(((/* implicit */int) (short)28393))))));
                            }
                            for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_3] [i_2] [i_1] [i_1 + 1] = ((/* implicit */int) arr_3 [i_1] [i_2] [i_3]);
                                var_18 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) && (((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1 + 1]))))), (((((/* implicit */_Bool) (signed char)-107)) ? (arr_12 [i_0 + 1] [i_1 - 1]) : (arr_12 [i_0 + 2] [i_1 - 3]))));
                                var_19 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))));
                            }
                            var_20 *= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 + 1] [i_2 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [2LL] [i_2] [(short)6] [2U]))))) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)4))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) max((var_10), (arr_13 [(signed char)12] [i_1 - 2] [i_1]))))))) : (((((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) (unsigned char)90)) : (2147483647))) - (((/* implicit */int) ((var_0) <= (arr_8 [i_1 - 2] [i_1] [i_0 + 2]))))))));
                var_22 += ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) >> ((((((_Bool)1) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_0] [(_Bool)1])) : (((/* implicit */int) (signed char)-64)))) - (71))))), (((/* implicit */int) ((arr_18 [i_0] [i_0] [0U] [10U] [i_1 + 1]) < (arr_18 [i_0] [i_0] [10U] [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    var_23 = ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)(-127 - 1))) == (var_0))))) : (((/* implicit */int) ((short) ((long long int) var_10)))));
}
