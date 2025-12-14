/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142657
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) arr_7 [i_0] [i_0] [i_0] [i_0]))), (1638427807U)));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) arr_5 [(unsigned char)10] [(unsigned short)12] [(unsigned char)10])), (0ULL)))))) || (((/* implicit */_Bool) (unsigned short)35591)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */signed char) arr_6 [i_0]);
                            var_14 = ((/* implicit */unsigned char) arr_10 [i_4]);
                            var_15 = (-((+(((unsigned long long int) 3343713941U)))));
                            var_16 += ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_11 [i_4 + 1] [i_0] [i_4 + 2])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) 951253355U)), (arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(signed char)17] [(signed char)17] [i_6] [i_7]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0])) * (arr_18 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((5925407595133612705LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (unsigned char)65)) ? (arr_10 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11646)))))))));
                            var_18 = ((/* implicit */long long int) (((+((-(15672903679996446944ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [(_Bool)1])))))));
                            arr_21 [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) (+(-5925407595133612688LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_19 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-18)) * (((/* implicit */int) (unsigned short)29963))))), ((+(1964559329U))))), ((+(max((3639383122U), (((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_8] [i_9]))))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [6] [6] [i_9])) ? (arr_17 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) -6199763552261736225LL))))))) ? ((+(max((arr_18 [i_0]), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_1] [i_8] [i_9]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) 9223372036854775807LL);
                            var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) % (arr_12 [i_10])))) : ((+(17828101617223209033ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_12 = 3; i_12 < 19; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) 852779113U)))) ? (arr_41 [i_12] [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_42 [i_15] [i_14] [i_13] [i_12]), (((/* implicit */unsigned long long int) -16)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1])))))))));
                                var_23 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12 - 3] [i_15] [i_12])) ? (arr_41 [i_16] [i_15] [i_14] [i_15] [i_12 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_16] [i_13 + 2] [i_13 - 1] [i_13])))))) ? (arr_41 [i_13 + 1] [i_15] [i_14] [i_15] [i_12 + 1]) : (((/* implicit */unsigned long long int) arr_36 [i_13 + 2] [i_13 + 2])))), (arr_42 [i_12] [i_12] [i_12] [i_12 - 3])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((int) (((!(((/* implicit */_Bool) arr_39 [i_12] [i_17] [i_17])))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)161)), (arr_48 [i_12 + 2] [i_13] [i_17] [i_18])))))));
                            var_25 = ((/* implicit */int) (signed char)-64);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    for (signed char i_20 = 1; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_26 += 655584173U;
                            arr_55 [i_12] [i_20] [i_19] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3442188199U))))) ^ ((-((-(((/* implicit */int) arr_40 [i_20] [i_20] [i_19] [i_19]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
