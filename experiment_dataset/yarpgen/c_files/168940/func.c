/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168940
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
    for (long long int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_17 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 10470880105965321915ULL)) ? (10470880105965321915ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        var_18 = ((/* implicit */int) var_16);
    }
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)96))))));
        arr_5 [11U] [11U] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 5994940105443760134ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (var_5)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_2 = 4; i_2 < 9; i_2 += 4) 
    {
        arr_8 [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) 1210098170))));
        arr_9 [i_2] = ((/* implicit */signed char) -282543974);
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (10470880105965321920ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))));
        var_19 |= ((/* implicit */signed char) min((-7019594787651390771LL), (854481195009981695LL)));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (5252639541424148948LL))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 3; i_6 < 9; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (-(7019594787651390771LL)));
                        /* LoopSeq 4 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 3437953806U)) && (((/* implicit */_Bool) var_13)))))));
                            arr_28 [i_4] [i_4] [(_Bool)1] [i_5] [i_7] [i_4] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)76))));
                            arr_29 [i_4] [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5994940105443760134ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) 0LL)) : (2713341985027001142ULL)));
                            arr_30 [i_4] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                        }
                        for (long long int i_9 = 1; i_9 < 11; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-9223372036854775784LL))))));
                            arr_33 [i_4] [i_5] [i_6] [(unsigned short)7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_3))));
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -282543974))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            arr_37 [5LL] [6U] [i_7] [i_5] [4U] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (-5252639541424148977LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 8260331323610304227LL)) : (var_5)))));
                            var_27 *= ((/* implicit */unsigned long long int) ((var_14) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_41 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(var_2)));
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 8796093022207LL)) & (5020888750471446020ULL)));
    }
}
