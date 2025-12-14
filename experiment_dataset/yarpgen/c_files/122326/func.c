/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122326
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)28935)) == (((/* implicit */int) arr_1 [i_0 + 2]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] = ((unsigned short) ((arr_13 [i_0] [i_0] [(unsigned short)8] [i_3 - 2] [i_3 - 3]) >> (((var_15) - (2469975697386501805ULL)))));
                        var_17 -= arr_10 [i_0 + 1] [i_1] [i_2] [i_3 - 3];
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48485))))) : (-1))))));
            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) / (arr_0 [8LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)5] [(unsigned char)5] [i_0])) || (((/* implicit */_Bool) 4160749568U)))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)6] [i_0])) ? (1377982262U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7816)))))));
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] = ((/* implicit */short) arr_24 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 1]);
                            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_4] [i_0 + 2] [i_6] [i_5 + 2]))));
                        }
                    } 
                } 
                arr_26 [i_4] [i_5 + 2] = ((/* implicit */short) arr_23 [i_0 + 1] [i_4] [i_4] [i_0 + 1] [i_4] [i_5] [i_4]);
                arr_27 [i_0] [i_4] = ((/* implicit */short) (~(8406245198021625113ULL)));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+((~(arr_0 [i_0 + 2]))))))));
            }
        }
        var_23 = ((/* implicit */unsigned char) ((signed char) var_4));
    }
    var_24 = min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) var_8))))));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) min(((short)1319), (((/* implicit */short) var_3)))))) || (((/* implicit */_Bool) var_16))));
    var_26 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_4)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */short) (signed char)-66))))))))));
}
