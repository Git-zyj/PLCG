/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1786
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
    var_14 += var_1;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)1]))) % (-4050050375670133703LL)))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52750)) >> (((-1381790707) + (1381790725)))))), (-4050050375670133704LL))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) var_8);
                        var_16 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_9 [i_3] [20LL] [i_3 - 1] [(short)24])) - (((((/* implicit */_Bool) 2108235691)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [(unsigned char)22] [i_1] [i_2] [i_3 - 1] [i_3]))))))));
                        var_17 = ((/* implicit */unsigned short) -1583403685);
                    }
                    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_1] [(_Bool)1] [(_Bool)1] [i_0]), (((/* implicit */short) arr_10 [2] [(short)6] [i_0] [(short)6] [i_2 - 1]))))) ? (arr_2 [i_0] [i_2 - 1]) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) % (-1596755170738476697LL)))) : (((72057594037927935ULL) >> (((arr_2 [i_1] [i_1]) - (18152506445184764253ULL)))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((unsigned short) arr_8 [4LL] [4LL] [i_0]));
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (signed char i_6 = 4; i_6 < 20; i_6 += 3) 
            {
                {
                    arr_21 [i_4] [i_6 + 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_6 + 3] [i_5] [i_6 + 3])) & (((/* implicit */int) (_Bool)1))))) ^ (6364561918851669264ULL)));
                    var_20 = ((/* implicit */unsigned short) arr_17 [i_4]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (unsigned int i_8 = 3; i_8 < 22; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_21 = ((/* implicit */int) max((max((arr_28 [(unsigned char)21] [i_8 - 1] [i_4] [i_9]), (arr_28 [i_8] [i_8 - 2] [i_8] [i_8]))), (((/* implicit */unsigned short) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_8 - 3] [i_8 - 3] [i_9]))))))));
                        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [6] [i_8] [i_9]))));
                        var_23 = ((/* implicit */int) (unsigned short)0);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 3; i_10 < 22; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    arr_35 [8LL] [i_10 - 2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_12)), (-917622752)))) : (max((((/* implicit */long long int) var_1)), (var_2)))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 4; i_12 < 21; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            {
                                arr_41 [i_13] [i_4] [i_12] [i_10] [i_13] = ((/* implicit */unsigned short) var_5);
                                var_24 ^= ((((/* implicit */long long int) max((arr_8 [i_11] [i_12 - 1] [i_12 + 2]), (((/* implicit */unsigned int) arr_16 [i_11] [i_12 - 1]))))) | (-4490057067833791918LL));
                                var_25 = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    arr_42 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */short) arr_37 [i_4] [i_10 - 3] [i_11] [i_4] [i_10] [i_4])), (arr_9 [i_11] [i_4] [17U] [i_11])))), (min((var_7), (((/* implicit */long long int) arr_5 [i_4] [i_10 - 3]))))));
                    var_26 *= arr_19 [i_11] [(unsigned short)22] [i_10] [i_4];
                }
            } 
        } 
        arr_43 [i_4] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_5))))));
    }
}
