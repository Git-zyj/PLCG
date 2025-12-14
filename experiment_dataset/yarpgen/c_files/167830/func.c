/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167830
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
    var_19 += ((/* implicit */short) max(((-((+(4503599358935040ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (18442240474350616570ULL) : (arr_3 [i_0] [i_1 + 1])))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 18442240474350616570ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned short) max((((max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */int) var_2)))) >> (((((arr_9 [i_3] [(short)8] [i_3] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) var_16))))) + (1421LL))))), (((/* implicit */int) (short)-32753))));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
                                arr_14 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_10)) != (((arr_12 [i_3] [i_1 - 3] [i_3] [i_3] [i_3 - 2]) % (arr_12 [i_3] [i_1 - 2] [18LL] [i_3] [i_3 - 1])))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_2] [i_3] = ((/* implicit */signed char) max((var_4), (((/* implicit */long long int) max((((/* implicit */int) var_1)), (arr_12 [i_3] [i_3 - 1] [i_3] [(short)0] [i_1 - 1]))))));
                                arr_18 [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) min((max((18442240474350616579ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_4)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [10] [i_1 - 3] [(short)0] [i_3 - 1])))))));
                            }
                            for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((9223372036854775791LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2]))))), (((/* implicit */long long int) min((((int) var_10)), (((/* implicit */int) max((var_9), (var_6))))))))))));
                                arr_22 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_15 [i_2] [i_1] [i_2] [i_1 + 1] [i_6]) & (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))))) ? (((((arr_3 [i_0] [i_0]) & (((/* implicit */unsigned long long int) 4539628424389459968LL)))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            }
                            arr_23 [i_3] [i_1] [i_1 - 3] [i_3] = ((/* implicit */unsigned int) max((max((((arr_8 [i_0] [i_2] [16ULL]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) arr_12 [i_3] [i_2] [i_2] [i_1 + 1] [i_3])))), (((/* implicit */long long int) min((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]), (((/* implicit */unsigned int) var_3)))))));
                            var_23 -= ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) var_2)), (arr_16 [i_0] [i_2] [i_3 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        {
                            arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_7])) ? (1152921229728940032ULL) : (arr_16 [9LL] [(unsigned char)5] [(unsigned char)5]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_4))))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [4LL])) || (((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_1] [i_7])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (short)32764)), (arr_2 [i_7] [i_7] [i_0])))))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_7]), (arr_10 [i_1 - 3] [i_1 - 3] [i_8 - 1])))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_20 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_25 [i_1 - 1] [i_8 + 2] [i_8])) : (((/* implicit */int) arr_25 [i_1 - 3] [i_8 + 1] [i_1 - 3]))))));
                            var_25 = ((/* implicit */int) min(((-(1152921229728940032ULL))), (((/* implicit */unsigned long long int) (-(arr_15 [i_0] [i_0] [i_0] [i_1 - 3] [i_8 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
