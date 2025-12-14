/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138230
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) var_6);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((((unsigned char) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned char) var_11))));
                            arr_12 [i_0] [i_1] [i_0 + 3] [(signed char)9] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (~(arr_4 [i_1] [i_2]))))) % (((((/* implicit */int) min(((short)-19440), (((/* implicit */short) (unsigned char)150))))) * (((/* implicit */int) (short)-21065))))));
                        }
                    } 
                } 
                arr_13 [i_0 - 1] [i_1] [i_1] = arr_4 [i_0] [i_1];
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                                arr_23 [i_4] [i_1] [i_1] [i_4 - 2] [i_1] [i_6] = ((/* implicit */signed char) ((int) var_9));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            arr_31 [i_0] [i_1] [i_8] [i_8] [i_7] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(70368735789056LL)))) - (((unsigned long long int) ((((/* implicit */_Bool) (short)-21065)) && (((/* implicit */_Bool) (short)21064)))))));
                            var_18 ^= ((/* implicit */signed char) var_12);
                            var_19 = var_13;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (unsigned int i_10 = 3; i_10 < 11; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            arr_43 [i_12] [i_10] [i_10] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-18971)) ? (((/* implicit */unsigned long long int) (((+(-4061596684321529707LL))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65532)) / (((/* implicit */int) (short)1044)))))))) : (((((unsigned long long int) var_11)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (7) : (0))))))));
                            arr_44 [i_9] [i_10] [i_10] [i_12] = ((/* implicit */_Bool) arr_38 [i_10] [i_10] [(unsigned char)10]);
                        }
                    } 
                } 
                arr_45 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [i_10 + 4] [i_10 - 3] [(short)10] [(short)10] [(short)10] [(short)10])) / ((-(((/* implicit */int) arr_34 [i_10 + 3]))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) arr_39 [(short)9] [(signed char)12] [i_13] [i_10] [i_10 + 2] [i_9])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_46 [i_9] [i_10] [i_14]))))))))) ^ (max((arr_37 [i_9] [i_10] [i_13]), (((/* implicit */unsigned long long int) -1LL))))));
                            arr_50 [i_10] = ((/* implicit */unsigned int) (unsigned short)65532);
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_40 [i_9])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)5364)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) | (((/* implicit */int) (unsigned short)41658)))))));
}
