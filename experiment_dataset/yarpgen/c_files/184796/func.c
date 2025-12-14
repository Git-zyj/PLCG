/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184796
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned short) (+(3486268651U)));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_9 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)5044)), (2305843009213693951ULL)))) ? (((/* implicit */unsigned long long int) 3486268651U)) : (((arr_7 [i_0] [i_1] [i_1]) % (((/* implicit */unsigned long long int) 3486268652U))))))));
                    arr_10 [i_0] [i_0] [i_2] [(unsigned short)13] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) (+(arr_7 [(unsigned char)10] [i_1 + 1] [13ULL])));
                        var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1)))));
                        var_16 += ((/* implicit */unsigned long long int) ((long long int) var_10));
                    }
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)29305);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        var_17 &= ((/* implicit */int) (_Bool)1);
                        var_18 |= ((/* implicit */signed char) max((((int) (~(((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_1] [i_0]))))), (((((/* implicit */_Bool) min(((unsigned short)36211), ((unsigned short)29315)))) ? (((((/* implicit */_Bool) -8166162360659240627LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) (unsigned char)255))))))));
                        arr_21 [i_0] [i_0 - 2] [i_1] [i_5] [i_0] = ((signed char) (unsigned short)65535);
                        arr_22 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned short)5] [i_6] [(unsigned short)5] [i_6 + 2] [i_0])) ? (((/* implicit */int) (unsigned short)36238)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 4; i_7 < 12; i_7 += 3) 
                    {
                        arr_27 [12] [i_0] [i_5] [i_7] = ((/* implicit */signed char) var_6);
                        var_19 = ((unsigned short) (+(3486268651U)));
                        arr_28 [i_0] [i_5] [i_7] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_9))))));
                    }
                }
                arr_29 [i_0] = ((/* implicit */long long int) (short)-21938);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_4);
    var_21 = ((/* implicit */unsigned int) ((signed char) (short)1362));
    var_22 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52281)) ? (var_7) : (829116806427207762LL)))) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551615ULL)));
    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-21))));
}
