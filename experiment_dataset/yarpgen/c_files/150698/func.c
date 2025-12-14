/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150698
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
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))) ? (((int) (short)(-32767 - 1))) : (((int) var_15)))) * ((+(((/* implicit */int) var_11))))));
    var_20 += ((/* implicit */long long int) var_1);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned long long int) var_6)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2338)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63197))) : (4294967278U)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)32767)))) | (var_9))) >> (min((((/* implicit */unsigned long long int) arr_2 [i_3])), (((arr_6 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
                            var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 19LL)))));
                            var_24 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_17)))))) + (((((/* implicit */long long int) ((/* implicit */int) ((8787171359537830960LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2358))))))) - (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_3] [1U] [5] [i_1 - 1] [i_0]) : (((/* implicit */long long int) 4294967283U))))))));
                            arr_9 [i_0] [i_0] [(signed char)7] [3U] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)31)), (((((/* implicit */int) (unsigned short)2338)) | (((/* implicit */int) (unsigned short)63193))))));
                        }
                    } 
                } 
                arr_10 [2U] [2U] = ((/* implicit */long long int) 18U);
                arr_11 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) arr_6 [i_1]);
                var_25 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])) > (((((/* implicit */_Bool) (unsigned short)63196)) ? (arr_6 [i_0 - 1]) : (((/* implicit */unsigned long long int) 4294967295U)))))))));
            }
        } 
    } 
}
