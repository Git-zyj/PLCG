/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119199
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = arr_2 [i_0] [i_0] [i_0];
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) / (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0] [i_0]))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = var_17;
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_3])))) ? (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_6 [i_2] [i_4])) - (55239))))) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_4] [i_3] [7LL] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_16))))))))) : ((+(((/* implicit */int) arr_5 [i_2] [i_2] [7LL]))))));
                                arr_12 [i_4] [7LL] [i_1] [i_1] [i_4] = ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [i_4])) + (((/* implicit */int) var_13))))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_5) : (729479304647626582LL)))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */long long int) var_1);
                arr_18 [i_5] [i_6] = ((/* implicit */unsigned short) arr_16 [8LL] [i_6]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_12))));
    var_25 += ((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31921)) << (((((/* implicit */int) var_14)) - (18264)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
}
