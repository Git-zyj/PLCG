/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164880
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((arr_0 [i_1]) % (arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1 + 2] [i_3] [i_2] = ((/* implicit */int) ((long long int) (unsigned short)65535));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_1] = ((short) arr_4 [i_1] [i_1] [i_3]);
                                var_17 = ((/* implicit */unsigned int) min((((((/* implicit */int) (short)11068)) & (((/* implicit */int) (short)24094)))), (((/* implicit */int) arr_1 [i_2 + 1] [i_0]))));
                                arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) : (var_9))))))), (((((/* implicit */int) ((((/* implicit */_Bool) 12990953958399969064ULL)) && (((/* implicit */_Bool) 2147483647))))) >> (((((/* implicit */int) var_0)) + (397)))))));
                            }
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (short)17433)) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) 2147483647)))))) : (((/* implicit */int) (short)-24094)))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1 + 3]))))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_3))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((var_14), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) max(((short)-16186), (((/* implicit */short) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((var_11), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), (var_5))))))));
    var_22 = ((/* implicit */long long int) 2147483647);
}
