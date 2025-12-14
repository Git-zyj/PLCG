/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171859
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */long long int) var_9)) | (6191815332394740629LL)))))) ? (((/* implicit */int) min((arr_3 [i_0 - 3] [i_1 - 2]), (arr_3 [i_1 - 4] [i_0 - 2])))) : (((/* implicit */int) var_7)))))));
                var_18 = (~((+(6191815332394740647LL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        {
                            arr_18 [i_5] [i_5] [i_2] [i_5] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) << ((-(((/* implicit */int) ((unsigned char) 0U)))))));
                            var_19 = ((/* implicit */unsigned int) var_10);
                            var_20 |= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26809))));
                            arr_19 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */short) min((-6191815332394740648LL), (-6191815332394740641LL)));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */signed char) arr_17 [i_3] [i_5 + 2] [i_2] [i_5])), (var_12)))))))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 6191815332394740647LL)) ? (min((((/* implicit */long long int) var_0)), (6191815332394740647LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_23 &= ((/* implicit */unsigned short) var_2);
        var_24 &= ((/* implicit */int) 6191815332394740647LL);
        var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (arr_20 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (-6191815332394740650LL)));
    }
}
