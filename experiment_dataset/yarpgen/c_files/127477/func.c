/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127477
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
    var_10 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) -1974802440713915327LL)), (10292888050425007634ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) || (((/* implicit */_Bool) var_8)))))));
    var_11 = ((/* implicit */unsigned char) (((~(var_9))) + (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3]))) : (((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (min((min((arr_3 [i_0]), (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) ((int) var_4))))) : (((1974802440713915336LL) >> (((((-9223372036854775807LL) - (-9223372036854775787LL))) + (73LL)))))));
                            arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) min((0ULL), (((/* implicit */unsigned long long int) -3113586972002772554LL))))))));
                            arr_10 [i_1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((var_7), ((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) && (((/* implicit */_Bool) (~(var_2))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                            arr_16 [i_4] [i_1] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((unsigned char) var_1))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_4] [i_5])) : (var_3)))), (67108863LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_4)), (arr_14 [i_4] [i_1] [i_1] [i_4]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((_Bool) 1974802440713915331LL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
            {
                for (int i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    {
                        arr_30 [i_6] [i_7] [i_9] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)143);
                        arr_31 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))));
                    }
                } 
            } 
        } 
        var_15 += ((/* implicit */signed char) (-(1974802440713915326LL)));
        arr_32 [i_6] [i_6] &= 9223372036854775807LL;
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            var_16 |= ((/* implicit */unsigned long long int) ((((-4LL) + (((/* implicit */long long int) ((/* implicit */int) var_6))))) <= (-67108870LL)));
            arr_36 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
        }
    }
}
