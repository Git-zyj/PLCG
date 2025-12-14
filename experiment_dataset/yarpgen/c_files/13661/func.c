/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13661
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
    var_20 = ((/* implicit */unsigned short) ((8938499670114041806LL) + (-8938499670114041801LL)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_2)))) && (((/* implicit */_Bool) var_17))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (~(8938499670114041806LL)))) & (((unsigned long long int) var_0)))), (max((3698406637101915317ULL), (((/* implicit */unsigned long long int) 2465915499884763266LL))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (8938499670114041789LL))), (((/* implicit */long long int) ((unsigned char) arr_2 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? ((~(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12807)) ? (-8938499670114041822LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12807))))))));
                    arr_11 [(short)14] [(short)14] |= ((/* implicit */int) ((((/* implicit */long long int) min((((((/* implicit */int) arr_4 [i_0] [(short)16] [i_2])) ^ (((/* implicit */int) (signed char)-114)))), (max((var_19), (((/* implicit */int) var_11))))))) + (((((/* implicit */_Bool) 8938499670114041821LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)6] [i_1]))) : (8938499670114041797LL)))));
                }
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((~(((/* implicit */int) (short)12797)))) & (((((/* implicit */int) arr_0 [i_1] [i_0])) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 3; i_4 < 16; i_4 += 3) 
        {
            {
                arr_17 [i_3 - 1] [i_3 - 1] [i_4 - 3] |= ((/* implicit */signed char) min((((/* implicit */long long int) arr_15 [i_3])), (max((((/* implicit */long long int) arr_15 [i_3 - 1])), (-1LL)))));
                var_24 -= ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_12 [i_3] [i_4]))), (((((/* implicit */int) (_Bool)0)) / (-1295246582)))))), (5533659697435429856LL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                var_25 *= ((/* implicit */unsigned long long int) max((max((4278784057U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((var_10) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) == (((/* implicit */long long int) arr_9 [i_5] [i_6] [i_5])))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((var_15) << (((((-8938499670114041822LL) + (8938499670114041852LL))) - (30LL))))) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_6] [i_6]))))))));
            }
        } 
    } 
}
