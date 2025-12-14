/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17323
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
    var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1723188725869245594ULL)) || (((/* implicit */_Bool) 2979291999U))));
    var_13 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_4)) : (8576131591426362516ULL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2]))))), ((+(arr_4 [i_2] [i_1] [i_0])))))) ? (var_9) : (((/* implicit */int) (!(arr_1 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)9075)) / (((/* implicit */int) (_Bool)1)))))));
                                arr_13 [6ULL] [i_1] [i_1] [i_3] [i_1] [i_0 - 1] [i_0] = ((((((/* implicit */int) arr_11 [i_4 + 1] [i_0] [i_4 + 1] [i_0 + 1] [i_0] [i_0])) * (((/* implicit */int) arr_11 [14ULL] [i_0] [i_4 - 1] [i_0 - 1] [i_0] [(unsigned char)8])))) ^ (((((/* implicit */_Bool) 1315675296U)) ? (((/* implicit */int) arr_11 [i_4] [i_0] [i_4 - 1] [i_0 - 1] [i_0] [17])) : (((/* implicit */int) arr_11 [i_4 + 1] [i_0] [i_4 + 1] [i_0 + 1] [i_0] [i_0 - 1])))));
                                var_17 = ((/* implicit */unsigned char) var_8);
                                var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 15029341864401156755ULL)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_1 [i_0 - 1])))) / (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (_Bool)1)) : (511)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
