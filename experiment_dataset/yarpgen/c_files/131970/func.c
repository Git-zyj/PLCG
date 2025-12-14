/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131970
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
    var_11 = ((/* implicit */int) (((+(var_9))) / (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned char) (+((~(max((2ULL), (((/* implicit */unsigned long long int) var_6))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) (unsigned short)3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))) * (18446744073709551613ULL))))));
                    arr_6 [i_0] [(unsigned char)4] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)135)) ? (((unsigned long long int) var_6)) : (min((var_8), (((/* implicit */unsigned long long int) arr_4 [i_1])))))), (min((16356009775283460789ULL), (((/* implicit */unsigned long long int) (unsigned short)55798))))));
                    var_14 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) min((var_4), (arr_3 [i_0] [i_1] [i_0])))))), (min((((/* implicit */int) var_3)), (var_6)))));
                    arr_7 [3ULL] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned char)135))))))));
                            var_16 ^= ((((/* implicit */_Bool) min((5575497610036379683ULL), (3ULL)))) ? (((/* implicit */int) (unsigned short)55818)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)31058)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) max(((unsigned char)133), (var_10)))), (((((/* implicit */_Bool) (unsigned char)216)) ? (-5140511684726602209LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_18 *= min((((((/* implicit */int) (_Bool)1)) * (arr_14 [i_0] [i_1] [i_0] [2LL]))), (((/* implicit */int) ((_Bool) (short)16382))));
                    var_19 ^= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_5]);
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((int) 4294967295U))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (21U))))), (((/* implicit */unsigned int) var_10))));
                }
            }
        } 
    } 
}
