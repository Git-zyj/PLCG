/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11883
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((int) (_Bool)1)) : ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_13 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))));
        var_14 = 0ULL;
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (short)-25119))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) ((unsigned char) -1727997998))))));
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32767))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                arr_17 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), ((+(var_5)))))) ? (arr_8 [i_2 + 2]) : (((((_Bool) 2059271151)) ? (((/* implicit */unsigned long long int) ((unsigned int) 457453647U))) : (((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_3]))))) - (((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))) : (var_10)))));
            }
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 23; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        arr_25 [i_1] [i_5] [i_4] [(short)7] [i_5] [i_5] = max((((/* implicit */unsigned long long int) arr_14 [i_2 + 1] [8U] [14LL])), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_5]))) : (-30LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_1] [(unsigned char)17])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_8 [i_2 - 1]))))));
                        arr_26 [i_1] [i_5] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) -8430865619345442634LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_3))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) -4581882757696640531LL))));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_1] [i_6] [i_1] [i_1])), (var_8)))) ? (((/* implicit */int) min(((short)-32766), (((/* implicit */short) var_11))))) : ((~(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))) : (arr_6 [(short)18])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65531))))) : (((unsigned int) -2170784779815981623LL))))));
        }
        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_5 [i_7]) + (arr_6 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1]))) + (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_1] [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_1] [i_7] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_16 [24LL] [i_7] [i_1] [i_1]))))) : (((unsigned long long int) var_1))))));
            arr_32 [24LL] [(unsigned short)24] [i_1] |= ((/* implicit */unsigned char) arr_20 [i_7] [i_7] [4LL]);
            arr_33 [i_7] [i_7] = ((/* implicit */unsigned short) -132593354);
            var_21 = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) 16995765013204488731ULL)))))), (((unsigned char) ((var_4) >> (((2547911102U) - (2547911082U))))))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (signed char)63))));
        }
        var_23 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (signed char)127)))));
        var_24 = ((/* implicit */unsigned char) (short)-11969);
    }
    var_25 |= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_6))) << (((((((/* implicit */int) (signed char)-102)) + (125))) - (13)))));
}
