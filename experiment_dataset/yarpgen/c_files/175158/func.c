/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175158
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
    var_16 = ((/* implicit */short) ((unsigned long long int) (unsigned char)0));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))), (0LL)));
                    var_18 = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)255)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(signed char)9])))))))), (arr_7 [(signed char)11])));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2 + 2] [i_3])) : ((+(2132058979)))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-27032)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? ((((-(((/* implicit */int) (unsigned char)0)))) ^ ((~(((/* implicit */int) var_0)))))) : (((/* implicit */int) (unsigned char)255))));
                        var_21 = ((/* implicit */signed char) var_12);
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (_Bool)1))));
                                var_23 = ((/* implicit */signed char) arr_16 [i_0] [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_4 + 1] [i_5]);
                                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [(unsigned char)5] [i_4 - 1] [i_1] [i_1] [i_1] [i_2 + 2] [i_1])) * (((/* implicit */int) arr_17 [12LL] [i_4 + 2] [(signed char)7] [(unsigned char)5] [i_2] [i_2 + 1] [i_2]))))) <= (((((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned short)3] [i_2] [i_4 + 1] [i_5])) & ((~(arr_14 [10LL])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((max((0ULL), (((/* implicit */unsigned long long int) 0LL)))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) << (((((max((((/* implicit */long long int) var_6)), (var_4))) % (((var_3) * (((/* implicit */long long int) ((/* implicit */int) var_11))))))) - (1020863896074802975LL)))));
}
