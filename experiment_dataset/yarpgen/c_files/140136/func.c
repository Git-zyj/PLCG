/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140136
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
    var_18 = var_12;
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) (!(var_6))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_0] [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_5)) >> (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))));
            var_21 += ((/* implicit */signed char) (unsigned short)0);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
            var_23 &= ((/* implicit */unsigned short) ((var_6) ? (var_11) : (((/* implicit */int) arr_0 [i_2]))));
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-2625))))))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32112)) - (((/* implicit */int) (short)23))))), (((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49489))) : (7129664658098039236ULL)))))));
            arr_13 [i_0] = ((/* implicit */unsigned short) ((signed char) arr_0 [i_0]));
        }
        var_25 = (((+(((/* implicit */int) arr_5 [i_0] [i_0])))) * (((/* implicit */int) min(((unsigned char)55), (((/* implicit */unsigned char) (signed char)-90))))));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_26 += ((/* implicit */unsigned char) var_11);
            arr_17 [i_0] [i_4] [i_4] = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_17)))))));
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_22 [i_6] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                var_27 -= ((/* implicit */unsigned char) var_10);
            }
            arr_23 [i_0] = ((/* implicit */unsigned short) min(((short)2624), ((short)2904)));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_28 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((min((arr_3 [i_0] [i_0]), (var_4))), (max((arr_27 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (short)1568))))))), (((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_0]))) : (var_8)))));
            arr_28 [i_0] = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0]);
        }
        arr_29 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
    }
    var_29 = ((/* implicit */_Bool) var_11);
}
