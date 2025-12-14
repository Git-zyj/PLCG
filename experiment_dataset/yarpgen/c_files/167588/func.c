/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167588
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) << (((((((/* implicit */_Bool) arr_5 [i_0 + 3])) ? (var_2) : (((/* implicit */unsigned long long int) var_13)))) - (13137667476871962061ULL)))))) ? (((int) min(((short)28267), (arr_0 [i_2])))) : ((~((~(((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ ((+(((/* implicit */int) ((_Bool) 524287LL)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((var_8) != (((/* implicit */int) ((_Bool) var_1)))));
                                var_17 *= min((2588741416437777551ULL), (((unsigned long long int) arr_10 [i_0] [i_0] [i_0 + 3] [i_1] [i_2 - 1] [i_3])));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524273LL)) ? (-524281LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) | (3683399558834640662ULL));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (signed char i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_13 [i_5] [i_6] [i_7] [i_7] [i_5 + 3])))))) ? (((/* implicit */int) ((2588741416437777564ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_7 + 1] [i_7 + 1])) && (((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_7 + 1] [i_5])))))));
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 12; i_8 += 2) 
                    {
                        for (short i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_4 [i_5] [i_5])), (18446744073709551615ULL))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6358))) : (min((2588741416437777551ULL), (((/* implicit */unsigned long long int) (short)-32746))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_13 [i_5] [i_5] [i_7] [i_5] [i_9 - 2])) * (((/* implicit */int) arr_13 [i_5 + 2] [i_6] [i_5 + 2] [i_8] [i_9])))) : (((/* implicit */int) min((var_10), ((unsigned short)65535))))));
                                var_23 = ((/* implicit */signed char) min((min((15858002657271774028ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (2047ULL)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_5] [i_5]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_13);
}
