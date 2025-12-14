/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114413
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) arr_3 [12U]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) -687550018);
                                arr_15 [i_2] [i_2] = ((int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_2] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_4 + 1]))) : (((long long int) arr_12 [i_2] [(signed char)8] [11ULL] [i_2] [i_2] [11ULL]))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))) ^ (arr_1 [i_0 + 1] [i_0])));
                                arr_16 [i_0 + 1] [i_1] [i_0 + 1] [i_4] = ((/* implicit */unsigned long long int) var_5);
                                arr_17 [i_0] [(short)11] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = var_1;
    var_14 = var_0;
    var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_3))))) + ((+(((/* implicit */int) ((unsigned char) 687549995)))))));
}
