/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148161
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
    var_12 = ((/* implicit */short) var_11);
    var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)65524))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 1229013373U)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))))) : (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(var_11)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_15 = (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_8 [i_0])), (0U))), (((unsigned int) var_2))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_2 - 2] [i_3] [i_0] = ((/* implicit */long long int) (signed char)-42);
                            arr_14 [i_0] [i_0 + 3] [i_1] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) 1229013373U);
                        }
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((18446744073709551601ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_5] [i_3] [i_2] [i_0])) ? (((/* implicit */int) (short)26711)) : (arr_1 [i_5] [i_5]))))))), (((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [9ULL] [i_3])), ((short)12609)))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) min((var_11), (var_7))))))));
                            var_16 = ((/* implicit */signed char) max((((arr_3 [i_0] [(_Bool)1]) >> ((((+(((/* implicit */int) var_5)))) + (119))))), (((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [3U] [i_1]))) & (((((/* implicit */_Bool) -7181380997830156387LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))) : (var_10)))))));
                            arr_19 [16LL] [i_0 + 3] [i_1] [i_3] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
                        {
                            arr_23 [(signed char)2] [(unsigned char)9] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)33);
                            var_17 = ((/* implicit */signed char) var_11);
                            arr_24 [i_0] [i_1] [15LL] [i_3] [i_3] [(unsigned short)14] [i_2 - 4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_9 [i_3] [i_6]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))) != (min((max((((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_1] [17ULL])), (arr_11 [i_3] [i_1] [i_2] [i_3] [i_6 + 3] [i_2]))), (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2 - 3]))) : (arr_0 [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */int) ((unsigned int) arr_20 [i_0] [i_0] [10U] [i_3] [i_2] [10U]));
                            var_19 = ((/* implicit */unsigned short) var_11);
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65502)) - (((/* implicit */int) var_5))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))));
                        }
                        var_22 ^= ((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)11))))));
                        arr_27 [i_0] [i_1] [i_2 - 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_1])) : (((/* implicit */int) arr_21 [17ULL] [(short)15] [i_2] [i_2 + 1] [0U]))))), ((-(arr_11 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_3] [(unsigned char)1])))))) ? (((max((arr_1 [i_1] [i_1]), (((/* implicit */int) arr_5 [3U] [i_1])))) + (((/* implicit */int) ((arr_20 [i_1] [i_1] [i_0] [i_0] [(_Bool)1] [i_1]) > (((/* implicit */unsigned long long int) -384787036))))))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_6 [9U] [i_0] [i_0])), (arr_3 [i_0] [i_2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32746), (((/* implicit */short) var_0)))))))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((2937690004U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148)))))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) <= (max((((/* implicit */unsigned long long int) var_0)), (0ULL))))))));
}
