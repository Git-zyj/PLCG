/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100288
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) < (0ULL))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((var_7) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_2] [i_2 - 2])) : (((/* implicit */int) ((short) -1LL)))))));
                    var_11 &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [9LL] [i_0] [i_0]))) : (18446744073709551607ULL)))))) > (((/* implicit */int) var_4))));
                    var_12 &= ((16034350243081302567ULL) & (7ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_3)) >> (((15628343567812926704ULL) - (15628343567812926693ULL))))) : (((/* implicit */int) arr_3 [i_4 + 1] [i_2 + 2] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) -1)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_3] [i_4]))) / (391248281432931598ULL))))))))));
                                arr_14 [i_1] [i_0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) && (((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_9 [i_2 - 3] [i_1 + 1])))))));
                                var_14 = ((/* implicit */unsigned long long int) (((+((-(((/* implicit */int) var_10)))))) / (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_13 [i_1 - 1] [i_2 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((var_7) ? ((~(((/* implicit */int) var_2)))) : (min((var_1), (((/* implicit */int) var_10)))))) - (20956)))));
    var_16 = ((/* implicit */int) var_10);
}
