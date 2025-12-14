/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145019
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */short) min((max((((long long int) var_7)), (((((/* implicit */_Bool) arr_0 [3LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32753))) : (var_0))))), (((/* implicit */long long int) var_5))));
                                var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) >> (((((/* implicit */int) var_4)) - (4801)))))) & (max((min((arr_14 [i_3]), (((/* implicit */long long int) (short)32767)))), (min((9223372036854775788LL), (((/* implicit */long long int) arr_2 [i_0]))))))));
                                arr_16 [i_0] [i_0] [i_3] [(signed char)1] [i_2 - 3] [i_3 + 1] [i_4] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_2 - 2]), (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_2)) - (29238))))))))) : (((/* implicit */int) var_2))));
                                var_13 = ((/* implicit */short) 424859312319384611ULL);
                                var_14 = ((/* implicit */long long int) min((var_14), ((+((+(((((/* implicit */_Bool) (unsigned short)5679)) ? (arr_6 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_3);
    var_16 = ((/* implicit */short) var_3);
    var_17 = ((/* implicit */short) 3095367400U);
}
