/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133750
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
    var_12 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1]))) < (4294967290U))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (short)-27579)) - (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_3])))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [9ULL] [i_0]))))), (((unsigned long long int) var_0))))));
                                var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27564))) == (((min((var_6), (((/* implicit */unsigned int) arr_16 [i_0] [i_4] [i_2] [i_0])))) & (((/* implicit */unsigned int) var_0))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (short)27578)) : (((/* implicit */int) arr_2 [6ULL])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (max((max((var_4), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (arr_13 [i_0] [i_0] [i_1] [i_1]))))))));
                    var_16 = ((/* implicit */long long int) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) % (((((/* implicit */int) var_9)) - (((((/* implicit */_Bool) (short)-5579)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))));
}
