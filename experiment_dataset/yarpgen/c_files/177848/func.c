/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177848
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 8191ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (3ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) > ((~(8193ULL)))));
                            var_19 ^= (unsigned char)31;
                            arr_12 [i_0] = ((/* implicit */long long int) (-(min((8174ULL), (((/* implicit */unsigned long long int) var_8))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((8191ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1])))))) > ((+(((/* implicit */int) arr_5 [i_0 - 1]))))));
                            arr_13 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 3])) ? (((((arr_3 [i_0] [(signed char)0] [i_0]) ? (4294967280U) : (((/* implicit */unsigned int) var_7)))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 1] [i_0])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) & (((/* implicit */int) arr_3 [(signed char)12] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (((((((+(((/* implicit */int) arr_5 [i_0 - 2])))) ^ (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_14 [i_5] [(unsigned char)20] [i_1] [i_0])))))) + (2147483647))) >> ((((~(((/* implicit */int) arr_4 [i_4 + 1] [i_0 + 1])))) + (31638)))));
                            var_23 -= ((/* implicit */long long int) var_7);
                            var_24 = ((/* implicit */_Bool) 8206ULL);
                            var_25 = ((/* implicit */_Bool) 18446744073709543425ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 21; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                            {
                                var_26 *= var_11;
                                arr_26 [i_0] [i_1] [i_1] [i_1] [i_8] [14LL] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709543425ULL)) ? (arr_16 [4U] [i_7]) : (8191ULL)))) ? (((/* implicit */unsigned int) (-(var_7)))) : (((((/* implicit */_Bool) -266076533)) ? (3114293235U) : (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [(short)11] [i_7] [i_8])))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)0])))));
                            }
                            for (int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                            {
                                var_27 -= ((((/* implicit */_Bool) arr_29 [5LL] [i_0 - 2])) ? (arr_0 [i_0 + 1] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_3 [i_7 - 1] [i_7 - 1] [(short)2])))))));
                                arr_30 [i_0 + 1] [i_1] [i_6] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_18 [i_0 - 2] [i_6] [i_6 - 1]))))));
                                var_28 = ((/* implicit */unsigned char) var_1);
                                arr_31 [i_0] [1U] [i_0] [i_6] [i_0] = ((/* implicit */short) (!(((arr_24 [i_6 + 1] [i_6] [i_7] [i_7 - 1] [i_7 + 1]) <= (8189ULL)))));
                            }
                            for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
                            {
                                var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                                arr_34 [i_0] [i_6] [i_6] [i_7] [i_10 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(signed char)21])) || (((/* implicit */_Bool) arr_20 [i_0] [i_1] [11ULL] [i_10])))))));
                                var_30 += ((/* implicit */_Bool) (short)63);
                            }
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_20 [i_0 - 1] [i_0 - 1] [i_6] [i_7]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_16);
}
