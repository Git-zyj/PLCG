/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156473
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), (arr_1 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) max((arr_0 [i_0]), (arr_1 [i_0])))), ((unsigned short)33496))))) : (min((((/* implicit */long long int) max((arr_0 [i_0]), ((unsigned char)177)))), (5107285140387601662LL)))));
        var_11 = (+(min((((((/* implicit */int) var_8)) - (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [14ULL])))))));
        var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_1)), (arr_0 [12LL])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned char)177)))))));
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_15 *= ((/* implicit */short) arr_4 [i_2]);
        var_16 = ((/* implicit */long long int) arr_3 [i_2]);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2])) <= (((/* implicit */int) arr_3 [i_2]))));
        var_18 *= ((/* implicit */unsigned short) var_3);
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-1)), (min((((/* implicit */unsigned short) (unsigned char)177)), ((unsigned short)62066)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)166))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_1)))))))) : (((/* implicit */int) (((+(((/* implicit */int) var_0)))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned char)177)))))))));
        var_20 &= ((/* implicit */unsigned long long int) (unsigned char)126);
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (short)28513))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_21 += ((/* implicit */short) -242799182);
                        var_22 += ((/* implicit */unsigned short) 1357028483U);
                        arr_21 [i_6] = ((/* implicit */int) min((var_6), (((/* implicit */long long int) var_7))));
                        arr_22 [i_6] [(_Bool)1] [i_5] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29129))) : (max((((/* implicit */unsigned int) var_2)), (631243796U))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)28513)))) <= (((/* implicit */int) arr_7 [i_4]))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3])) < (((/* implicit */int) var_7))))) : (((/* implicit */int) min((arr_0 [i_3]), (((/* implicit */unsigned char) (signed char)-57)))))))));
    }
}
