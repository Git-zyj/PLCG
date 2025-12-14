/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159880
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((signed char) ((unsigned int) var_12)));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */long long int) (-(-314228992)))) : ((+(((((/* implicit */_Bool) var_3)) ? (2953771040338358677LL) : (-2953771040338358682LL)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2017612633061982208ULL)) ? (946326183350778832LL) : (((/* implicit */long long int) 4294967295U))));
                            arr_13 [i_0] = ((/* implicit */unsigned short) ((946326183350778832LL) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -314228992)) || (((/* implicit */_Bool) (unsigned short)8)))))) : (min((-2953771040338358678LL), (((/* implicit */long long int) (signed char)-85))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_6 = 3; i_6 < 10; i_6 += 2) 
                            {
                                arr_22 [i_0] [0ULL] [i_4] [i_5] [i_0] [i_6 - 1] [6U] = ((/* implicit */long long int) (+(314229003)));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1 + 2])) ? (var_11) : (var_6)));
                                var_16 -= ((/* implicit */_Bool) 3395012515U);
                            }
                            arr_23 [i_0] [i_1] [i_4] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_1 + 2]);
                            arr_24 [i_0] [7U] [i_4] [i_4] [i_0] = (+(((/* implicit */int) var_9)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 12556333190848390595ULL)) ? (2953771040338358663LL) : (((/* implicit */long long int) 4294967284U)))));
}
