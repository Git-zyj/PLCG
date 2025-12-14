/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123071
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
    var_12 |= ((/* implicit */unsigned short) ((var_9) ? ((((((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) var_6)))) + (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */int) var_8)) / (var_11))) : (((/* implicit */int) (unsigned short)17281)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) (-(arr_5 [20LL] [20LL] [i_0])));
                        var_14 = ((/* implicit */unsigned char) ((unsigned long long int) var_10));
                    }
                    var_15 &= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)35467)) << (((arr_5 [i_0] [i_0] [i_1]) - (4038900662U))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (unsigned short)30063);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned char) var_5);
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_20 [i_5] [i_5] [i_4] = ((/* implicit */int) var_10);
                    var_17 ^= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) + (var_2))))))), ((-(((/* implicit */int) (short)-32766))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            for (int i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                {
                    arr_27 [i_4] [i_7] [i_8] = ((/* implicit */unsigned short) 268435454U);
                    arr_28 [i_8] = ((/* implicit */unsigned long long int) (-((+(((1573446845U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18513)))))))));
                    arr_29 [i_4] [i_4] [9ULL] = ((/* implicit */short) var_4);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (short i_10 = 3; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_37 [i_10] [i_10] [i_8] [(short)10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_22 [i_7])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_4] [18LL] [(unsigned char)6]) : (0U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-23392)))))))) > (((((((/* implicit */int) var_3)) == (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)7)) & (((/* implicit */int) arr_6 [i_9] [i_7] [i_8] [i_9]))))) : (min((((/* implicit */unsigned long long int) 0LL)), (0ULL)))))));
                                arr_38 [i_7] [i_8] [i_10] = ((/* implicit */int) (~(((var_0) >> (((((/* implicit */int) arr_31 [i_8 - 1] [(unsigned short)17] [i_10 - 1] [i_10 - 1])) - (68)))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_10)), (arr_22 [i_4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_4] [i_7] [i_8] [i_9]))))) : (((/* implicit */int) var_3))));
                                arr_39 [i_7] [i_7] [i_9] [i_9] [i_7] [i_10] [i_9] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_7)))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) + ((+(((/* implicit */int) arr_25 [16LL] [i_7] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_4] [(unsigned char)10] [i_8] [i_9]))))) ? ((-(var_2))) : (((/* implicit */long long int) var_10))))) : (min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 4; i_12 < 16; i_12 += 2) 
                        {
                            {
                                arr_45 [i_4] [i_7] [i_4] [i_8 - 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_7] [i_11]))))) ? (((/* implicit */int) arr_7 [i_8 + 2] [i_8] [i_8 + 3] [i_8 + 2])) : (((arr_18 [i_4] [(_Bool)1] [i_12] [i_12]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))) ? (arr_36 [i_4] [13LL] [i_4] [i_4] [i_4] [i_4] [i_4]) : (((((unsigned int) var_8)) % (max((((/* implicit */unsigned int) var_7)), (arr_40 [i_4] [(unsigned char)11] [i_8])))))));
                                var_20 = ((/* implicit */int) ((long long int) ((unsigned char) arr_13 [i_8 + 2] [i_8])));
                                var_21 ^= ((/* implicit */unsigned long long int) (!(max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (4026531842U))), (((arr_17 [i_4] [i_7] [i_4] [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-5997)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) && (((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_0))))))));
    }
    for (int i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) min(((+(arr_35 [15LL] [i_13] [5] [i_13] [i_13]))), (((/* implicit */unsigned long long int) min((min((-6526780605406365207LL), (((/* implicit */long long int) var_1)))), (min((((/* implicit */long long int) arr_26 [i_13] [i_13] [i_13] [i_13])), (var_2))))))));
        arr_50 [i_13] = ((/* implicit */unsigned int) (((((_Bool)0) ? ((~(var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_46 [i_13]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
    }
}
