/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147347
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_20 = arr_13 [i_0] [i_1] [i_2] [i_3] [i_4];
                                arr_14 [i_4] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((short) arr_7 [i_0] [i_4])), (((/* implicit */short) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4])))))) & (((((unsigned int) arr_12 [i_3])) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 262142))))))))));
                                var_21 = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) + ((-(-3429954353259898580LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 2])) - (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 1])))))));
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) (short)21680)) && ((_Bool)1)))), (arr_9 [i_2] [i_1 + 2] [i_1 + 1] [i_1 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 2] [i_2] [i_5 - 4] [i_6 - 1] [i_6]))) : (-5231801630910292844LL))) > (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))), (((((/* implicit */_Bool) 146906199932806711ULL)) ? (((/* implicit */unsigned long long int) 2900262899U)) : (18299837873776744905ULL)))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (signed char)-26)), (arr_17 [i_0])))))) : (((((arr_12 [i_5 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_5 - 2] [i_6]))))) & (((/* implicit */unsigned long long int) (~(arr_5 [i_6] [i_6 + 3] [i_6]))))))));
                                var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_5 - 1] [i_1 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-37)))))) ? (max((arr_0 [i_5 - 2] [i_1 + 2]), (arr_17 [i_1 - 1]))) : ((~(arr_0 [i_5 - 1] [i_1 - 2])))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (((((+(18299837873776744895ULL))) % (146906199932806711ULL))) << (((18299837873776744895ULL) - (18299837873776744879ULL))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) 146906199932806711ULL);
}
