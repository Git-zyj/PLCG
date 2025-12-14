/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100634
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
    var_15 ^= ((/* implicit */unsigned int) ((var_8) / (max((var_14), (var_14)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)230)), (arr_1 [i_3 - 3] [i_3])))) + (((/* implicit */int) max((arr_1 [i_3 + 2] [i_3]), (arr_1 [i_3 - 1] [i_3 - 1]))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            var_17 += ((/* implicit */_Bool) ((((((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned char)0))))))) << (((max((((/* implicit */unsigned int) (+(arr_3 [i_1])))), ((+(arr_5 [i_2] [i_4] [i_2]))))) - (3537736273U)))));
                            var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_1), ((unsigned char)255)))), (var_5)))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3 + 1] [i_1])) ? (9223372036854775802LL) : (((/* implicit */long long int) var_0))))));
                            var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (((((_Bool) var_10)) ? (((var_10) & (((/* implicit */unsigned long long int) arr_0 [i_2])))) : (((/* implicit */unsigned long long int) max((var_0), (4294967295U))))))));
                            var_20 += ((/* implicit */long long int) var_6);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) var_14);
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) var_13);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((+(arr_9 [i_1] [i_1]))) : (((unsigned long long int) arr_11 [i_0] [i_1] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)0))))) - (((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_11 [i_1] [i_1] [i_1]))))))));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_6] &= (+(((/* implicit */int) ((short) arr_2 [i_0]))));
                        }
                        var_23 = max((((/* implicit */int) var_7)), (((arr_3 [i_3 - 3]) << (((arr_3 [i_3 + 2]) - (108703177))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-126)), (var_0)))) ? (((/* implicit */int) ((arr_14 [i_1] [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) ((signed char) arr_12 [i_1])))))));
            arr_21 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) || (var_4)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_1] [i_0])))))));
        }
        arr_22 [i_0] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_11) > (arr_7 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))));
        var_25 = ((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    var_26 ^= var_8;
}
