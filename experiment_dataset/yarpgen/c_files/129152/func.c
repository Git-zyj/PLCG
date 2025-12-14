/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129152
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
    var_12 &= ((/* implicit */short) (-(((/* implicit */int) ((4044283376U) > (((((/* implicit */_Bool) 8191LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29427))) : (var_6))))))));
    var_13 &= ((((/* implicit */unsigned int) 1391209176)) & (min((3460999962U), (((/* implicit */unsigned int) (short)-25037)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned int) var_0)), (arr_1 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_14 = ((/* implicit */short) min((var_14), (((short) (short)-11081))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 5728693034127147323LL))))), (((((/* implicit */_Bool) -4618607265923227706LL)) ? (5728693034127147323LL) : (-5728693034127147340LL))))), (((/* implicit */long long int) ((short) (signed char)-48))))))));
                                var_16 -= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned char)250)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (685128714U) : (var_10)))) : (5728693034127147323LL))) : (((/* implicit */long long int) 0U))));
                                var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned short)65510))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (2956055345U))))))) : (max((((/* implicit */unsigned long long int) (unsigned char)215)), (((4970415492793393167ULL) << (((/* implicit */int) (unsigned char)2))))))));
                                arr_15 [i_4] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_18 &= -1653639746;
                        var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15395))) | (var_7)));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)15395)) == (((/* implicit */int) (signed char)-92))))) << (((((/* implicit */int) ((signed char) -5728693034127147335LL))) + (94))))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_25 [i_7] [i_1] [i_2] [i_1] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((arr_11 [i_1]) + (2147483647))) << (((((/* implicit */int) var_11)) - (25)))))) : (((/* implicit */unsigned int) ((((arr_11 [i_1]) + (2147483647))) << (((((((/* implicit */int) var_11)) - (25))) - (1))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 5U))));
                        }
                    }
                    arr_26 [i_1] [i_1] [2] [i_1] = ((/* implicit */unsigned int) min((max((-5728693034127147323LL), (((/* implicit */long long int) (signed char)-92)))), (((/* implicit */long long int) ((unsigned int) var_0)))));
                    arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7606630703840572893LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24815))) : (-6851406603705272882LL))) % (-6851406603705272882LL)));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((-1564618737017636739LL) | (-6793008241449227981LL))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((short) -5728693034127147328LL)))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_11))));
}
