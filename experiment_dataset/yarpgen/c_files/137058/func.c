/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137058
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [6U] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned short)52595))))));
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) min((3767187697U), (((/* implicit */unsigned int) (unsigned short)12941))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_14 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (short)-10645)) : (((/* implicit */int) arr_5 [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) << (((max((arr_0 [i_3] [i_3]), (((/* implicit */unsigned int) var_3)))) - (4294967246U)))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52595))))) ? (arr_13 [i_3] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4]) : (((/* implicit */unsigned long long int) var_7))))));
                            arr_14 [i_3] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_3 + 1] [i_3 + 1]))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3] [i_3]))))))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [(unsigned char)6] [i_3])) ? (134217472) : (((/* implicit */int) var_0))))))));
                            arr_15 [i_3] [1U] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (short)-10645)) : (4128768)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_13 [i_3] [17] [i_0] [i_0] [i_3] [i_3 + 1] [i_3 + 1])))) ? (((((/* implicit */_Bool) -4128746)) ? (arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [i_4] [i_0] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_3 + 1]))))) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [(unsigned short)3] [i_3] [i_3]))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [i_1] [i_1] = var_11;
                arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) -4128729);
            }
            var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)52595)), (((long long int) (unsigned char)255)))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 24; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) var_3);
                        arr_23 [19U] [i_1] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 1]))))));
                    }
                } 
            } 
            var_18 = (~(min((var_6), (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_9)))))));
        }
    }
    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned int) min((arr_13 [(short)2] [i_7] [(short)2] [10] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-27195)) ? (((/* implicit */int) arr_10 [i_7] [20ULL])) : (((/* implicit */int) arr_18 [i_7] [i_7 - 1] [i_7] [i_7])))))))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_7] [i_7] [i_7 - 1]))))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4128768)) || ((_Bool)1)))), (((2248648538660738126ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
        arr_26 [i_7] = ((/* implicit */int) var_8);
    }
    var_21 = ((/* implicit */unsigned char) var_5);
}
