/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182278
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
    var_16 = ((/* implicit */unsigned int) ((var_1) != (min((var_0), (min((2147483645), (((/* implicit */int) var_7))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_0);
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_17 ^= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483638)) ? (4314656851763790058LL) : (arr_4 [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 3])) ? (arr_0 [i_2]) : (((/* implicit */int) var_2)))) : (var_15)));
                            var_19 = ((/* implicit */long long int) ((var_11) ? (((/* implicit */int) arr_11 [i_0] [i_4] [i_4] [i_4] [i_3 + 1] [i_1 - 1] [i_0])) : (((/* implicit */int) var_7))));
                            var_20 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [i_3 + 2] [i_0]))) : (arr_4 [i_1] [i_1]));
                            var_21 = ((/* implicit */int) ((short) arr_1 [i_1 - 1] [i_1 - 1]));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        var_22 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        arr_16 [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */unsigned char) var_12)), ((unsigned char)100))), (max(((unsigned char)204), (((/* implicit */unsigned char) var_11)))))))) & (18446744073709551601ULL)));
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_23 *= ((/* implicit */unsigned int) var_5);
        var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 550505351U)) ? (var_3) : (((/* implicit */unsigned long long int) var_1))))) ? ((+(((/* implicit */int) var_12)))) : (((var_2) ? (var_1) : (((/* implicit */int) var_6)))))), (var_10)));
    }
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        arr_23 [i_7] [i_7] |= (~(min(((~(var_10))), (((((/* implicit */_Bool) (signed char)-4)) ? (var_0) : (((/* implicit */int) var_2)))))));
        arr_24 [i_7] = ((/* implicit */unsigned short) arr_0 [i_7]);
    }
}
