/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180715
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [14])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_4 [i_0] [i_0] [i_0]))) > (((min((7233840422946052288ULL), (((/* implicit */unsigned long long int) (short)32767)))) + (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) var_8))))))));
                var_11 = ((/* implicit */signed char) arr_5 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_2] [i_4]))) ? (((/* implicit */int) ((arr_0 [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3])))))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_4] [i_2]), (arr_12 [i_4] [7])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [3LL])) || (((/* implicit */_Bool) arr_1 [i_4] [i_3]))))) : ((~(((/* implicit */int) var_3)))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_23 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1345109651)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_21 [i_6] [i_6 - 2] [i_6] [i_6 - 2] [i_4]))))) ? (((/* implicit */int) min((((/* implicit */short) arr_21 [i_6] [i_6] [i_6] [i_6 - 2] [i_6])), (var_9)))) : (((arr_21 [i_6] [i_6] [i_6 - 2] [i_6 - 2] [i_2]) ? (arr_18 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 + 1]) : (arr_18 [i_6] [i_6] [i_6] [i_6 - 2] [i_6])))));
                                arr_24 [i_5] [i_5] [i_4] [i_5] [i_6 - 3] [i_2] = (short)-26;
                                arr_25 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_6 - 2] [3U] [i_6] [i_6] [8])) ? (arr_16 [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_6] [i_6 - 1]) : (arr_16 [i_6 - 2] [i_6] [i_6 - 3] [i_6] [i_6]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-32759)), (0ULL)))) ? ((+(((/* implicit */int) arr_5 [i_2] [i_2])))) : (((/* implicit */int) arr_21 [i_3] [i_3] [i_6 - 2] [i_6 - 1] [(short)7])))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) min((min((min((((/* implicit */int) arr_5 [i_2] [i_4])), (var_5))), (((((/* implicit */_Bool) -1731738318)) ? (((/* implicit */int) (_Bool)1)) : (arr_15 [i_4]))))), (((/* implicit */int) ((short) arr_14 [i_3])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4))))) + (((/* implicit */int) var_6))))));
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_4))))) + (9223372036854775807LL)))));
}
