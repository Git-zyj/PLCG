/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105771
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)98)) ? (var_9) : (var_7)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-126)) * (((/* implicit */int) arr_4 [21ULL])))))))) ? ((((!(((/* implicit */_Bool) -1)))) ? (((int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) arr_2 [i_0 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_15 [i_3 + 1] [i_3 + 1] [i_2] [16LL] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_1 [i_0] [i_1 - 1])) / (((/* implicit */int) var_4)))) * (min((((/* implicit */int) (signed char)-125)), (arr_3 [15] [i_1]))))) - (((((((/* implicit */int) arr_5 [i_3 + 2] [i_2] [i_0])) >= (((/* implicit */int) (unsigned char)123)))) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (short)487))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
                            {
                                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)167)))))));
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_6))))) | (arr_19 [i_4 - 1] [i_4 - 2] [15U] [i_2] [i_4] [i_3 + 3] [i_2])));
                                var_13 = ((/* implicit */short) ((((/* implicit */int) ((arr_3 [i_2] [i_2]) != (((/* implicit */int) arr_10 [i_2] [i_3 + 3] [i_2] [i_3 + 3]))))) + (((((/* implicit */int) (short)-482)) + (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_3]))))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [8LL] [i_3 + 2] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_2 [i_2]))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)100)) && (((/* implicit */_Bool) (short)-506)))))));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-488)) ? (((/* implicit */unsigned int) -1428475942)) : (3108813912U))) / (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_2))))))));
                            }
                            var_14 = ((/* implicit */_Bool) arr_0 [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (short)-10);
}
