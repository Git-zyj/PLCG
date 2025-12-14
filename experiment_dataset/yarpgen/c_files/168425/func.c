/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168425
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */int) var_1)), ((~((((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10))))))));
    var_18 = ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = var_0;
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (9223372036854775807LL)));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */long long int) max(((!(var_13))), (arr_10 [(_Bool)1] [i_1 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) (short)-512)), (max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) var_7))))))))));
}
