/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118923
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_15))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] &= ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0 - 2] [i_0 - 2]))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 = var_3;
                            arr_9 [i_0] [i_1] [i_2 - 1] [i_3] = max((0U), (4294967295U));
                            var_19 = max((((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_3 - 1] [11ULL])) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_2 - 2] [i_1] [i_0])) ? (var_1) : (((/* implicit */int) var_2)))) : (arr_5 [i_2 - 2] [i_0 - 1] [i_0 - 1]))), (((int) var_11)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    arr_13 [i_4] [19ULL] [i_0] = ((/* implicit */int) arr_7 [14U] [14U] [i_4] [i_4]);
                    var_20 = ((/* implicit */unsigned char) (-(arr_5 [i_0] [i_1] [i_4])));
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -3508424661207141743LL))))), (4294967295U)));
                }
                var_22 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1474584900)) || (((/* implicit */_Bool) arr_8 [i_1])))))) : (max((arr_0 [i_0 - 1]), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) (~(((1223645088U) & (((/* implicit */unsigned int) arr_12 [i_0])))))))));
            }
        } 
    } 
}
