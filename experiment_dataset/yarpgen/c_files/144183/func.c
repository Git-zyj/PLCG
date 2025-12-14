/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144183
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
    var_16 = ((/* implicit */_Bool) (-((((+(var_0))) % (((/* implicit */int) (unsigned char)238))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (((_Bool)1) ? (7080548758527880419LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)63228))));
        }
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (-1LL)));
        var_20 = ((/* implicit */unsigned short) var_0);
        var_21 = (~(((/* implicit */int) ((max((((/* implicit */long long int) 1400474711U)), (arr_4 [(_Bool)1] [(signed char)12] [(signed char)12]))) != (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [(signed char)24])))))))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [i_3])))));
        var_23 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) var_3)))));
        var_24 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_9 [i_3])))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_25 = ((((/* implicit */_Bool) -1)) ? (var_14) : (1ULL));
            arr_14 [i_4] [(signed char)4] = (signed char)8;
        }
        for (int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
        {
            var_26 = (unsigned short)44039;
            var_27 = ((/* implicit */unsigned long long int) 1400474711U);
        }
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_4])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [(_Bool)1]))))) : (((1695995449U) / (1610612736U)))));
        var_29 = ((/* implicit */unsigned int) arr_6 [(unsigned short)6]);
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned long long int) max((arr_13 [(unsigned char)7] [i_4]), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) var_3)))))) : (18446744073709551615ULL)));
        var_31 = ((((/* implicit */_Bool) max(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-3LL))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((1591551736644286422LL) < (((/* implicit */long long int) ((/* implicit */int) arr_15 [4ULL] [i_4] [(unsigned short)2])))))), ((unsigned short)65172)))));
    }
    var_32 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (1250075702U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))));
    var_33 = max((((/* implicit */int) var_11)), (-2009722091));
}
