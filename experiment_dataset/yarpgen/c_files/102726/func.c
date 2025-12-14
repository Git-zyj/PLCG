/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102726
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] [13U] [13U] = ((/* implicit */short) ((unsigned char) (short)12348));
                    arr_8 [(short)0] [(_Bool)1] [(short)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1 - 2] [i_2] [i_2]))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (unsigned char)41)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) 983865198))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) : (7U)));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)14] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                for (short i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_17)) << (((max((max((((/* implicit */unsigned int) (unsigned short)36007)), (var_12))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)66)), (arr_5 [(short)11] [(short)11] [i_5 + 1])))))) - (3696904961U)))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (4079104443U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [8U] [15U] [15U])) ? (arr_16 [i_3] [i_3]) : (((/* implicit */int) arr_11 [i_3] [(signed char)5])))))))) ? ((~(arr_1 [i_4] [i_4]))) : (((/* implicit */long long int) max((arr_18 [i_3] [i_5 + 2] [i_6] [12U] [i_6 + 3] [i_6]), (arr_18 [i_3] [i_5 + 2] [i_6] [(short)12] [i_6 + 2] [i_6 + 2]))))));
                    }
                } 
            } 
        } 
        var_24 &= ((/* implicit */long long int) max((arr_5 [i_3] [i_3] [(short)0]), (max((var_19), (arr_5 [12U] [i_3] [i_3])))));
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)10605)) + (((/* implicit */int) (short)10589))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) (signed char)17)), (25U))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) var_11)) : (arr_20 [i_7]))))));
        var_26 = ((/* implicit */unsigned int) ((max((arr_22 [i_7]), (((/* implicit */long long int) max((4294967266U), (4294967295U)))))) - (((/* implicit */long long int) -1606070044))));
        var_27 |= ((/* implicit */unsigned int) (short)10620);
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_19)) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_0)))))));
        var_29 = ((/* implicit */int) arr_21 [i_7]);
    }
    var_30 = ((/* implicit */short) var_8);
    var_31 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) var_4)) : (-3763451557478585908LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)32750)), ((unsigned short)35448)))) : (((/* implicit */int) var_1)))));
    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
}
