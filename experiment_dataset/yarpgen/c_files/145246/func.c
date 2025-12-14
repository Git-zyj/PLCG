/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145246
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) > (9223372036854775788LL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) (-((+(arr_2 [i_2 - 1] [i_2 + 1])))));
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -168439440)) ? ((+(1006632960))) : (((/* implicit */int) (short)(-32767 - 1))))))));
                            var_19 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
                            /* LoopSeq 4 */
                            for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                            {
                                var_20 = ((/* implicit */int) arr_10 [i_4] [i_4 - 1] [i_3] [i_3] [i_2 - 1] [i_1] [i_0]);
                                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)152))));
                            }
                            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_5] [i_0] [i_5] = ((/* implicit */signed char) (unsigned short)362);
                                var_22 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2] [i_2 + 1] [i_1])) >= (((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_1])))));
                            }
                            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                            {
                                var_23 *= ((/* implicit */unsigned int) (~((+((+(arr_6 [i_6] [i_2] [i_1])))))));
                                var_24 = ((/* implicit */unsigned int) (signed char)0);
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1)))))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                            {
                                var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65174)))))) & (arr_6 [i_0] [i_1] [i_2 - 2])));
                                var_27 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_2]))));
                            }
                        }
                    } 
                } 
                var_28 *= ((/* implicit */unsigned int) (signed char)127);
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)43554);
            }
        } 
    } 
    var_29 += ((/* implicit */short) var_0);
    var_30 = ((/* implicit */unsigned int) var_11);
}
