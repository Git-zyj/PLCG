/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118006
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    var_11 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_6));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */int) max(((unsigned short)48648), (arr_5 [i_2] [i_2] [i_4])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))), (((((/* implicit */int) ((arr_8 [i_0] [i_0] [i_2] [6]) > (((/* implicit */unsigned long long int) arr_2 [i_1] [i_4] [i_2]))))) + (var_0)))));
                                arr_12 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_2] [i_4] = ((/* implicit */long long int) ((unsigned char) min((arr_6 [i_3] [i_0 - 2] [i_2] [i_2]), ((!(arr_7 [i_0] [i_1] [i_2] [i_2] [i_4] [(unsigned char)1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_12 &= ((/* implicit */signed char) (+(arr_8 [i_0] [i_0] [i_0] [i_6])));
                            arr_18 [i_0] [i_0] [i_0] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_1 + 1] [i_6] [i_0] [i_6] [i_6]), (((/* implicit */short) max(((unsigned char)238), (((/* implicit */unsigned char) var_3)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)48651)) ? (var_0) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (short)-10337)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))));
                        }
                    } 
                } 
                var_13 *= ((/* implicit */short) arr_16 [i_1] [i_1] [i_1] [i_0] [4LL] [i_1]);
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 2])) ? (arr_14 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))))))));
                            var_14 ^= ((/* implicit */long long int) min((max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65522)) == (((/* implicit */int) arr_21 [i_0] [i_1] [i_1]))))), (var_8))), (((/* implicit */unsigned char) min((((/* implicit */signed char) arr_24 [i_0] [i_1 - 2] [i_7] [i_8])), (var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (short i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)0)))) >= (((/* implicit */int) max(((unsigned short)48654), (max(((unsigned short)13), (((/* implicit */unsigned short) (signed char)-122)))))))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_26 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)48648))))) : (max((((/* implicit */unsigned int) var_2)), (arr_26 [(short)6]))))), (((/* implicit */unsigned int) ((unsigned char) arr_31 [i_9] [i_10 - 2]))))))));
                arr_32 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65508)) ? ((~(((/* implicit */int) arr_30 [i_9] [i_10])))) : (((/* implicit */int) ((short) var_1)))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_9] [i_10]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [i_10])) ? (((/* implicit */int) arr_29 [i_10] [i_10] [i_10])) : (-636032476)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65512))))) : (max((arr_26 [i_10]), (((/* implicit */unsigned int) arr_30 [i_9] [i_10]))))))));
            }
        } 
    } 
}
