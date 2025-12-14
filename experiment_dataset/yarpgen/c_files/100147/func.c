/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100147
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
    var_14 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_8)))) || (((/* implicit */_Bool) ((unsigned int) var_8)))));
                var_15 |= ((((/* implicit */unsigned long long int) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) % (((unsigned long long int) var_2)));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((unsigned short) ((((/* implicit */int) var_1)) & (var_10))))));
                                var_17 = ((/* implicit */unsigned int) var_13);
                                arr_16 [i_0] [5U] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) max((((long long int) var_8)), (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) ((_Bool) 9223372036854775807LL))) : (((/* implicit */int) ((unsigned char) var_11))))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_2)))))) >= (((((/* implicit */int) var_2)) & (var_0))))))));
                                var_19 = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned char) max((((((/* implicit */int) var_13)) | (((/* implicit */int) var_2)))), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_13))))));
                }
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_1)), (var_6))), (((/* implicit */unsigned long long int) ((var_1) || (((/* implicit */_Bool) var_4)))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9198)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35910))) : (9223372036854775807LL)))) >= (((unsigned long long int) var_7))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_8 = 4; i_8 < 15; i_8 += 3) 
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [9] = ((/* implicit */unsigned char) ((short) (-(var_0))));
                        var_23 = var_4;
                    }
                    arr_29 [i_5] [i_5] = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_13)))) - (((var_1) ? (var_10) : (var_10)))))));
                    var_24 = ((/* implicit */_Bool) var_4);
                }
                var_25 = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    var_26 = ((-9223372036854775784LL) & (((/* implicit */long long int) 3088756017U)));
    var_27 = ((/* implicit */int) var_8);
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) -9223372036854775807LL))))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 1380528984U))))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
}
