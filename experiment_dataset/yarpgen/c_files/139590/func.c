/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139590
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned int) -4636407482351440989LL);
                                arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1416454625U)), (-5627199737063022327LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) (unsigned short)60349)), (4294967270U)))));
                                arr_17 [i_3] [i_1] [(short)7] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) -5627199737063022337LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((-5627199737063022327LL), (1832114315933752415LL)))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -5627199737063022327LL)) ? (5627199737063022327LL) : (((/* implicit */long long int) 4294967280U)))), (((/* implicit */long long int) var_9))));
                arr_19 [i_0] [(unsigned short)5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)204)) ? (var_6) : (var_5)))) : (var_13)));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */signed char) var_11);
                            var_18 = (signed char)45;
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_11);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)28656)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))));
    var_21 = ((/* implicit */unsigned long long int) var_5);
}
