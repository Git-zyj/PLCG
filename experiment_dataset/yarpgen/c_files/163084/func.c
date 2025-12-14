/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163084
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
    var_10 |= ((/* implicit */signed char) 0LL);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((4294967289U) / (var_8)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-30))))) : (0LL)))));
                        var_12 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0 + 3] [i_1] [i_0 + 3]))) ? (4294967289U) : (((/* implicit */unsigned int) 0))));
                        arr_9 [i_3] [(unsigned char)1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) ((1615266409576139276LL) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 3] [i_3] [i_3]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */long long int) var_9);
                            arr_15 [i_0 + 3] [i_0 + 2] [15LL] [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((6U) | (var_6)))) & ((~(1125899906842623LL))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)55503)) : (((/* implicit */int) (signed char)-51))))))))));
                            var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((((/* implicit */int) arr_10 [i_3] [i_2] [i_1])) * (((/* implicit */int) (signed char)-46))))))), (((arr_3 [i_0 + 2] [i_4 - 1]) / (arr_3 [i_0 + 2] [i_4 - 1])))));
                            var_14 |= ((/* implicit */unsigned int) (~(((-1615266409576139276LL) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [i_0])))))));
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 1022102774)) | (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1615266409576139288LL)) || (((/* implicit */_Bool) (short)-21248)))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 3; i_5 < 24; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) -1125899906842624LL);
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) 0)) / (var_3))))));
                            var_18 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 1192082093U)) && (((/* implicit */_Bool) (short)14386)))));
                        }
                        var_19 |= ((/* implicit */unsigned short) -1615266409576139282LL);
                    }
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)10032)) || (((/* implicit */_Bool) 6ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((arr_0 [i_0 - 1]) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
                    var_21 |= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((-1615266409576139269LL) + (9223372036854775807LL))) >> (9LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_1)))))));
                    var_22 = ((/* implicit */_Bool) 735114617);
                }
            } 
        } 
    } 
}
