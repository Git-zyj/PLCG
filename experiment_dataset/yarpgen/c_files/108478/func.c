/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108478
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
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-97))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_15 &= ((/* implicit */signed char) (unsigned char)14);
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) -6358367410768485484LL)) : (((unsigned long long int) ((short) (unsigned char)112))))))));
        }
        for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) arr_0 [i_2 - 2])) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned char)47))))));
                        arr_12 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2 + 2])) != (((int) var_1)))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */short) (unsigned char)208);
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) || (((((/* implicit */_Bool) 2013265920)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)10] [i_5]))))));
            var_20 = ((/* implicit */long long int) arr_15 [i_0] [i_5] [1ULL]);
            var_21 *= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (signed char)-97)))))));
            var_22 = var_1;
        }
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2791783528U)) ? (((/* implicit */int) (unsigned short)6760)) : ((~(((/* implicit */int) (signed char)0))))));
    }
    for (short i_6 = 3; i_6 < 8; i_6 += 2) 
    {
        arr_18 [i_6] [7U] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */int) var_1)), (min((-2013265921), (((/* implicit */int) var_8)))))));
        arr_19 [(short)0] = ((/* implicit */unsigned short) ((0U) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)47)) / (((/* implicit */int) (signed char)-1)))))));
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_1))));
    var_25 = ((/* implicit */unsigned char) (~(-220233744)));
}
