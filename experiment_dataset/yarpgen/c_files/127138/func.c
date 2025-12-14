/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127138
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
    var_16 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((var_7) >> (((((/* implicit */int) ((short) min((-2016550485239606209LL), (((/* implicit */long long int) var_0)))))) + (11231)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_3 + 1] [i_1] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_7 [i_4 + 2] [i_4 + 2] [i_4 + 1])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_4] [i_4 + 1])))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)15)) ? ((+(9394517007805027323ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (arr_1 [i_3] [i_0]) : (((/* implicit */int) (_Bool)1))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_4 - 1] [i_4] [i_4 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_4 - 1])))))))));
                                var_18 = (+(((/* implicit */int) ((arr_0 [i_0 + 3] [i_3 + 1]) == (6752185391373172854ULL)))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)-8043))))) + (9223372036854775807LL))) << (((/* implicit */int) var_8)))), (((/* implicit */long long int) var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) min((var_14), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_0] [(unsigned short)7] [i_5 - 1]), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (var_14)))) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 3]))))) : (((((/* implicit */_Bool) ((int) 0ULL))) ? (max((1ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_6])))) : (((/* implicit */unsigned long long int) 1884496342)))));
                                var_21 = ((/* implicit */short) (((+(max((1859685530), (((/* implicit */int) var_9)))))) == (((/* implicit */int) (((-(((/* implicit */int) (short)-29393)))) < (((/* implicit */int) arr_5 [i_5] [i_5 + 2])))))));
                                var_22 = ((/* implicit */long long int) (!((_Bool)1)));
                            }
                        } 
                    } 
                    arr_20 [i_0 + 3] [i_0 + 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)34094)) == (((/* implicit */int) ((arr_2 [i_0 + 1] [i_0 + 1] [i_2]) >= (arr_19 [i_0] [i_0 + 2] [0] [10LL] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */short) max(((+(var_1))), ((-(((((/* implicit */_Bool) (short)-6606)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-686)))))))));
}
