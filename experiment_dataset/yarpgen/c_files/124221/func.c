/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124221
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_10)) : (var_6))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3 + 1] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3 + 1] [i_3] [i_3]))));
                    arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) 2061584302080LL))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_18 -= ((/* implicit */signed char) ((arr_7 [i_3 + 1] [i_1] [i_1] [i_1]) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 1] [i_1] [i_2] [i_3])))));
                        arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (2305843009213693951LL) : (2061584302084LL)));
                    }
                }
                for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2]))) != (var_11)))) : (((/* implicit */int) arr_5 [i_0]))));
                    var_19 |= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_5] [i_5])) != (((/* implicit */int) (unsigned char)216))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2599801280481865432LL)) ? (((/* implicit */int) var_12)) : (arr_6 [i_0] [i_1] [i_1] [i_5])));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0]))) + (var_11)));
                    var_22 = ((/* implicit */int) (((_Bool)1) ? (arr_11 [i_0] [i_0] [i_2]) : (7187816595783453650LL)));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_19 [i_0] [i_6]))));
                    arr_21 [i_0] [(short)1] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) == (((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                }
                for (signed char i_7 = 3; i_7 < 19; i_7 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) == (arr_11 [i_1] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((26U) > (1065353216U))))) : (var_3)));
                    arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((var_10) & (((/* implicit */int) (unsigned short)1401))));
                }
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_25 [i_0] [i_0] = ((((/* implicit */int) (unsigned char)3)) / (((/* implicit */int) (unsigned char)37)));
            }
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                arr_29 [i_1] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2061584302085LL)) ? (2061584302085LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1401)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (14U))))));
            }
        }
    }
    var_27 = ((/* implicit */long long int) var_13);
}
