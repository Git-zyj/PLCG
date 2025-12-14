/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183130
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
    var_16 = (+(8263374893172307520ULL));
    var_17 = var_15;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) (+((~(((/* implicit */int) ((975643397U) < (var_7))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned short) arr_3 [i_2]);
                                var_21 -= ((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) * (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (var_12))))))));
                                var_22 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)105)) : (var_11)))) || (((/* implicit */_Bool) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = (-(((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_4 [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */signed char) var_15)))))))));
        var_24 *= ((/* implicit */unsigned char) (+(((max((arr_12 [i_0] [6LL]), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) >> (((((/* implicit */_Bool) arr_9 [i_0] [0LL] [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5]))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-114)))) : (((/* implicit */int) arr_18 [i_5] [i_5])))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_18 [i_5] [i_5]), (arr_18 [i_5] [i_5])))))))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min(((+((-(((/* implicit */int) (unsigned short)46597)))))), (((/* implicit */int) (short)12921)))))));
        arr_19 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_5] [i_5]))))), (min((min((16161276408816671798ULL), (((/* implicit */unsigned long long int) (unsigned char)240)))), (((/* implicit */unsigned long long int) arr_17 [i_5]))))));
    }
}
