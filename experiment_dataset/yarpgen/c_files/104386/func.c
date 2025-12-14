/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104386
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233)))))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_13)));
                            arr_14 [i_4] [i_3] [i_4] [i_2] [i_4] [i_1] [4ULL] = ((/* implicit */int) (unsigned short)52639);
                        }
                    } 
                } 
            } 
            var_16 *= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        arr_25 [i_7] [(unsigned char)8] [i_6] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -2107449311)))) : (((8489124166299152339ULL) >> (((4146369097U) - (4146369086U)))))));
                        var_17 &= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) arr_22 [i_0]);
            arr_26 [i_0] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_0]))));
        }
        var_19 &= ((/* implicit */short) var_14);
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (short)-16102);
        var_21 ^= ((/* implicit */_Bool) arr_16 [i_8] [16]);
        var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 9957619907410399275ULL)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (_Bool)1))));
        var_23 *= ((/* implicit */unsigned char) ((int) 1228309136U));
    }
    var_24 ^= ((/* implicit */_Bool) 3433807637U);
}
