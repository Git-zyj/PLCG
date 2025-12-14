/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138353
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
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) 0ULL));
    var_17 = ((/* implicit */unsigned short) ((max((var_11), (((/* implicit */unsigned long long int) (short)2633)))) < (((/* implicit */unsigned long long int) max((3512951030U), (((/* implicit */unsigned int) (short)4095)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] [19] = ((/* implicit */unsigned int) max((((short) (short)2613)), (max((var_3), (((/* implicit */short) var_0))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (short)-6431);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)31000)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) < (((/* implicit */int) (short)-2613))))), (782016266U)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12964)) ? (((((/* implicit */int) (short)-6431)) / (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)209)))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) - (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-2633)))))) != (((((/* implicit */_Bool) 329356596)) ? (((/* implicit */int) (short)6421)) : (((/* implicit */int) (unsigned short)14518))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) var_7);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_6))));
                    }
                    var_22 = ((((/* implicit */_Bool) 16649183347867617172ULL)) ? (min((1564584138U), (4294967291U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12964))));
                    arr_17 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34161)) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) (short)1349)))) : (((/* implicit */int) (short)2613))))), (max((((/* implicit */unsigned long long int) max((3512951016U), (((/* implicit */unsigned int) (unsigned char)7))))), (((((/* implicit */_Bool) (unsigned short)37236)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (0ULL)))))));
                }
            } 
        } 
        arr_18 [19] [i_0] = ((/* implicit */_Bool) (signed char)15);
        var_23 = ((/* implicit */short) 4ULL);
    }
}
