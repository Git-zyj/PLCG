/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170705
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
    var_18 = var_13;
    var_19 = ((/* implicit */unsigned long long int) ((((var_1) / (-136908811))) + (834238381)));
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_5)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (unsigned short)65535)))) + (-15)));
                        arr_13 [i_0] [i_0 - 3] [i_3] [i_0] [6U] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [12] [12] [i_3]) : (((/* implicit */int) (unsigned short)42299)))) / (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((4294967291U) - (4294967269U))))))), (((/* implicit */int) ((signed char) (short)(-32767 - 1))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            var_23 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_10)) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4 - 1] [i_1] [i_3] [i_0] [i_0] [i_1] [i_0])) & (-1625460841)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -834238380)))))) : (max((((/* implicit */unsigned int) var_6)), (4294967283U)))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_3] [23] [i_1] [i_0 + 1] [i_0])) ? (136908787) : (2147483647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 834238387)))) < (arr_4 [i_1] [i_0]))))))))));
                        }
                        for (int i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) min((33U), (4294967283U)))) != (var_16))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((arr_1 [i_3]), (((/* implicit */unsigned long long int) (short)-22093)))))));
                        }
                        var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_4 [i_0 - 2] [i_0 + 3])))) && (((/* implicit */_Bool) var_13))));
                    }
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_28 ^= ((/* implicit */unsigned long long int) ((unsigned short) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)14197)))));
                        arr_20 [i_0 + 3] [i_6] [i_0] [i_0] [i_0 + 3] = ((/* implicit */short) 136908814);
                    }
                    var_29 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)10)))) ? (max((((((/* implicit */int) arr_0 [i_2 - 1] [i_0 + 1])) & (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned short)51350)))) : ((~((~(var_4)))))));
                    var_30 |= ((/* implicit */int) (-(max((((/* implicit */unsigned int) (short)-9482)), (((((/* implicit */_Bool) arr_9 [i_0] [2U] [2U] [i_2] [(unsigned short)18] [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                }
                var_31 = ((/* implicit */unsigned long long int) ((int) (short)8128));
                var_32 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((16180949531942412843ULL) * (((/* implicit */unsigned long long int) var_3))))))) + (var_16)));
                arr_21 [i_0] = ((/* implicit */long long int) 0ULL);
                var_33 -= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 4294967263U)), (11493283513459783818ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15413)))));
            }
        } 
    } 
}
