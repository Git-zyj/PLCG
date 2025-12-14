/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138360
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) var_1);
        var_14 *= ((/* implicit */short) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (short)-31263)) : (((((/* implicit */int) (short)13085)) ^ (((/* implicit */int) (unsigned char)255))))))));
        var_15 -= ((/* implicit */signed char) var_6);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((var_2) > (arr_3 [i_1])))) : (((/* implicit */int) var_0)))))));
        arr_6 [i_1] [(short)15] = ((/* implicit */short) (((+(var_8))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_17 *= ((short) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))));
        var_18 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_7)))) / (((/* implicit */int) var_10))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_6))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (unsigned char i_5 = 3; i_5 < 20; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                    arr_20 [(short)21] [i_3] [i_3] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3] [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (3084581292438573477LL))))));
                    arr_21 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)33089)))) ? (((/* implicit */int) arr_12 [i_3 - 3])) : (((((/* implicit */_Bool) 14289120901097027918ULL)) ? (((/* implicit */int) (short)-22934)) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_22 = var_0;
                        /* LoopSeq 1 */
                        for (short i_7 = 4; i_7 < 22; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) var_0)))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((signed char) var_3)))));
                        }
                    }
                    for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_18 [i_3 + 1] [i_5 + 3] [i_5 + 3] [(signed char)19]))));
                        arr_29 [i_4] [i_3] = ((/* implicit */long long int) var_1);
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            arr_34 [i_9] [(_Bool)1] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_25 [i_3 + 2])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_3))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_11))));
                        }
                        for (signed char i_10 = 3; i_10 < 22; i_10 += 2) 
                        {
                            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-5990916527909323740LL) : (((/* implicit */long long int) ((/* implicit */int) (short)48)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_25 [i_8]))));
                            var_29 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_19 [4ULL]))));
                        }
                        arr_37 [i_5] [i_3] = ((/* implicit */_Bool) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_30 = ((/* implicit */signed char) var_5);
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_11 = 2; i_11 < 20; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) var_7))));
        }
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_3))));
    }
    for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        var_34 += ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41549))) / (10152518570635570046ULL)))) ? (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1984))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)46724)) : (((/* implicit */int) var_4))))));
        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)8128)) ? (15469680761124064507ULL) : (((/* implicit */unsigned long long int) -7714354558752068244LL))));
    }
    var_36 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)126))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_8))) : ((+(((((/* implicit */_Bool) var_7)) ? (var_5) : (18446744073709551615ULL)))))));
}
