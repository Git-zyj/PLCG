/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155015
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
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)111))) & (((((/* implicit */long long int) ((/* implicit */int) var_8))) % (var_9)))))) ? (2020999433) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(var_6)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)32254)) : (-295765413))))));
    var_12 = ((/* implicit */signed char) (unsigned short)65504);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24240)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) : (1161744390U)));
                    var_13 = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */long long int) ((unsigned short) var_6));
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1479179704001120749LL))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-(arr_11 [i_4]))))));
        var_18 ^= (~(((/* implicit */int) var_2)));
        arr_13 [i_4] = ((/* implicit */unsigned long long int) (unsigned char)7);
        var_19 = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65496)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))) : (12751023677899418050ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (0LL)))) : (((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_9)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))))));
        arr_16 [i_5] = ((/* implicit */unsigned short) (short)3);
    }
}
