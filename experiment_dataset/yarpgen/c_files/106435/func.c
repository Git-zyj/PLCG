/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106435
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
    var_10 = ((/* implicit */long long int) 18446744073709551608ULL);
    var_11 = ((/* implicit */unsigned int) (-(var_6)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
        var_13 = ((/* implicit */int) var_0);
    }
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) 2147483635);
        arr_7 [(short)4] = ((/* implicit */int) (-(min((var_7), (var_1)))));
    }
    for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-24192)))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)867)) ? (((/* implicit */int) (short)-24192)) : (-398844854)));
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) min((-6783472934519791256LL), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (max((((/* implicit */int) (signed char)-118)), (398844864))) : (var_3))))));
            var_17 = ((/* implicit */unsigned char) (~(var_6)));
            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
            var_19 = ((/* implicit */unsigned char) (short)3);
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_20 = min((((/* implicit */long long int) min(((short)3), (((/* implicit */short) var_4))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)28527))))));
            var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (_Bool)1)), (16438053262209470483ULL)));
            arr_16 [i_2 + 1] = ((/* implicit */unsigned long long int) ((int) var_3));
            var_22 = ((/* implicit */unsigned long long int) (unsigned short)58950);
        }
        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (unsigned char)255)) : (398844853))), (269343535)))) ? ((-(((/* implicit */int) ((unsigned short) (unsigned short)65534))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            arr_19 [6ULL] = var_9;
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-7566123771906628202LL)))) ? ((-(((/* implicit */int) (unsigned char)146)))) : (((/* implicit */int) (unsigned short)6601))));
            var_25 = ((/* implicit */long long int) var_6);
        }
        var_26 = ((/* implicit */int) ((_Bool) ((unsigned short) 2008690811500081134ULL)));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */short) var_5);
            var_28 = ((/* implicit */short) var_3);
            var_29 = ((/* implicit */signed char) ((int) min(((unsigned short)65534), (((/* implicit */unsigned short) var_5)))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) (short)28527);
            var_31 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
        }
        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_9 = 2; i_9 < 14; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_0)))));
                        arr_36 [i_2] [i_10] [i_10] [i_10] = ((/* implicit */signed char) 2008690811500081150ULL);
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_7)))));
            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_4)), (var_5))))));
        }
    }
}
