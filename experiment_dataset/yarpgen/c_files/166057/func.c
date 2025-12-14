/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166057
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [11ULL] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)230))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) (+(((unsigned long long int) var_18))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */short) ((min((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_4])), (((arr_8 [i_0] [i_1] [i_2] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (arr_12 [0LL] [0LL]))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] [i_4]))))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_21 = ((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_9 [i_0] [(unsigned char)5] [6U] [i_0] [i_4] [i_5]))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1])) ? (arr_14 [i_0] [i_0] [i_1] [(unsigned char)7]) : (arr_14 [i_0] [i_2] [i_2] [i_4])))));
                            var_23 = (-(((long long int) ((((/* implicit */int) (signed char)29)) != (((/* implicit */int) (signed char)29))))));
                            arr_16 [i_4] [i_2] [i_1] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((signed char)29), (arr_13 [i_2] [i_2] [1])))), (arr_10 [i_0] [i_0] [i_2] [i_0] [i_5])))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (arr_8 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1258400304098139072LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) : (2176266321U))))))));
                            var_24 = ((/* implicit */int) arr_12 [i_0] [i_2]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max((var_5), (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)-29))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((3317372743U), (((/* implicit */unsigned int) (signed char)22))))) ? (((/* implicit */int) (short)-20)) : (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27332)) ? (((/* implicit */unsigned long long int) arr_5 [3] [3] [3])) : (5338522370159906936ULL)))) ? (((long long int) (unsigned char)10)) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)4)) - (((/* implicit */int) (_Bool)1))))))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_1]))))) ? (min((((/* implicit */long long int) (signed char)-4)), (-5599523444359156882LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))));
                            var_27 = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) arr_4 [i_1] [(short)7] [10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) : (var_2))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (2118700975U)))))));
                        }
                        var_28 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_25 [7LL] [i_1] [i_1] [i_1] [(short)11])), (arr_4 [i_0] [i_1] [i_2])))), (var_14)));
                    }
                    arr_26 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_24 [i_2] [i_1] [1LL] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14440)) | (((/* implicit */int) (_Bool)1))))) ? (var_13) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) >= (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)1)), ((unsigned char)255))))));
    var_30 = ((/* implicit */unsigned long long int) 2118700975U);
    /* LoopNest 3 */
    for (short i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (long long int i_10 = 3; i_10 < 14; i_10 += 2) 
            {
                {
                    var_31 &= ((/* implicit */signed char) (+(min((((/* implicit */int) arr_31 [i_10 - 1] [i_10 - 3])), (((((/* implicit */_Bool) arr_29 [i_8])) ? (1588735837) : (((/* implicit */int) (short)-22012))))))));
                    var_32 = ((((((/* implicit */_Bool) arr_27 [(short)14] [i_10 + 1])) || ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_10] [i_10 - 2])) >= (((/* implicit */int) arr_31 [(short)4] [i_10 + 1]))))) : (((/* implicit */int) min((arr_27 [7U] [i_10 - 1]), (arr_27 [i_10] [i_10 - 1])))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned int) var_9);
}
