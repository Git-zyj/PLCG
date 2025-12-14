/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132328
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((0U) / (1593888915U))) : (min((((/* implicit */unsigned int) var_11)), (1593888905U)))))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)15)), ((unsigned char)57)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 += ((short) ((_Bool) (_Bool)1));
                                var_15 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned short)53452))) <= (min((((/* implicit */int) var_0)), (arr_5 [i_1] [i_0])))))) >> ((((~(arr_7 [i_4] [i_4 + 1] [i_4] [i_4]))) - (6966414985916289847ULL)))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */short) var_0);
                var_16 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_6)))))))) | (min((((int) arr_5 [20ULL] [i_1])), (arr_5 [i_0] [i_0])))));
            }
        } 
    } 
}
