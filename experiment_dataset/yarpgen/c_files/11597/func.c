/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11597
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
    var_15 = ((/* implicit */unsigned long long int) min(((-(1630353760U))), ((-(((((/* implicit */_Bool) 1630353760U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1630353760U)))))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((1630353760U), (((/* implicit */unsigned int) (signed char)-61)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)95)) && (((/* implicit */_Bool) (unsigned char)48))))))))));
                arr_5 [i_0] [i_1] = max((((/* implicit */unsigned char) ((signed char) ((unsigned long long int) arr_2 [i_0] [i_1])))), (arr_4 [i_0] [i_0]));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_4 [i_2] [i_1]);
                            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_10)))) - (175)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2]))) : (max((((/* implicit */unsigned int) (unsigned char)6)), (791408575U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
