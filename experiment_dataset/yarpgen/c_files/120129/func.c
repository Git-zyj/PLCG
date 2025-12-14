/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120129
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)-3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = (+(((/* implicit */int) (signed char)-3)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [i_2 - 3] [i_2] [i_2 + 1])) ^ (((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 3] [i_2]))));
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44262)))))));
                    arr_10 [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)-27))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) var_7))));
                    var_20 = ((/* implicit */unsigned char) (-(var_4)));
                }
                arr_11 [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1 + 1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (signed char)5)) ? (-7605926007417553926LL) : (((/* implicit */long long int) 126333978U))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) (-(126333978U))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_7))) - (min((((/* implicit */long long int) arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2])), (var_12)))));
                    var_22 -= (unsigned short)12;
                    var_23 = ((/* implicit */long long int) arr_2 [i_0]);
                    var_24 *= ((/* implicit */signed char) ((unsigned short) arr_9 [i_0] [i_0] [i_1 + 1] [i_3]));
                    arr_15 [i_1] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17670566966645611662ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))) : (4168633322U)));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)3))));
                    var_26 = ((/* implicit */long long int) ((unsigned short) 126334005U));
                    var_27 ^= ((/* implicit */unsigned char) ((long long int) var_9));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
    var_29 += ((/* implicit */_Bool) var_10);
}
