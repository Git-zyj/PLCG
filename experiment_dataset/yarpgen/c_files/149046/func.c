/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149046
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
    var_15 -= ((/* implicit */unsigned short) (-(17818866476427057539ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_1] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) (short)4900)) ? (((/* implicit */int) var_9)) : (0)));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 18200565813131395422ULL))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_4 = 2; i_4 < 7; i_4 += 3) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned short) arr_9 [i_0]);
            var_17 |= ((/* implicit */_Bool) (((-(((/* implicit */int) arr_9 [i_0])))) ^ (((((/* implicit */_Bool) (short)-1)) ? (1) : (((/* implicit */int) (unsigned char)11))))));
            var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32641))) >= (18446744073709551593ULL)));
            arr_16 [i_4] [i_4] = ((/* implicit */short) arr_14 [i_4 + 1] [i_4]);
        }
        for (unsigned short i_5 = 2; i_5 < 7; i_5 += 3) 
        {
            var_19 -= ((/* implicit */int) ((unsigned char) arr_17 [i_5 - 2]));
            arr_20 [8LL] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)));
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    {
                        arr_25 [i_0] [(short)6] [1ULL] [i_7] = ((/* implicit */unsigned short) arr_18 [1ULL]);
                        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)1)) ? (((((/* implicit */unsigned long long int) 2020389305)) % (var_4))) : (((((/* implicit */_Bool) (short)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_5] [i_6] [i_7] [i_7] [i_7]))) : (var_4)))));
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_28 [8LL] [1U] = ((/* implicit */signed char) (~(((-576460752303423488LL) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            /* LoopNest 3 */
            for (short i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (long long int i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_9 + 1] [i_9 - 1] [i_9 + 1] [9LL] [i_11 + 2] [i_11 - 1])) ? (arr_23 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_11 + 1] [i_11 - 1]) : (arr_23 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_11 - 1] [i_11 + 2])));
                            var_22 ^= ((/* implicit */int) (short)32610);
                            var_23 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 627877597282494076ULL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (short)-32611)))))));
            arr_40 [i_12] = ((/* implicit */unsigned long long int) 2712204228610856015LL);
            var_25 = var_6;
            var_26 = ((/* implicit */short) ((arr_18 [i_12]) * (var_2)));
            arr_41 [i_0] |= (-((~(((/* implicit */int) (short)-25310)))));
        }
        for (unsigned short i_13 = 1; i_13 < 10; i_13 += 4) /* same iter space */
        {
            arr_44 [i_0] = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
            arr_45 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(15878460157658039818ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (-2712204228610856012LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [5] [i_13])))));
        }
        for (unsigned short i_14 = 1; i_14 < 10; i_14 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_13)))));
            /* LoopNest 3 */
            for (unsigned short i_15 = 2; i_15 < 8; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    for (short i_17 = 2; i_17 < 9; i_17 += 2) 
                    {
                        {
                            var_28 ^= ((/* implicit */_Bool) var_8);
                            arr_58 [i_14] [i_16] [i_15] [i_14 - 1] [i_14] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_18 = 0; i_18 < 16; i_18 += 3) 
    {
        arr_61 [i_18] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_59 [i_18])) != (var_10))))));
        arr_62 [i_18] [i_18] = ((/* implicit */unsigned short) var_4);
    }
    var_29 += ((/* implicit */signed char) min((min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) 6885681287321699544ULL)) ? (-8425145794918148913LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-93))))))), (((/* implicit */long long int) var_9))));
}
