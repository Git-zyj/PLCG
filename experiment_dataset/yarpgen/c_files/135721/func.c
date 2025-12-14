/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135721
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) >> (((((/* implicit */int) arr_2 [i_0])) - (114)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [3] [i_0])), (((((/* implicit */int) (unsigned char)248)) << (((-1915318345) + (1915318355)))))));
                            var_18 = ((/* implicit */signed char) arr_4 [i_0] [i_1 + 1] [i_1 + 1] [i_3]);
                            var_19 = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)111)) + (((/* implicit */int) (unsigned char)111)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((short) 2147483647))) ? (((/* implicit */int) var_8)) : (arr_1 [i_1 + 1] [i_0]))), (((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2]))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                            var_22 = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0]));
                            var_23 = ((/* implicit */unsigned char) max((max((((arr_14 [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))), (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 + 2] [i_5 + 1])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0] [i_0])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((407308759) & (max((((/* implicit */int) (signed char)3)), (arr_1 [i_0 - 1] [2])))))) ? ((~(max((((/* implicit */int) var_4)), (var_13))))) : (((((((/* implicit */int) arr_2 [(_Bool)1])) & (var_13))) ^ (max((arr_12 [i_0 - 1] [i_0] [(short)16] [i_1]), (((/* implicit */int) (signed char)-2))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_4);
}
