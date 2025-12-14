/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143928
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
    var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (min((((/* implicit */unsigned short) var_4)), (var_10))))))) : (((((_Bool) (unsigned short)15)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_1)))))) : (((long long int) var_0))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3])) | ((-(((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)1] [i_0])))))) >= (2147475456)));
                        arr_13 [(signed char)1] [(signed char)1] [(unsigned short)4] [i_3] |= ((((((/* implicit */int) ((short) (unsigned short)65520))) > ((-(((/* implicit */int) (unsigned char)89)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) min(((unsigned char)166), (((/* implicit */unsigned char) arr_11 [i_3] [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (var_6))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                        var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)98)), (max((arr_2 [i_3] [i_0]), (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */int) ((max((((/* implicit */int) (unsigned char)98)), (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (signed char)53)))))) == ((-(((/* implicit */int) arr_1 [i_1]))))));
        }
        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_2 [i_0] [(unsigned char)6]))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_6 [i_0])))))) ? (((long long int) 72057594037911552ULL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (signed char)76)))))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [16LL] [i_0])) ? (((((/* implicit */_Bool) ((unsigned char) -1899927557))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65524)) || (((/* implicit */_Bool) arr_3 [i_4] [i_0])))))) : (((((/* implicit */_Bool) arr_17 [i_4 + 3] [i_4 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))) : (arr_17 [i_4 + 3] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 32LL)))))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) arr_10 [(unsigned short)0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7)) / (((/* implicit */int) (unsigned char)207))))) ? (((((/* implicit */_Bool) -1752128399)) ? (-2147483622) : (((/* implicit */int) (unsigned char)3)))) : (((((/* implicit */int) arr_18 [i_0])) >> (((/* implicit */int) arr_18 [i_5]))))));
        }
        arr_21 [i_0] |= ((/* implicit */unsigned long long int) arr_6 [i_0]);
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((var_6) << (((((/* implicit */int) var_10)) - (16507))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_3))))) && (((/* implicit */_Bool) var_9))))) >= (var_5)));
}
