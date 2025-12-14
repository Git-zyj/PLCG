/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121411
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
    var_11 = ((((/* implicit */_Bool) max((max((var_5), (var_5))), (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (_Bool)0)))))))) && (((/* implicit */_Bool) var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)-29775)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) (-(max((var_3), (((/* implicit */int) (_Bool)1))))))) : (((unsigned int) var_1))));
                    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_5) : (((/* implicit */int) var_2))))))) : (((max((((/* implicit */unsigned int) (short)8191)), (var_6))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)47421)) : (((/* implicit */int) var_1)))))))));
                    var_14 = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) (short)-19230)) && (((/* implicit */_Bool) 22138950U)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)14737)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)22] [i_1] [(short)20] [i_4 - 2]))) : (((arr_9 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) ((short) 1008U))))))));
                                var_16 -= ((/* implicit */_Bool) ((((((int) 1134721285U)) | (((/* implicit */int) arr_3 [i_0] [i_3 + 3] [i_2])))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2930501028206643483LL)) ? (-1152641318) : (var_5)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [(short)3])) ? (((/* implicit */int) (unsigned short)27426)) : (var_3))) : (arr_0 [i_1] [i_0]))) - (27403)))));
                                var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_2 [i_4 - 3])))), (((((/* implicit */_Bool) arr_2 [i_4 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_4 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */short) (-(var_3)));
}
