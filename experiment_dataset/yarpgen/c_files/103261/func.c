/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103261
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_10 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)55317))));
        var_11 = ((/* implicit */signed char) (unsigned short)6590);
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 498950132U)), (3950340360861174730LL)));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_1 - 1] [i_1 - 2]), (arr_5 [i_1 + 1] [i_1 - 1])))) ? (3950340360861174730LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((3796017175U), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 20; i_4 += 4) 
                {
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3950340360861174730LL)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (_Bool)1))));
                            var_14 ^= arr_14 [i_1 + 1] [i_2] [i_2] [i_4 + 3] [i_5 + 3];
                            var_15 |= ((/* implicit */unsigned short) ((unsigned char) 0U));
                        }
                    } 
                } 
            } 
            arr_17 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) arr_5 [i_1 - 1] [i_1 + 2]));
            var_16 = ((/* implicit */unsigned short) (signed char)-112);
        }
        for (unsigned int i_6 = 3; i_6 < 21; i_6 += 4) 
        {
            var_17 = min((((unsigned char) (signed char)-18)), (((/* implicit */unsigned char) (signed char)-57)));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3796017185U)))) ? (498950108U) : (((/* implicit */unsigned int) -1763641974))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)31))))) ? (min((((/* implicit */long long int) (unsigned char)235)), (-3950340360861174730LL))) : (((/* implicit */long long int) 3796017175U)))) : (((/* implicit */long long int) -22144229))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_7 [i_6 + 1]))) <= (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-82)), ((unsigned char)21))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_6 - 2] [i_1 + 1] [i_6 - 2])) * (((/* implicit */int) arr_11 [i_6 - 2]))))) | (((((/* implicit */_Bool) 6384833288993988866ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)78))) : (3950340360861174730LL)))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 4; i_7 < 23; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        arr_27 [i_1] [i_7] = ((/* implicit */unsigned short) arr_25 [i_1 - 1] [i_6 - 3] [i_6 - 2] [i_7] [i_7]);
                        var_21 = ((/* implicit */unsigned char) max((var_21), (arr_14 [i_8] [i_8] [i_7] [i_6] [i_1])));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) (signed char)127)), (min((2199023255551LL), (((/* implicit */long long int) (signed char)0)))))) == (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_9] [i_9] [i_9])) << (((((((/* implicit */int) (unsigned short)55716)) + (((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9])))) - (55815)))));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (unsigned char i_11 = 2; i_11 < 9; i_11 += 3) 
            {
                for (short i_12 = 1; i_12 < 7; i_12 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 1; i_13 < 8; i_13 += 3) 
                        {
                            var_24 |= ((/* implicit */signed char) ((_Bool) 3796017175U));
                            arr_40 [i_9] [i_10] [i_9] = ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned char)127)) == (((/* implicit */int) (unsigned short)20855))))));
                        }
                        for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            arr_43 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3950340360861174729LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) : (498950109U)));
                            arr_44 [i_10] = ((/* implicit */signed char) 15841132614006429417ULL);
                        }
                        for (unsigned char i_15 = 2; i_15 < 7; i_15 += 3) 
                        {
                            arr_48 [i_9] [i_10] [i_10] [i_12 - 1] = ((/* implicit */unsigned long long int) var_9);
                            arr_49 [i_9] [i_10] [i_11] [(short)0] [i_15 + 2] [i_15 + 1] [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) >= (3796017177U)));
                        }
                        var_25 *= ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_31 [i_9] [i_11] [i_9]))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [22ULL] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) -2199023255552LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) : (var_7)))));
        var_27 = ((/* implicit */short) ((long long int) ((319223789) / (-1))));
        var_28 ^= ((/* implicit */signed char) (+((+(2937821885U)))));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 319223789)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)107))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (unsigned char)31))))));
    var_30 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)11365))));
}
