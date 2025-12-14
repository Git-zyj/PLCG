/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178478
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        arr_4 [i_0] = ((/* implicit */signed char) (short)-29157);
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_14 = max((((/* implicit */unsigned short) (signed char)116)), (var_4));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((1114389723), (((/* implicit */int) (signed char)72))))) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_5 [i_1])), (var_5))))) : (((/* implicit */int) min((arr_5 [i_1 - 2]), (arr_5 [i_1 + 1]))))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (unsigned short)56908))) < ((~(((/* implicit */int) (_Bool)1))))));
        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((arr_9 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))))) ? (((672665950039812599ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_2])), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((4722717580239626629LL) - (4722717580239626629LL))))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        arr_20 [i_5] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)32512), (arr_13 [i_3 - 1] [i_2])))) ? (arr_8 [i_3 + 1]) : (((((arr_8 [i_2]) + (2147483647))) << (((var_12) - (16132353318467461772ULL)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_25 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_12 [i_3])))))));
                            arr_26 [i_3] [i_3] [i_3] [i_6] = var_0;
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((unsigned int) 1073741824)) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3 - 1] [i_3] [i_3 - 2] [i_2])))));
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned short) arr_23 [i_3] [i_3] [i_4] [i_3] [i_2]))) * (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)19)), ((unsigned short)65008)))))) <= ((+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)19478)) : (((/* implicit */int) (unsigned short)65535))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_34 [i_3] = ((/* implicit */int) min((min((((unsigned short) var_13)), (((/* implicit */unsigned short) (!(arr_22 [i_3 - 1] [i_3] [i_4])))))), (((/* implicit */unsigned short) ((((-1073741832) & (((/* implicit */int) arr_28 [i_2] [i_3] [i_5])))) != (((/* implicit */int) (unsigned short)33961)))))));
                            var_19 = ((/* implicit */unsigned short) ((int) ((signed char) var_6)));
                        }
                        var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1073741825) >= (((/* implicit */int) (unsigned short)64843)))))) : (((unsigned int) 3221225472U)))))));
                        var_21 += ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        } 
    }
    var_22 = (unsigned short)61709;
}
