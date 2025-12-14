/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177908
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
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)112)), (arr_2 [5LL] [i_0])))) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        var_10 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((11192800159663266463ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) (~(arr_0 [i_0])))))));
    }
    for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_8 [i_1] [i_1 - 2] = arr_1 [i_1];
        var_11 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_5)), (arr_2 [i_1 - 2] [i_1]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) 970980414)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3951364012U))))));
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7253943914046285174ULL)) ? (((/* implicit */unsigned long long int) 33554432U)) : (1174879902874505815ULL)))) ? (4261412885U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((7253943914046285149ULL), (((/* implicit */unsigned long long int) (short)28644))))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_11 [i_1] [i_2])))) : ((-(((/* implicit */int) (unsigned char)17)))))))));
            var_12 += ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28669))) : (11192800159663266463ULL))) >> ((((+(arr_7 [(short)12]))) + (3086103907785790692LL))))) >= (((/* implicit */unsigned long long int) (~(arr_0 [i_1]))))));
            arr_13 [i_1] = ((/* implicit */_Bool) 11192800159663266463ULL);
        }
    }
    var_13 = max((((/* implicit */unsigned int) var_2)), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))), (((/* implicit */unsigned int) var_2)))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                var_14 *= ((/* implicit */unsigned int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_3])) ? (arr_18 [i_3] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4] [22LL] [i_4])) ? ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_16 -= ((/* implicit */long long int) (unsigned char)123);
                var_17 += ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */long long int) ((signed char) var_7));
                            arr_28 [2U] [(unsigned char)23] [i_4] [i_6] [i_4] = max((max((((/* implicit */long long int) ((((/* implicit */int) var_5)) | (var_1)))), (arr_22 [i_3]))), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)71))))) ? (arr_23 [i_6 - 1] [i_6 - 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_5])))))))));
                            arr_29 [i_4] [i_4] [i_6] [i_5] |= ((/* implicit */_Bool) var_1);
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_4] [12ULL] [i_5] [i_5] [i_6] [i_6 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2069305366))))), ((unsigned char)191)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28645))) : (4261412864U)))) ? ((-(((/* implicit */int) arr_21 [i_3] [i_3] [i_5] [i_6])))) : ((-(((/* implicit */int) (_Bool)0)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
