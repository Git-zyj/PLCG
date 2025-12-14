/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111840
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
    var_11 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_11 [i_0 + 2] [i_2 - 2]))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (3812888322092715576LL)))) ? (((((/* implicit */_Bool) arr_4 [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (short)13796))))))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)13796)), (var_4)))) ? (((/* implicit */int) ((max((-2857847592453571356LL), (((/* implicit */long long int) arr_7 [i_1])))) == (((long long int) var_0))))) : (((/* implicit */int) ((signed char) arr_4 [i_0 - 4])))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (signed char)-21))));
                            arr_18 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)22447))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) (short)13804)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) : (1204500504917765334ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32758)))))));
                            var_14 = ((/* implicit */short) 261632LL);
                            arr_23 [i_2] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_9))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_26 [i_0] [i_1] [i_2 - 2] [i_6] = ((/* implicit */unsigned long long int) ((long long int) arr_19 [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_0 - 1] [i_2] [i_2 - 1]));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)4914)) ? (734215609835045755LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6298))))) + (((((/* implicit */_Bool) 2143289344U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (-534993629560858850LL))))))));
                        }
                        for (long long int i_7 = 3; i_7 < 21; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)6298)), (((unsigned int) (unsigned char)37))));
                            var_17 = ((/* implicit */long long int) ((((var_6) >= (var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 4]))))) : (((/* implicit */int) (signed char)-64))));
                        }
                    }
                    for (unsigned short i_8 = 3; i_8 < 23; i_8 += 2) 
                    {
                        arr_32 [i_0] [i_0] [i_2] [i_0] [i_8] = ((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [i_8 - 2]);
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 3; i_9 < 22; i_9 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned char) ((signed char) ((((/* implicit */int) (unsigned char)40)) << (((((/* implicit */int) var_5)) - (28746))))))))));
                            arr_35 [i_0] = ((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) arr_24 [i_2 - 1] [i_2 - 1] [i_8 - 1] [i_8] [i_9 - 1])), (534993629560858849LL))));
                            var_19 *= ((/* implicit */_Bool) var_4);
                            var_20 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_9 - 1] [i_9 - 1] [i_8 - 3] [i_0])))))));
                        }
                        arr_36 [i_0] = ((/* implicit */long long int) arr_34 [i_0] [i_1] [i_1] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            {
                                arr_42 [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)80))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) / (var_8)))));
                                arr_43 [i_0 - 1] [i_10] [i_2] [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_5))));
        arr_44 [i_0 - 3] [i_0 - 1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) + (var_10))))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_27 [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0])) + (min((arr_8 [i_0 - 1]), (((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_0])))))))));
    }
    var_22 += ((/* implicit */long long int) var_4);
}
