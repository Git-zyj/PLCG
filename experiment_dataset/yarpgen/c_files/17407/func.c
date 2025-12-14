/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17407
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
    var_20 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(var_12)));
        var_21 |= ((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_22 = ((/* implicit */int) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14211)))));
            arr_5 [i_0] [(short)8] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [(unsigned short)0] [i_0] &= ((/* implicit */short) (unsigned short)32752);
            arr_11 [10U] |= ((/* implicit */signed char) ((536870656U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) / (var_13)));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_2])) - (((/* implicit */int) (signed char)8)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) 394786209);
            var_26 = ((/* implicit */unsigned int) ((4079627311011933991ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14232)))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_16)))))));
            arr_14 [i_0] [i_3] = ((/* implicit */int) var_9);
        }
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)234)))))));
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                arr_22 [i_4] [i_5] [i_4] = ((/* implicit */signed char) arr_18 [i_4]);
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                var_29 ^= ((/* implicit */unsigned int) (-((-(((/* implicit */int) ((((/* implicit */int) (short)7503)) == (((/* implicit */int) var_15)))))))));
                var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) 2U)) ? (min((((((/* implicit */_Bool) arr_21 [(short)6])) ? (arr_21 [(unsigned short)17]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50103))))), (((/* implicit */long long int) ((unsigned int) var_18))))) : (((/* implicit */long long int) (+(((/* implicit */int) min((arr_19 [i_4]), (((/* implicit */unsigned char) (signed char)-87))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [i_6] [i_6])) : (-2147483641)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)14198)) || (((/* implicit */_Bool) -320929363))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6])) || (((/* implicit */_Bool) 3137700355U)))))));
        arr_25 [i_6] [i_6] = ((unsigned int) (((-(((/* implicit */int) (signed char)(-127 - 1))))) > (((/* implicit */int) (unsigned char)21))));
        var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_16 [i_6])), (((((/* implicit */int) var_19)) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11175))) : (var_17))) - (11156LL)))))));
    }
}
