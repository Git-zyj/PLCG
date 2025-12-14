/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158015
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
    var_20 = var_1;
    var_21 = ((unsigned char) (+(((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)127)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)14] [i_0] = ((/* implicit */int) (signed char)104);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) ((int) arr_10 [i_1]))) && (((/* implicit */_Bool) max(((signed char)105), ((signed char)104)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)109)), ((unsigned short)65530)))))))));
                    arr_11 [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) (unsigned short)5))))));
                }
                var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (arr_4 [i_0] [i_0])));
            }
        } 
    } 
}
