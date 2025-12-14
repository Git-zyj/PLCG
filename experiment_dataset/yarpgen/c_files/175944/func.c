/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175944
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
    var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) (_Bool)0)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((unsigned char) ((arr_2 [i_0]) & (arr_2 [6ULL]))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_17))))))) : (var_9)));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13931)) / (((/* implicit */int) (short)-24774))));
        var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) arr_0 [i_0] [i_0]))), (max((((/* implicit */unsigned int) ((unsigned char) var_4))), (((((/* implicit */_Bool) (unsigned short)51605)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (4294967295U)))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)14521))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1] [i_1])), (var_2)))) % (max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24767)) && (((/* implicit */_Bool) max((1686579503U), (((/* implicit */unsigned int) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 7; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (signed char i_5 = 3; i_5 < 7; i_5 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_3), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                                var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-27346)) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (unsigned short)51617)) : (((/* implicit */int) arr_6 [i_2]))))) ? (arr_17 [i_3]) : (((((/* implicit */_Bool) arr_15 [i_1])) ? (arr_17 [i_1]) : (arr_15 [i_2]))))) - (734850016352399674ULL)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) min((((/* implicit */int) min((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) arr_1 [i_2]))))), (max(((+(((/* implicit */int) arr_11 [i_3])))), (((/* implicit */int) ((short) arr_4 [i_1] [9ULL])))))));
                    var_27 = ((/* implicit */_Bool) arr_2 [0]);
                    var_28 = ((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_3] [i_3]);
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) var_10);
        arr_18 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)0]))) : (var_3)))) ? ((+(((/* implicit */int) (unsigned short)13930)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1])))))))));
    }
    var_30 = ((/* implicit */_Bool) (~((~(((((/* implicit */long long int) 2768840346U)) ^ (4147817005911447655LL)))))));
}
