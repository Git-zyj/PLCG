/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121548
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_1)))), (max((((/* implicit */int) (unsigned char)29)), (1547445862)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) var_15);
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((long long int) ((unsigned char) var_0)));
                                var_19 ^= ((/* implicit */int) max((((/* implicit */long long int) 1547445863)), ((-9223372036854775807LL - 1LL))));
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-64)), (4294967283U)));
                                arr_17 [i_0] [i_0] [i_2] [(unsigned short)3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + ((~(-2528243476480152281LL)))));
                                var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned short)54149)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) : ((-9223372036854775807LL - 1LL)))));
                            }
                            var_22 = ((/* implicit */unsigned short) min((arr_8 [i_0] [i_1] [i_0]), (var_7)));
                            arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)30)) - (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (signed char)12))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_3))));
                arr_19 [i_0] [i_0] [14LL] = ((/* implicit */signed char) (+(max((4294967292U), (((/* implicit */unsigned int) (signed char)-61))))));
                var_24 -= ((/* implicit */unsigned short) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0))))));
            }
        } 
    } 
    var_25 = ((((((((((/* implicit */long long int) -1547445845)) & (-639472727971393253LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)62)))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))));
    var_26 = ((/* implicit */unsigned int) ((int) var_17));
}
