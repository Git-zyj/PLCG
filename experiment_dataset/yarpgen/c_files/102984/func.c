/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102984
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) min((max((var_4), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_2))))))))));
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)11)))))))) ? (((int) ((unsigned short) (signed char)16))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-12)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))));
                        arr_10 [i_0] [(signed char)6] [i_0] [i_3] &= ((((((/* implicit */int) (unsigned short)9)) >> (((((/* implicit */int) (signed char)-123)) + (131))))) << (((((((/* implicit */_Bool) (unsigned short)65527)) ? ((-(var_10))) : (-4194304LL))) - (3578407961225471407LL))));
                        arr_11 [i_2] [(unsigned char)1] [(signed char)7] [i_2 - 1] [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)-3))))) : (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */int) (+((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (var_10)))))));
        arr_13 [19] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (short)0)), (var_8)))));
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_4)))) ? (max((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_3)))))) : (((/* implicit */int) (signed char)21))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) ^ (((/* implicit */int) ((_Bool) (signed char)11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) max((var_0), (var_9)))) ? (min((((/* implicit */int) (signed char)10)), (268427264))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)-18))))))));
    }
    for (unsigned short i_5 = 4; i_5 < 22; i_5 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)21))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) min(((unsigned short)12288), (((/* implicit */unsigned short) (signed char)0)))))))))));
        arr_21 [i_5] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_11)))));
        var_19 &= ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (signed char)0)))));
    }
    var_20 = ((/* implicit */unsigned short) (-((((+(((/* implicit */int) var_13)))) * (((/* implicit */int) var_12))))));
}
