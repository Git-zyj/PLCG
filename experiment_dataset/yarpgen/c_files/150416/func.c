/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150416
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) -258653013683678416LL))) < (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-2147483647 - 1));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_12 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))));
            var_13 = ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) (signed char)-85)) / (((/* implicit */int) (signed char)115)))))), ((-2147483647 - 1))));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_8 [i_2] [i_0] &= ((/* implicit */signed char) ((((unsigned long long int) (unsigned short)16038)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))));
            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) -1105120423);
            var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))))) ? (min((arr_5 [i_0] [i_0]), (1584701832107574436LL))) : (((/* implicit */long long int) max((((/* implicit */int) max(((signed char)-117), ((signed char)19)))), (((((-1) + (2147483647))) << (((((/* implicit */int) (short)25245)) - (25245))))))))));
            var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned short)52711)) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) 411643999)) ? (((/* implicit */int) arr_0 [i_2])) : ((-2147483647 - 1))))));
        }
        var_16 = ((/* implicit */unsigned int) -1105120402);
        arr_10 [i_0] = ((/* implicit */int) max((min((arr_0 [i_0]), (((signed char) var_3)))), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) (unsigned short)15104))))) == (((/* implicit */int) arr_7 [i_0] [(signed char)0] [8U])))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_14 [(signed char)2] [(signed char)2] &= ((/* implicit */int) 15434670149269902573ULL);
        var_17 ^= ((((((/* implicit */_Bool) 1140425971)) ? (((/* implicit */int) (short)-24460)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))) | (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50413))))) << (((min((((/* implicit */int) (unsigned short)37510)), (-2019437965))) + (2019437973))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35941)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) | ((-9223372036854775807LL - 1LL)))) : (var_2)));
        arr_17 [(signed char)13] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)25223)) << (((arr_16 [i_4]) - (2885184347097266826ULL)))))) ? (1578522338U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4])))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned short)0))))) << (((((((/* implicit */int) (short)25228)) << (((-1) + (6))))) - (807280))))))));
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_2))));
        arr_20 [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (348627043742023549ULL)));
        var_21 += ((/* implicit */unsigned short) arr_19 [i_5]);
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */int) ((arr_23 [i_7]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_30 [i_5] [i_5])) : (((/* implicit */int) (short)28589)))))));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [11] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (arr_26 [i_9] [i_8] [i_5])));
                            var_23 += ((/* implicit */signed char) 15U);
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_5] [i_7] [i_8]))));
                            arr_33 [i_6] [i_7] [i_9] = ((/* implicit */long long int) ((signed char) (signed char)-1));
                        }
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            arr_37 [i_10] [16LL] [i_7] = ((/* implicit */signed char) min((16159942383635314670ULL), (((/* implicit */unsigned long long int) (short)25223))));
                            arr_38 [(signed char)12] [10ULL] [10ULL] [i_7] [9] = ((/* implicit */signed char) ((-1059274261824547779LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                            arr_39 [i_5] [i_6] [(signed char)0] [i_8] [i_10] = ((/* implicit */unsigned long long int) arr_18 [i_5]);
                            var_25 = ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_18 [i_10])))) || (((_Bool) (signed char)-20)))) ? (max((((/* implicit */unsigned long long int) (short)-25219)), (15434670149269902573ULL))) : (var_8));
                        }
                        var_26 = ((/* implicit */unsigned int) ((unsigned short) ((-6600785453748833163LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) -6600785453748833151LL);
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((3012073924439649057ULL) << (((arr_18 [i_5]) - (8553229787922362383LL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)3576)))))))));
            var_29 += ((/* implicit */_Bool) max((((/* implicit */short) (signed char)34)), ((short)-19548)));
        }
    }
}
