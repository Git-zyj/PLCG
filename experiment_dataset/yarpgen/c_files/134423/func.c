/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134423
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_5);
                                var_14 = ((/* implicit */unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 714088632))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)96)), (arr_11 [9U])));
                    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [(short)14] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            {
                arr_18 [i_5] [i_5] [i_6] = ((/* implicit */int) min((arr_14 [i_5] [4]), (var_1)));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_17 = var_10;
                                arr_26 [i_6] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 714088607)) ? (var_0) : (((int) 3305344182U)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                {
                    arr_29 [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) 714088645);
                    var_18 = var_4;
                    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)229)) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_28 [i_5] [i_5])) : (((/* implicit */int) arr_19 [i_10] [i_6 - 1] [i_5]))))))));
                }
                for (long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    arr_32 [i_6] [9] [5U] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -714088622)) && ((((!(((/* implicit */_Bool) (unsigned char)40)))) && (((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_11]))))));
                    var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_25 [i_5] [4U] [(unsigned short)12] [i_6 - 1] [10ULL] [i_11])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)176)) && (((/* implicit */_Bool) arr_19 [i_5] [i_6 + 1] [i_6 + 1]))))) : (((/* implicit */int) max((((/* implicit */short) ((unsigned char) (unsigned char)215))), (var_4))))));
                    var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (-(714088595)))))));
                }
            }
        } 
    } 
    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (signed char)5))))) - ((+(((/* implicit */int) (unsigned char)71))))))) ? (var_10) : (max((max((-370887267), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 714088586)) * (999124797U)));
}
