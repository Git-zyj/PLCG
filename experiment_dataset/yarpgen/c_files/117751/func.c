/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117751
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) (short)15150);
                var_16 = (-((+(((/* implicit */int) (signed char)(-127 - 1))))));
                var_17 = ((/* implicit */long long int) 16365765194287015080ULL);
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(min((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) (signed char)-22)))))))));
            }
        } 
    } 
    var_19 ^= (~((+(7635705292268047162ULL))));
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_21 -= ((/* implicit */unsigned long long int) (signed char)127);
        var_22 = ((/* implicit */signed char) arr_7 [i_2]);
        var_23 = ((/* implicit */unsigned int) (_Bool)0);
        arr_8 [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (short)-2294)), ((~((-(1611943768)))))));
    }
    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_24 = (~((~(arr_0 [i_3 + 1]))));
        var_25 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 |= ((/* implicit */int) arr_5 [i_4]);
        var_27 = ((/* implicit */unsigned int) -191039589);
        /* LoopSeq 3 */
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_9 [i_4] [i_5 - 2]))));
            var_29 = ((/* implicit */unsigned char) (signed char)127);
        }
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        arr_25 [i_4] [i_4] = (~((~(((/* implicit */int) arr_23 [i_4])))));
                        var_30 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_5 [i_4]))));
                    }
                } 
            } 
            var_31 = ((/* implicit */signed char) var_9);
            var_32 = ((/* implicit */unsigned long long int) (~(max((760410357), (-316120052)))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 4; i_9 < 8; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_33 ^= (short)-4670;
                            var_34 = ((/* implicit */int) (+(16365765194287015080ULL)));
                        }
                        arr_33 [i_4] [i_4] [8] [i_10] = ((/* implicit */short) 3358153455U);
                        var_35 = ((/* implicit */signed char) arr_17 [8LL]);
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 2; i_12 < 9; i_12 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_20 [i_4] [i_12 - 2] [i_4] [i_12])) ? (min((((/* implicit */unsigned long long int) (signed char)127)), (31319979846436111ULL))) : (((/* implicit */unsigned long long int) (-(arr_21 [i_4]))))))));
            var_37 = ((/* implicit */_Bool) (~((~(17556167292628243825ULL)))));
        }
    }
}
