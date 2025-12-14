/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117818
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
    var_19 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned short)20)))) >= (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) (unsigned short)0);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65535)))) : ((-(10)))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)31)) : (var_11))))));
                            var_23 = ((/* implicit */_Bool) -2);
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (-1LL)))) ? (((/* implicit */int) (unsigned short)65531)) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)24))))))) && (((/* implicit */_Bool) var_15))));
            }
            var_24 = ((/* implicit */unsigned char) (short)-1);
            var_25 &= ((((/* implicit */_Bool) var_1)) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32758))))) ^ (((((((/* implicit */int) var_15)) + (2147483647))) >> (((((/* implicit */int) var_18)) - (7251)))))))));
        }
        arr_13 [i_0] = ((/* implicit */unsigned short) (-(var_17)));
    }
}
