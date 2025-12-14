/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11457
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (~(((/* implicit */int) max((var_7), ((_Bool)1))))))) : ((~((+(var_9)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 |= ((/* implicit */long long int) var_0);
                                var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((1346293212044263079LL) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((var_4) < (arr_5 [i_4 - 1] [i_2] [i_1])))) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_2] [i_2])))));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_1] [i_2] |= (!((_Bool)1));
                                arr_15 [i_0] [i_3] [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3] [i_1] [i_1] [i_3] [i_4 - 1] [i_4])) - (((/* implicit */int) arr_13 [i_3] [i_3] [i_2] [i_2] [i_4 - 1] [i_3]))))) ? (((/* implicit */int) (!(arr_13 [i_3] [i_1] [i_2] [(_Bool)1] [i_4 - 1] [i_1])))) : (((/* implicit */int) max((arr_13 [i_3] [i_0] [i_4] [i_3] [i_4 - 1] [(_Bool)1]), (arr_13 [i_3] [i_1] [i_2] [i_3 - 1] [i_4 - 1] [i_2]))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) max(((_Bool)1), (arr_10 [i_0] [i_0] [i_1] [i_0])))), (((((long long int) (_Bool)1)) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
