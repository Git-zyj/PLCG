/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123054
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (_Bool)0))));
    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)53935));
    var_15 = ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned short) var_2);
        arr_2 [i_0] = ((/* implicit */short) ((signed char) var_9));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_9 [(short)11] [i_1] = ((/* implicit */unsigned char) var_12);
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_2))));
            var_19 = ((/* implicit */_Bool) var_12);
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(1600715565931082319LL)));
                        var_20 ^= ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) var_9);
    }
    for (signed char i_6 = 1; i_6 < 23; i_6 += 3) 
    {
        var_22 ^= ((/* implicit */_Bool) ((short) max((((/* implicit */int) ((((/* implicit */int) arr_21 [i_6] [i_6])) == (((/* implicit */int) (short)-17381))))), ((-(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 = ((/* implicit */_Bool) (+(((unsigned long long int) (signed char)-80))));
            arr_24 [i_7] [i_6] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)68))))) ^ (((/* implicit */int) ((unsigned char) (signed char)79)))))) ? (((((/* implicit */_Bool) arr_19 [i_6 + 1])) ? (((/* implicit */int) ((_Bool) 4978341030814712967LL))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) min((var_2), (var_2)))))));
            var_24 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) ^ (3875608556U)))), ((~(arr_1 [i_6 + 1])))));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)23962))))) ? (((((/* implicit */_Bool) ((signed char) 824633720832LL))) ? (((((/* implicit */_Bool) 13023203831549545627ULL)) ? (3875608556U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 5423540242160005980ULL)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        arr_34 [i_8] [i_8] [i_6] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_30 [i_6 - 1] [i_9 - 2])))) - (((((/* implicit */_Bool) arr_30 [i_6 + 1] [i_9 + 2])) ? (((/* implicit */int) arr_30 [i_6 + 1] [i_9 + 1])) : (var_7)))));
                    }
                } 
            } 
            arr_35 [i_6] [i_6 + 2] [20U] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [(_Bool)0] [i_6 + 1] [i_6] [(unsigned short)22])) >> ((((~(arr_32 [i_6]))) + (6396885791351998239LL)))));
        }
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) var_0);
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    {
                        var_27 += ((/* implicit */unsigned short) (_Bool)1);
                        var_28 = ((/* implicit */_Bool) (signed char)-20);
                        arr_45 [i_6] [i_6] [i_11] [i_6] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_10)) - (10209922223215345874ULL))), (((/* implicit */unsigned long long int) ((int) arr_36 [i_6] [i_6 + 1])))));
                    }
                } 
            } 
        }
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2468643022993201559LL)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (signed char)-126))))) == (2499907529U))) ? (((/* implicit */int) min((arr_25 [i_6 - 1] [2]), (((/* implicit */unsigned short) ((35184372088831LL) > (var_8))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (((unsigned int) arr_40 [i_6 + 1])))))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)47)) == (537642790)));
        }
    }
}
