/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169128
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (var_9))))));
        var_15 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)187)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) arr_8 [i_1]);
        var_16 ^= ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) / (var_9)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11335598656136065126ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))))));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (short)0)))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) arr_10 [i_1 - 3] [i_3 - 1] [i_3 + 2]))));
                        }
                    } 
                } 
            } 
            arr_21 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)0))));
            var_20 = ((/* implicit */signed char) (short)0);
            arr_22 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((/* implicit */int) (short)8))))) ? ((-(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (short)32763))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
        {
            for (int i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_30 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_1 + 1] [i_1 + 1] [i_6 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_25 [i_1] [i_6] [i_1 - 2] [i_7 + 1])) : (((/* implicit */int) var_12))));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            arr_33 [i_8] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (32767LL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)8)))) : (((((/* implicit */int) (short)-20)) * (((/* implicit */int) (unsigned char)56))))));
                            arr_34 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_10))) ? (((((/* implicit */_Bool) arr_24 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_6]))) : (-10LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            arr_35 [i_1] [i_1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((short) ((arr_5 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1]))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6])) > ((-(((/* implicit */int) (unsigned char)249))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                        {
                            arr_39 [i_1] [i_6] [i_1] [i_6] [i_1] = ((((/* implicit */_Bool) (unsigned short)56917)) ? (((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_11 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))));
                            arr_40 [i_1] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) arr_12 [i_1] [i_1]);
                            var_22 *= ((/* implicit */short) var_6);
                        }
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            var_23 = (unsigned short)10684;
                            arr_44 [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_31 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_31 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                        }
                        arr_45 [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_7 + 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8])) ? (arr_28 [i_6] [i_6] [i_6] [i_6]) : (arr_28 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_7))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54835))))))))) != (((/* implicit */int) max((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) var_5)))))))));
}
