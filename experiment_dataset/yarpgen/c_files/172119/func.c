/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172119
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
    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)-13832)))) : (((((/* implicit */_Bool) (unsigned short)12288)) ? (((/* implicit */int) (unsigned short)11811)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) var_2))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (719325389U))), (((/* implicit */unsigned int) (+(var_14))))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53238)))))) ? ((+(((/* implicit */int) (unsigned short)53256)))) : ((-(((/* implicit */int) (unsigned short)9191))))))));
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? ((((((+(((/* implicit */int) (short)-2040)))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)50404)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)53716)))) - (55))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 ^= ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)11811)) : (((/* implicit */int) (signed char)113)))))))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)-86)))));
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0)))))) : (((((/* implicit */_Bool) (short)-2012)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_0] [i_0] [i_3] = (((!(((/* implicit */_Bool) (unsigned short)57191)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3])))))) ? (((/* implicit */int) (signed char)49)) : ((~(((/* implicit */int) (unsigned short)15840)))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [15LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) : (arr_1 [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_3])))))))))))));
                            var_23 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)226))));
                            arr_11 [i_1] [i_1] = ((/* implicit */_Bool) max((0), (((/* implicit */int) (!(((/* implicit */_Bool) -5316162286904510047LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
