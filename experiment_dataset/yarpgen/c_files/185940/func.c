/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185940
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((signed char) min((0U), (4294967284U)));
                                var_18 = ((/* implicit */signed char) arr_6 [i_3] [i_1] [i_0]);
                                var_19 = ((/* implicit */unsigned short) (-((+(((long long int) var_9))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_1] [i_1] [i_2] [i_5]), (arr_7 [i_1] [i_1] [i_2] [i_5]))))));
                        arr_13 [i_1] [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((int) arr_2 [1U] [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (96)))))) | (var_16)));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_5);
                        arr_15 [i_0] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */int) (~((~(((unsigned int) var_3))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) var_6))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) 
    {
        arr_19 [i_6] = ((/* implicit */int) var_11);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_14))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        arr_26 [i_9] [i_9] = arr_0 [(unsigned short)4];
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (arr_6 [i_6] [i_6 + 1] [i_6]))))))));
                    }
                    for (unsigned int i_10 = 4; i_10 < 18; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) (~(((unsigned int) arr_21 [i_6]))));
                        arr_30 [i_7] [i_7] [2] [i_10 + 1] [i_10] [i_10 + 1] = ((/* implicit */unsigned char) (~(((long long int) var_0))));
                    }
                    for (unsigned int i_11 = 4; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) arr_17 [i_7] [i_6]);
                        var_27 = ((/* implicit */long long int) ((unsigned int) arr_29 [i_7] [i_7] [i_7]));
                    }
                    for (unsigned int i_12 = 4; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 2; i_13 < 20; i_13 += 3) /* same iter space */
                        {
                            var_28 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)105)))) >= (((unsigned long long int) arr_23 [i_6] [i_7] [i_8] [i_12]))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_13] [i_12] [i_8] [i_8] [i_7] [i_13])))))) <= ((~(arr_22 [i_6 + 1] [i_7] [i_8] [i_13])))));
                            var_30 *= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) 376872947601248124ULL)))));
                            arr_40 [i_13] [i_13] [i_8] [i_8] [i_13] = ((/* implicit */unsigned short) (+(1U)));
                            var_31 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7] [i_12] [i_12 + 1] [i_12]))));
                        }
                        for (short i_14 = 2; i_14 < 20; i_14 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((signed char) arr_0 [i_8]))));
                            arr_43 [i_14] [i_12] [i_8] [i_7] [i_6] = (!(((/* implicit */_Bool) var_16)));
                        }
                        var_33 = ((/* implicit */unsigned char) (~(var_4)));
                        arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((int) var_16));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) ((unsigned int) 3576984646U));
        arr_45 [18U] = ((/* implicit */_Bool) (+(var_13)));
    }
    var_35 = ((/* implicit */int) ((var_9) != ((+(max((var_15), (var_13)))))));
    var_36 = ((/* implicit */signed char) var_8);
}
