/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168393
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
    var_14 = ((/* implicit */short) (-((-((-(((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (-((~((+(((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))))))));
            arr_7 [i_1] &= (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-122))))));
            var_16 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 18446744073709551615ULL))))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            var_17 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(2147483642)))))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
                        arr_17 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(2147483642)))))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((!((_Bool)1)))))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) arr_4 [i_0] [i_0]))))))));
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(arr_9 [i_2] [7U]))))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_21 [(signed char)9] [i_0] = ((/* implicit */unsigned short) (~((-(9223372036854775807LL)))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)65535))))));
                        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)7))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_5] [i_5]))))))))));
                        arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
    }
    var_25 = ((/* implicit */signed char) (-((-((-(((/* implicit */int) var_3))))))));
}
