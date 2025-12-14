/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187048
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
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) && ((!(((/* implicit */_Bool) var_14)))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))))), (var_6))) : (((/* implicit */int) (unsigned short)43717))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_2] [0U] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)0))))) && (((/* implicit */_Bool) 8U))));
                            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_2]), (((/* implicit */unsigned short) arr_0 [i_2] [i_1]))))) && (((/* implicit */_Bool) ((unsigned long long int) var_10))))))));
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [10ULL]))));
                            var_21 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_2] [i_2 + 2])) ? ((-(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned short) ((unsigned long long int) (short)22199));
                            var_23 *= ((/* implicit */signed char) min((max((arr_9 [i_0 - 1] [i_4 - 1] [i_5] [i_5 - 1]), (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_0] [1ULL] [i_0] [(unsigned char)9]))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)84)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : ((+(((/* implicit */int) arr_5 [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_28 [i_8] [i_7] [i_8] [(unsigned short)18] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_8])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_22 [i_6] [(signed char)16] [i_6])), (arr_19 [i_7]))))));
                            arr_29 [i_7] [i_7] [i_8] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-22195)) && (((/* implicit */_Bool) 1U))))), (((((/* implicit */_Bool) arr_17 [10] [14U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_7] [i_8] [i_9]))) : (var_8)))))));
                            arr_30 [i_8] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) arr_22 [(_Bool)1] [i_7] [(_Bool)1]);
                        }
                    } 
                } 
                arr_31 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(arr_20 [(unsigned char)20] [(unsigned char)20])))), (min((var_3), (((/* implicit */long long int) arr_21 [i_6] [i_6] [i_6]))))))) ? (min((7759746856769350452ULL), (((/* implicit */unsigned long long int) ((unsigned short) 6U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_23 [i_6] [(short)18] [i_7])))))));
                arr_32 [i_7] [(signed char)18] [i_6] |= ((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_6] [i_6]);
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(arr_19 [i_7]))))));
                var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_27 [i_6] [i_7] [i_6] [i_6]))));
            }
        } 
    } 
}
