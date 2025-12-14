/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140697
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned int) ((arr_6 [i_2]) - (((/* implicit */unsigned long long int) min((1469337012), (((/* implicit */int) (unsigned char)229)))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(var_6)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) min((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_12))))), ((+(((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_2] [i_2] [i_2 + 2] [i_3]))))));
                        arr_13 [i_0] [i_1] [(unsigned char)10] [i_2] = ((/* implicit */_Bool) arr_6 [i_2]);
                        var_18 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((((arr_5 [i_2] [i_3]) + (2147483647))) << (((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_3])))))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3072686211U)))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) (~(var_15))))))) ? (((((/* implicit */int) (signed char)59)) ^ (((/* implicit */int) (signed char)-61)))) : (var_7)));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((arr_0 [i_4]), (((/* implicit */unsigned short) (signed char)64))));
                        var_21 = ((/* implicit */short) (unsigned short)8191);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned short)2546))))));
    var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 579789475U)) ? (((/* implicit */int) (unsigned short)2546)) : (var_7)))) ? (((/* implicit */int) ((var_8) <= (var_1)))) : (((/* implicit */int) (_Bool)1))))));
}
