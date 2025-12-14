/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12447
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
                {
                    var_20 &= ((((/* implicit */_Bool) ((short) var_18))) ? (((/* implicit */int) arr_3 [i_2 + 3] [i_2 + 2] [i_2 + 4])) : (((/* implicit */int) (!(arr_3 [i_2] [i_2 + 3] [16U])))));
                    arr_6 [16] [i_1] [i_1] [15U] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 987458995)), (min((var_18), (((/* implicit */unsigned int) var_14)))))))));
                }
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((9223354444668731392LL), (((/* implicit */long long int) (unsigned short)65530))))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_22 -= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)233)) > (((/* implicit */int) (unsigned char)22)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned char)220)))))))) : ((~(min((((/* implicit */unsigned long long int) (unsigned short)48661)), (var_12)))))));
                        var_23 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) - (((/* implicit */int) arr_3 [i_3 + 4] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_3])) : (((unsigned long long int) (unsigned short)47519)))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) & (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */unsigned long long int) var_2)) : (((arr_2 [i_0] [i_0 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))))), (((/* implicit */unsigned long long int) (~((~(3151115649U)))))))))));
                        var_25 = ((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)3] [i_0 + 1] [i_0]);
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), ((unsigned char)127)));
                        arr_20 [17] [i_1] [i_6] = ((/* implicit */long long int) (signed char)127);
                    }
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_27 = (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)23)), (arr_17 [i_0] [i_0])))) + (((/* implicit */int) ((648933824U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))))))));
                        arr_24 [i_7] [i_1] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(74567323U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)229)), (arr_17 [i_0] [(unsigned char)18])))) : (((((/* implicit */_Bool) (short)-4337)) ? (((/* implicit */int) (signed char)123)) : ((-2147483647 - 1))))));
                        var_28 = ((((((/* implicit */_Bool) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)55890))))) ? (min((15172875943595117049ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_17)))))) * (((/* implicit */unsigned long long int) (-(arr_7 [i_0 - 3] [i_3] [(signed char)16])))));
                        arr_25 [2LL] [i_1] &= ((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (arr_12 [i_3]) : (((/* implicit */int) (unsigned char)232))))), (((((/* implicit */_Bool) (unsigned short)3615)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (-(arr_13 [i_3 - 1] [i_1 + 3] [i_0 + 2]))))));
                        var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(var_0)))) ? (max((var_12), (((/* implicit */unsigned long long int) 74567323U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (var_11)))))), ((+(3273868130114434585ULL)))));
                    }
                    var_30 = ((/* implicit */signed char) arr_16 [i_1] [17LL] [i_1] [17LL]);
                }
                var_31 = ((/* implicit */unsigned long long int) max((((1263875162) & (2147483633))), ((((((~(((/* implicit */int) (unsigned char)125)))) + (2147483647))) >> (((arr_13 [i_1 + 3] [i_1] [i_1]) + (1713037749)))))));
                var_32 = ((/* implicit */signed char) (-(((long long int) arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1]))));
                arr_26 [11U] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_4 [i_1 + 3] [i_1 + 2] [i_1])), (((arr_2 [i_1] [i_0]) / (((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_0])))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1263875150))))));
                var_33 -= ((/* implicit */unsigned short) ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) -1984046418))))))) : (max((((/* implicit */long long int) 234881024U)), (((((/* implicit */_Bool) arr_11 [i_1] [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (8998403161718784LL)))))));
            }
        } 
    } 
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((549755809792LL) - (((/* implicit */long long int) 4060086272U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (3522890023U)))))))) : (var_7)));
}
