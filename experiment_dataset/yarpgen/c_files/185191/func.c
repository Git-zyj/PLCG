/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185191
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)511)))))));
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)-23110)) != (((/* implicit */int) (unsigned short)65025))))) >> ((((~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (5228561877973367623LL))))) + (27LL)))));
    var_22 *= (unsigned short)15845;
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (14632426234569289662ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (7723140485665461863LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10))))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 3422722557573604438ULL)))) ? (((/* implicit */int) (unsigned short)13477)) : (max((0), (((/* implicit */int) var_2)))))) % (((/* implicit */int) max((((unsigned char) (signed char)127)), (((/* implicit */unsigned char) (_Bool)0))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((3942218372278094373LL), (((/* implicit */long long int) var_3)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), ((unsigned char)19)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) -3493414850310795117LL)))))))));
                    var_26 = ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) (signed char)-109)));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10351)) ? (((((/* implicit */_Bool) ((unsigned short) 3942218372278094373LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)255))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)15834)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((-9223372036854775807LL - 1LL)))) >> (((/* implicit */int) ((_Bool) 13700397103598621781ULL))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 12003201470840747544ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (_Bool)0))));
                        arr_10 [(unsigned char)7] = ((/* implicit */long long int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8537))) & (5969660495807700196ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)234)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)47)) & (((/* implicit */int) (unsigned char)191)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) / (((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */int) ((unsigned long long int) ((_Bool) var_15)));
                    }
                }
            } 
        } 
        var_30 -= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)63521)) : (((/* implicit */int) (short)16352)))))))));
        arr_14 [i_0] [6ULL] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (unsigned char)212)))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15834))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)84))))) : ((+(18446744073709551615ULL)))));
    }
}
