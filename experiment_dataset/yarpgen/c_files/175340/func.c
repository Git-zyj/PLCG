/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175340
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 4033724166756111192LL))) ? (((arr_1 [i_1 - 2]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) : (2145386496U))))))));
                                arr_14 [i_1 + 1] = ((/* implicit */_Bool) (-((+(-15748644)))));
                            }
                            var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0 - 1]))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_0] [i_0] [i_0]))) : (var_10))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3]))))))));
                            var_12 = ((/* implicit */signed char) var_3);
                            arr_15 [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -1299171566897574248LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (arr_8 [i_3] [i_2] [2U] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) % (((int) (short)-4602))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_1]))))) : ((-(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (arr_3 [i_0 - 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_4))))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_1 [i_0 - 1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (signed char)-7))));
            arr_23 [i_6] [i_5] = ((/* implicit */signed char) max((((/* implicit */int) arr_5 [i_6] [i_6] [i_5])), (((((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_6])) & (((/* implicit */int) arr_5 [i_6] [i_6] [i_5]))))));
            var_17 += ((/* implicit */_Bool) max((((/* implicit */int) ((short) ((int) var_3)))), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5]))) == (var_10)))) % (((/* implicit */int) var_5))))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_3))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_4))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_36 [i_8] [i_8] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_8]))));
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-4626)), (arr_20 [16U])));
                            arr_37 [i_9] [i_9] [i_10] = ((-1423443196) & (((/* implicit */int) (_Bool)1)));
                            var_21 = (((+(((((/* implicit */long long int) ((/* implicit */int) (short)-4602))) & (var_9))))) + (((/* implicit */long long int) (+(arr_31 [i_5] [i_5] [i_5] [i_10])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(4004890450U))))));
            arr_41 [i_5] [i_5] = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_33 [i_5])) : (((/* implicit */int) arr_24 [i_5] [i_5]))))))));
            arr_42 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_7 [1LL] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (9026269266214507831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4603))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))))));
            var_23 = ((/* implicit */unsigned char) var_6);
        }
        var_24 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)255))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((max((((/* implicit */int) (short)511)), (max((((/* implicit */int) (short)-4626)), (-1025109052))))) ^ (((((/* implicit */_Bool) arr_10 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_33 [i_12])), ((signed char)-19)))) : ((+(((/* implicit */int) (signed char)120)))))))))));
        arr_47 [i_12] = ((/* implicit */signed char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_6 [i_12]))))) | (max((((/* implicit */long long int) (signed char)41)), (3685943111755348500LL))))), (((/* implicit */long long int) ((int) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))))))));
        arr_48 [i_12] = ((/* implicit */unsigned short) var_6);
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_8 [i_12] [i_12] [i_12] [i_12])) + (min((((unsigned long long int) arr_5 [i_12] [i_12] [i_12])), (((/* implicit */unsigned long long int) var_9)))))))));
    }
}
