/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122358
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22434)) ? (((/* implicit */int) var_6)) : (2147483639)))) ? (((/* implicit */int) max(((unsigned char)15), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) var_9))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)204))))) ? (max((9929109278544519007ULL), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) (-(2147483639))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_3)) >= (var_14)));
    var_19 ^= ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)8462)) ? (((/* implicit */int) (signed char)-123)) : (-1715570735))) / (-2147483639)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_1] = max((((/* implicit */short) ((_Bool) ((((/* implicit */int) var_4)) > (var_8))))), (max((var_9), (((/* implicit */short) (_Bool)0)))));
                                var_20 += ((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_3]);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_21 = (-(max((((((/* implicit */_Bool) var_14)) ? (var_13) : (-1715570735))), (-1715570742))));
                    arr_15 [i_0] = ((/* implicit */long long int) (unsigned char)219);
                    arr_16 [i_0] [i_0] [23U] [i_0] = ((/* implicit */long long int) ((unsigned char) var_7));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3471234867197473101ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-93))))) && (((/* implicit */_Bool) arr_13 [(_Bool)1] [i_1] [i_6] [i_6]))));
                    var_22 *= ((/* implicit */short) ((10862997644761013680ULL) << (((((((/* implicit */_Bool) -7533145721447017746LL)) ? (8458976559399858643LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (8458976559399858589LL)))));
                }
                for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_26 [i_0] [i_0] [5LL] [(unsigned short)20] [i_0] [i_0] = ((/* implicit */unsigned char) 1568025815599132271LL);
                        var_23 ^= ((((((/* implicit */_Bool) -1568025815599132258LL)) ? (arr_1 [i_8]) : (((/* implicit */int) var_11)))) | (((((/* implicit */_Bool) 8458976559399858643LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)16055)))));
                    }
                    arr_27 [i_7] [i_7] |= ((/* implicit */long long int) (unsigned char)219);
                }
                var_24 &= max((((/* implicit */long long int) 4020327137U)), ((((_Bool)1) ? (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1] [1U])) : (-6850839352970497416LL))));
                var_25 = ((/* implicit */int) -4824163329430107042LL);
            }
        } 
    } 
}
