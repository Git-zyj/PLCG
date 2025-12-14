/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11232
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)0)), (0U)));
                                var_11 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
                                var_12 = ((/* implicit */short) ((((-6898483940297002254LL) + (9223372036854775807LL))) << (((((-2046135258) + (2046135265))) - (7)))));
                                var_13 = ((/* implicit */signed char) 152382285);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) -2046135258)) ? (((/* implicit */int) (short)19295)) : (((/* implicit */int) (_Bool)1)))))) - ((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */unsigned int) var_8)) ^ (max((min((((/* implicit */unsigned int) -2046135256)), (615735751U))), (((/* implicit */unsigned int) min((var_4), (var_4)))))));
    var_16 = ((/* implicit */short) (unsigned char)227);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((919732828U) >= (4294967295U))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1181))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_18 = var_6;
        var_19 += ((/* implicit */unsigned int) min((min((arr_15 [i_5] [i_5]), (((/* implicit */unsigned long long int) -2046135279)))), (max((arr_15 [i_5] [i_5]), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
}
