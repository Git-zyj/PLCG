/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146398
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
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (~(((arr_2 [i_0 - 2] [i_1]) % (((/* implicit */int) (short)-170)))))))));
                arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((signed char) (_Bool)0));
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_11 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 4]))));
                            var_12 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
            arr_14 [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((var_1) >> (((/* implicit */int) (_Bool)1))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (16923174298006429420ULL))));
            var_13 = ((/* implicit */unsigned short) (-(arr_8 [i_0] [i_1] [i_1])));
        }
        var_14 |= ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_3 [i_0 - 4] [i_0] [i_0])));
    }
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */int) (unsigned short)58743);
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)58718))))), (((((/* implicit */_Bool) var_7)) ? (406424671993800807ULL) : (arr_23 [i_8] [i_7] [i_6] [i_5] [i_5])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)182))))) : (255LL)));
                        arr_26 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(16923174298006429420ULL))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7408972446641804118ULL)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_9 = 1; i_9 < 21; i_9 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 20; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_34 [i_5] [i_9 - 1] [i_10] [i_11] [i_12] [i_11])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_35 [i_5 - 2] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5]))))) : (((((/* implicit */_Bool) (short)-3460)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5306958628533760013LL))))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((int) 18040319401715750793ULL)))))));
                        }
                    } 
                } 
            } 
            var_20 ^= ((/* implicit */_Bool) ((long long int) arr_23 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9] [i_9]));
        }
        /* vectorizable */
        for (long long int i_13 = 1; i_13 < 21; i_13 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) var_8);
            arr_39 [i_5 + 1] [i_13] [i_13] = ((/* implicit */short) (-(((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) var_2)) : (977294937)))));
        }
    }
    var_22 += ((/* implicit */unsigned short) (+(-660146073)));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_3), (((/* implicit */unsigned int) (short)-3481)))) << (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))));
    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) / (((/* implicit */int) var_0))));
}
