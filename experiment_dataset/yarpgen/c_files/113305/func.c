/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113305
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
    var_10 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1639897835601222976LL))))), ((-(min((arr_2 [i_0] [(unsigned char)16]), (((/* implicit */long long int) var_4))))))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11028541822818761971ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-16301)) < (((/* implicit */int) (short)-16311)))))) : (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) ^ (arr_1 [i_0] [i_0])))), (var_0)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -787408970)) && (((/* implicit */_Bool) var_4)))))))))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (short)16318))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)119)));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~(arr_1 [i_0] [i_0])));
                }
            }
        } 
    } 
}
