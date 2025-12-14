/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165620
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
    var_20 = ((/* implicit */signed char) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (~(0U))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max((var_21), (arr_11 [0ULL] [0ULL] [(signed char)4])));
                            var_22 = ((/* implicit */signed char) arr_12 [i_2 - 1] [i_1] [i_2] [i_3]);
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_2 - 1] [i_3 + 1] [7LL]))))) ? (0U) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)40360)) : (var_17))) % (((/* implicit */int) arr_14 [i_3 + 2] [i_3] [i_3] [i_3] [i_3] [i_3 - 1]))))))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)25175)), (1196509645U)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)246)) : (arr_1 [i_4]))) : (((((/* implicit */int) var_8)) >> (((var_16) - (2675024190U)))))))) ? (1196509644U) : (((/* implicit */unsigned int) ((int) ((unsigned int) var_7))))));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)18105))))) ? (((((/* implicit */int) (_Bool)1)) << (((2147483647) - (2147483619))))) : (((((/* implicit */_Bool) (short)-2590)) ? (((/* implicit */int) (short)-9830)) : (((/* implicit */int) (short)13524))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14930))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((3098457660U) + (((/* implicit */unsigned int) 1424880238)))))))))));
                            }
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_0]);
                var_27 = ((/* implicit */unsigned char) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            }
        } 
    } 
}
