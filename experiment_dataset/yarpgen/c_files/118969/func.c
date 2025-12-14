/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118969
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)136))))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (-(753991963499848313ULL)))) ? (((/* implicit */int) arr_0 [(signed char)10] [i_0])) : ((~(((/* implicit */int) arr_1 [i_0]))))))))));
        arr_2 [i_0] &= ((/* implicit */unsigned char) var_0);
        var_21 = ((/* implicit */_Bool) min((0), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)25)) : (((/* implicit */int) (unsigned short)0))))));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) (short)(-32767 - 1));
                        var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) arr_8 [i_1]))))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (arr_11 [i_4] [i_3] [10] [i_1]) : (((/* implicit */unsigned long long int) 0U)))))), (arr_7 [i_1] [(unsigned char)2] [i_2])));
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [9] [i_2] [i_3]), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)24560)) : (597381488)))))) ? (((/* implicit */long long int) max((2147483647), (((/* implicit */int) (unsigned char)252))))) : (((((/* implicit */_Bool) (signed char)-39)) ? (min((((/* implicit */long long int) var_6)), (-5766275018288714135LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (arr_5 [i_2] [i_2] [i_2]))))))));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)19048))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 3] [i_1] [i_1] [i_1 + 2]))) : (2906982541135617321ULL)))) ? ((+(((((/* implicit */_Bool) 4001887871U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_1] [(short)13] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40975)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)25)))))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_7 [10] [i_1 + 3] [i_1]))));
        var_28 = ((/* implicit */unsigned int) 15056038580862851291ULL);
    }
    /* LoopSeq 2 */
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)252))));
        var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51735)) * (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_5 + 1]), (arr_15 [i_5 + 2]))))) : (var_16));
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_1))));
    }
    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) /* same iter space */
    {
        var_32 = min((((/* implicit */int) (unsigned char)252)), (597381488));
        var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (min((((/* implicit */unsigned long long int) (signed char)86)), (3247149954725335103ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_6 + 2] [i_6])))))))))));
        var_34 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)65510)) : (((/* implicit */int) (unsigned short)65510)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6])))))));
        var_35 |= ((unsigned short) min((arr_14 [i_6 - 1]), (arr_14 [i_6 + 1])));
    }
}
