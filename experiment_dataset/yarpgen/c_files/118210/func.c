/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118210
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
    var_16 = ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_1))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_0 [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (arr_5 [i_0]))) : ((+(((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((unsigned long long int) var_12)))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((+((+(((/* implicit */int) var_3)))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) <= (((/* implicit */int) var_15)))))));
                        var_19 = ((/* implicit */int) var_3);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((((/* implicit */int) var_11)) >= (((/* implicit */int) var_5)))) ? ((-(11113261782798105030ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((/* implicit */unsigned long long int) (-((~(var_2)))))))))));
        var_21 = ((/* implicit */int) (((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7))))) >> (((var_8) - (5531482645977906808ULL)))));
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))) ? ((-(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_10)))))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    var_23 ^= var_2;
                    var_24 = ((/* implicit */int) var_7);
                    var_25 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_7 [i_4 - 1] [i_4] [i_5] [i_4 - 1])) >> (((((/* implicit */int) var_10)) - (22861))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_28 [i_5] [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_8] [i_4 - 1] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_4), (var_0))))))) | (var_8));
                                var_26 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_4)))) : (((int) var_7)))) <= (((((_Bool) var_12)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_4)) % (((/* implicit */int) var_3))))))));
                                arr_29 [i_4 - 1] [i_5] [0] [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) var_10);
                                var_27 = ((/* implicit */signed char) (-(min((arr_19 [(unsigned char)0] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_1 [i_8])), (var_14))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [i_4] = ((/* implicit */short) (-((-(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 11113261782798105034ULL)))))))));
        arr_31 [i_4] = ((/* implicit */unsigned int) var_10);
        var_28 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_8) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_13))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14)))))));
        var_29 = ((/* implicit */unsigned int) var_13);
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_30 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11113261782798105030ULL))), (((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((unsigned int) var_8)))))));
        var_31 = ((/* implicit */unsigned short) max(((-2147483647 - 1)), (((/* implicit */int) (short)-27))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_9] [i_9] [4ULL] [i_9])) ^ (((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(arr_3 [i_9] [i_9])))))) : (((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    }
    var_33 = ((/* implicit */int) var_14);
}
