/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170064
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_1)))) : (min((arr_1 [i_1]), (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)41899)) > (((/* implicit */int) (unsigned short)23636))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23636)) || (((/* implicit */_Bool) (unsigned short)23637))))) <= (((var_2) + (((/* implicit */int) var_1))))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)23637)) ? (((/* implicit */int) (unsigned short)41899)) : (((/* implicit */int) (unsigned short)40283)))));
                                var_12 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_4] [i_1] [i_3])) << (((1274532325U) - (1274532325U)))));
                                var_13 ^= ((((/* implicit */_Bool) (unsigned short)41898)) ? (((/* implicit */int) (unsigned short)23636)) : (((/* implicit */int) (signed char)-69)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = var_0;
    var_15 = min((var_6), (((/* implicit */unsigned short) var_3)));
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_0);
                            arr_23 [i_5 + 3] [i_5 + 4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((int) ((min((arr_7 [i_5] [i_5] [i_7]), (arr_10 [i_5 + 3] [i_6] [i_7] [i_8 - 1]))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)4))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_4 [i_7])) ? (1454517742) : (((/* implicit */int) arr_3 [i_5]))))))) ? (arr_10 [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_8 + 1] [9ULL] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_7] [(unsigned short)0] [i_8 - 1] [i_8] [i_7])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) arr_3 [i_10]);
                            arr_29 [i_5] [i_10] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)23637), ((unsigned short)41899)))) ? (((((/* implicit */_Bool) (unsigned short)41900)) ? (((/* implicit */int) ((12697066718610285113ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */int) (unsigned short)23635)) + (((/* implicit */int) arr_19 [i_5] [i_5] [i_10])))))) : (((/* implicit */int) (unsigned short)23636))));
                            arr_30 [i_5] [i_6] [i_10] [i_6] = ((/* implicit */unsigned long long int) arr_1 [i_10]);
                        }
                    } 
                } 
                var_19 &= ((/* implicit */unsigned long long int) arr_1 [i_5 + 2]);
                /* LoopNest 3 */
                for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        for (int i_13 = 1; i_13 < 12; i_13 += 3) 
                        {
                            {
                                arr_40 [i_5] [i_5] [i_5] [i_12] [i_5] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((unsigned short) arr_31 [i_5] [i_5 - 1] [i_5 + 4]))))) ? ((~(max((((/* implicit */unsigned long long int) (unsigned short)41900)), (0ULL))))) : (((arr_18 [i_12] [i_5 + 2]) / (arr_18 [i_5 + 3] [i_5 + 1])))));
                                arr_41 [i_13] [i_12] [i_11] [i_12] [i_5] = ((/* implicit */unsigned short) ((min((arr_0 [i_13 + 1] [i_13 - 1]), (((/* implicit */long long int) var_8)))) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_14 = 1; i_14 < 9; i_14 += 1) 
                {
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 3; i_16 < 12; i_16 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_11 [i_5] [i_15] [i_14 - 1] [i_15 + 2] [i_16]);
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((arr_32 [i_16 - 3] [i_15 + 2] [i_14] [i_6]), (((/* implicit */signed char) ((((((/* implicit */_Bool) 3020434971U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)106)))) < (((/* implicit */int) ((unsigned short) arr_15 [6ULL] [i_14])))))))))));
                                var_22 += (unsigned short)41899;
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_0))));
                                var_24 += ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_15] [i_15 + 1] [18LL] [14ULL] [i_15 + 3] [i_15 + 2])) == (((/* implicit */int) arr_46 [i_5] [i_5] [(unsigned short)8] [i_15 - 1] [i_5] [(signed char)12]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
