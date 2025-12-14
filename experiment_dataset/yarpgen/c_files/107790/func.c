/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107790
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
    var_13 = ((/* implicit */signed char) var_5);
    var_14 |= var_5;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] = ((/* implicit */int) (unsigned short)65519);
                                arr_14 [i_1] &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (short)3386))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned short)858)) : (((/* implicit */int) (_Bool)1))));
                        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1057650219U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775798LL)))) ? (5585545380290273517LL) : (((((/* implicit */_Bool) (unsigned char)46)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))))))));
                        arr_19 [19ULL] [i_0] [i_1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) var_12);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_16 = (unsigned short)17;
                            var_17 ^= ((/* implicit */unsigned short) var_7);
                            arr_22 [i_0] = ((/* implicit */signed char) (unsigned char)156);
                        }
                        var_18 ^= ((/* implicit */unsigned long long int) 2211401586922651970LL);
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) -1666609583)) ? (-4220077319055543495LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_9)) : (9223372036854775807LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-3387)) : (((/* implicit */int) (signed char)96)))) : (((/* implicit */int) (unsigned short)21059)))))));
}
