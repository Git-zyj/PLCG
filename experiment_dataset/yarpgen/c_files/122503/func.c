/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122503
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
    var_14 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)13227)) : (((/* implicit */int) (signed char)(-127 - 1))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((236146551), (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) (~(236146541)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) 3162805131360497864LL);
                        var_17 = arr_4 [i_1] [i_3];
                        var_18 &= (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_1))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) var_0);
                            arr_12 [i_1] [i_2] [i_4] |= ((/* implicit */int) ((18446744073709551614ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 2] [i_2 + 1] [i_2 - 1])))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 236146543)) ? (((/* implicit */int) var_10)) : (-236146560))))));
                            var_21 = ((/* implicit */unsigned short) ((int) (_Bool)1));
                        }
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12)))))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_5] [(short)7]))))), ((+(max((((/* implicit */long long int) (_Bool)1)), (var_4)))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_7])) ? (((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */long long int) (signed char)110)), (3162805131360497864LL))))))));
                        var_24 *= ((/* implicit */unsigned long long int) (-((+(var_4)))));
                    }
                } 
            } 
        }
        arr_25 [i_5] = ((/* implicit */unsigned short) (+((+(((((/* implicit */int) var_1)) & (arr_5 [i_5] [i_5] [i_5])))))));
    }
    var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_11))), ((~(((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
}
