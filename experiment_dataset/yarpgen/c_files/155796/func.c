/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155796
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [0U] [(short)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)16))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)125))))) : (((((/* implicit */_Bool) min((arr_1 [i_0]), (var_2)))) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))))) : (14U)))));
        var_11 = ((/* implicit */short) (-((~(((/* implicit */int) var_9))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */short) ((unsigned short) (unsigned short)3731));
        var_12 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 740851074U)) && (((/* implicit */_Bool) -1556176206))))) : (((/* implicit */int) ((unsigned char) (unsigned short)14))))), (((/* implicit */int) (unsigned char)121))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (-(arr_6 [i_1])));
        arr_8 [i_1] = ((/* implicit */int) ((arr_7 [i_1] [i_1]) == (((/* implicit */unsigned int) arr_6 [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_4] [i_4] &= ((/* implicit */long long int) arr_15 [i_3] [i_3] [20ULL] [i_3]);
                    arr_17 [i_2] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_7 [i_2] [i_2])) : (var_5))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_2])))))), ((!(((/* implicit */_Bool) arr_6 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_14 = min((((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) arr_14 [6] [i_4] [i_5]))))), (((unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_15 [i_2] [i_2] [i_4] [i_2]))))));
                                var_15 = ((/* implicit */unsigned short) arr_10 [i_5]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_13 [i_4] [i_3])) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_6 [i_2]) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 15122013761313239412ULL)))))))) : (((((/* implicit */_Bool) min((arr_15 [i_2] [i_2] [i_3] [i_4]), (((/* implicit */unsigned short) arr_11 [i_2] [i_2] [(short)12]))))) ? (((/* implicit */long long int) arr_7 [i_2] [i_2])) : (9223372036854775802LL)))));
                }
            } 
        } 
        arr_24 [i_2] [i_2] = ((/* implicit */int) max((arr_5 [i_2]), ((!((!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
        /* LoopNest 3 */
        for (signed char i_7 = 3; i_7 < 21; i_7 += 2) 
        {
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_34 [i_2] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) ((signed char) ((int) var_3)));
                        arr_35 [18U] [i_9] [i_2] [i_7] [i_2] = (-(((/* implicit */int) (unsigned char)131)));
                        arr_36 [i_2] [i_2] [(_Bool)1] = ((/* implicit */signed char) min((9223372036854775802LL), (((/* implicit */long long int) (unsigned char)124))));
                        arr_37 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_28 [i_2] [i_7] [i_2]), (arr_12 [i_9])))) ? (((/* implicit */long long int) (+(740851073U)))) : (min((((/* implicit */long long int) 740851073U)), (var_0))))))));
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-6)) == (((/* implicit */int) (short)9367)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_30 [i_8] [i_2] [i_8] [i_8])))) : (var_0))))));
                    }
                } 
            } 
        } 
        var_19 ^= (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_23 [i_2] [(unsigned char)20] [i_2] [i_2] [i_2])))) ? (3554116215U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2] [i_2]))))))))));
    }
    var_20 = ((/* implicit */unsigned short) (((+((~(((/* implicit */int) var_1)))))) / (-1455594302)));
}
