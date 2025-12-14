/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116535
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
    var_17 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_3)))), (-5878935045007381957LL))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3917))) <= (4184173976U)))))));
                                var_18 = ((/* implicit */signed char) (((-((+(-1346623430))))) < (((((/* implicit */_Bool) ((-1346623456) & (((/* implicit */int) var_1))))) ? (((int) 9771395674593802733ULL)) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10))))))));
                                arr_14 [i_0] [i_1] [(signed char)0] [1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
                                var_19 -= ((/* implicit */unsigned char) 4294967289U);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] = ((/* implicit */int) arr_7 [i_2] [i_0] [i_1] [i_0] [1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_24 [i_0] = ((/* implicit */unsigned int) var_12);
                                arr_25 [i_6] [i_5] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_15)) > (((/* implicit */int) var_1)))) ? (max((max((((/* implicit */unsigned long long int) -1346623430)), (9771395674593802736ULL))), (((2303581715675218095ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))))))) : (((/* implicit */unsigned long long int) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */int) (signed char)99);
    var_21 = ((/* implicit */signed char) var_9);
}
