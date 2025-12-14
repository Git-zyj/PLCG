/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120020
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
    var_17 = ((/* implicit */unsigned char) max((var_15), (((((/* implicit */_Bool) max(((unsigned short)35425), ((unsigned short)19764)))) ? (-4599400016550470224LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10451)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_11 [(_Bool)1] [i_3] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (18446744073709551615ULL)));
                                arr_12 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((arr_3 [i_1 + 3] [i_1 - 2]) >> (((arr_3 [i_1 + 2] [i_1 - 1]) - (13826514009519932745ULL))))) | (((arr_3 [i_1 - 1] [i_1 + 1]) | (18446744073709551596ULL)))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_2] [i_1 + 1] [i_0] [i_0])))) - (((long long int) ((((/* implicit */int) arr_9 [i_2] [i_1] [8U])) - (((/* implicit */int) var_5)))))));
                    arr_14 [i_2] [i_1] [i_0] = arr_0 [i_0] [i_0];
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_0);
}
