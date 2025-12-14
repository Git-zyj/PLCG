/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146797
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */long long int) arr_1 [i_0]);
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) : (4290772992U)))) - (-1LL)));
        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_2 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_2 - 2])) ? (arr_2 [i_2 - 2]) : (arr_2 [i_2 + 2]))) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) (signed char)-123)), ((-2147483647 - 1))))), (((long long int) (signed char)-107)))))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_22 |= ((/* implicit */_Bool) ((int) (-(((/* implicit */int) min((arr_11 [(_Bool)1]), (((/* implicit */signed char) arr_1 [(_Bool)0]))))))));
                            arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((arr_4 [i_1]) ? (((unsigned long long int) ((((/* implicit */int) var_9)) >> (((3269403020U) - (3269402990U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))));
                            var_23 |= ((/* implicit */short) ((unsigned int) max(((-(((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) min((arr_1 [i_5 + 1]), (arr_1 [13LL])))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_24 &= max((((arr_1 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6]))) : (-1LL))), (((/* implicit */long long int) max((arr_12 [i_1]), (var_8)))));
            arr_19 [i_6] = ((/* implicit */signed char) min((((unsigned int) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) >> (((arr_2 [i_1]) - (12147419530461623449ULL))))))));
        }
        var_25 = ((/* implicit */long long int) arr_17 [i_1] [i_1]);
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_15))));
}
