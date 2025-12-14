/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151225
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
    var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-1)), (var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0 + 1] [i_0] = ((/* implicit */int) ((unsigned int) ((0U) / (((/* implicit */unsigned int) -1969946799)))));
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : ((-(arr_10 [i_0 - 1] [i_0 + 1])))));
                        arr_12 [i_0 + 1] [i_0] [i_2] = ((/* implicit */int) arr_10 [i_0] [i_0 - 1]);
                        var_23 = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
                        arr_13 [i_3] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) -1969946801)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1987129627832521418ULL)))));
                    }
                }
                for (signed char i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
                {
                    var_24 = var_1;
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [14ULL] [14ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_5)))))) && (((/* implicit */_Bool) 0))));
                    arr_17 [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((arr_10 [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [12ULL])))))));
                    arr_18 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                }
                var_26 = ((/* implicit */signed char) arr_5 [i_0 + 1]);
                var_27 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
}
