/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106283
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1])), (arr_0 [i_2] [i_3])))) ? (arr_7 [i_1] [i_0 - 1] [i_2]) : (((((/* implicit */long long int) ((/* implicit */int) (short)-958))) / (var_10))))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_1] [i_1])))))));
                        arr_10 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1])))) : (((/* implicit */int) ((4553853961457510643LL) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))));
                        arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((int) arr_6 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned char) ((long long int) var_8))))));
                        var_16 = (~(max((min((281474976710655LL), (((/* implicit */long long int) (signed char)-22)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_9 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            for (long long int i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_17 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((unsigned int) arr_16 [i_5] [i_4 - 1] [i_5] [i_5]))))) ? (((4035225266123964416LL) / (((/* implicit */long long int) ((((/* implicit */int) (short)1023)) & (arr_6 [7LL] [i_0 + 1] [i_5] [i_0])))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_8))))))));
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 281474943156224LL)) - (arr_4 [i_0] [i_4 - 1] [i_4]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((short) arr_1 [i_4])))))));
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_27 [18U] [i_7] [i_7] [i_8 - 1] = ((/* implicit */unsigned int) var_9);
                    var_18 ^= ((((/* implicit */_Bool) -1LL)) ? ((+(1773452212467392850LL))) : (min((((/* implicit */long long int) -1355047530)), (-2311294471290436856LL))));
                }
            } 
        } 
        arr_28 [i_6] = ((/* implicit */_Bool) (short)-26969);
        arr_29 [i_6] = ((/* implicit */signed char) max((((long long int) 739232056U)), (((/* implicit */long long int) max((arr_24 [i_6] [i_6] [i_6]), (((/* implicit */short) arr_21 [i_6] [(_Bool)1] [i_6])))))));
    }
    for (unsigned int i_9 = 2; i_9 < 15; i_9 += 4) 
    {
        var_19 = ((/* implicit */short) -4145473317798969193LL);
        arr_33 [i_9] [i_9] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_9 + 1])) : (((/* implicit */int) arr_19 [i_9 + 1])))));
    }
    for (short i_10 = 1; i_10 < 18; i_10 += 3) 
    {
        var_20 = ((/* implicit */_Bool) var_14);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((+(((/* implicit */int) ((1048575U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))) < (((/* implicit */int) max((((signed char) 3696258851U)), (((/* implicit */signed char) (_Bool)1))))))))));
        arr_37 [i_10] = ((/* implicit */int) (short)16376);
        var_22 ^= ((/* implicit */long long int) arr_34 [16]);
        arr_38 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (signed char)86))));
    }
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) != (max((((/* implicit */long long int) var_12)), (var_10))))))));
}
