/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120258
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned long long int) (unsigned char)19);
                            arr_10 [i_2] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)3884)) : (((/* implicit */int) var_11)));
                            var_14 = ((/* implicit */signed char) 9223372036854775807LL);
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (_Bool)1))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0])) == (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 1] [i_0 - 2]))))) >> (((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 2]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_17 |= ((/* implicit */unsigned char) min((min((3843621291791914148LL), (((/* implicit */long long int) arr_2 [i_0 - 3])))), (((/* implicit */long long int) var_3))));
                            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) arr_1 [i_0])) % ((+(((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((9223372036854775807LL) - (1073741823LL)));
                            var_20 += ((/* implicit */unsigned long long int) var_3);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_8))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        {
                            var_22 &= min((((/* implicit */long long int) ((signed char) ((-1073741823LL) | (-3843621291791914148LL))))), (-3843621291791914148LL));
                            arr_30 [i_11] [i_11] [i_10] [i_11] = ((/* implicit */_Bool) var_10);
                            var_23 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)23575), ((unsigned short)23575)))) * ((-(((/* implicit */int) (unsigned short)0))))))), (((long long int) ((long long int) arr_25 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
                            var_24 = ((/* implicit */signed char) 13942215815770240136ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            arr_36 [i_6 - 1] [i_6 - 1] [i_7] [i_13] [i_13] = arr_22 [i_6] [i_6] [i_12];
                            arr_37 [i_12] [i_12] [i_13] = ((/* implicit */int) arr_20 [i_13 + 1] [i_6 - 1]);
                            var_25 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)65535))))) - (9881357242466721566ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42723)))));
                            arr_38 [i_6 - 1] [i_7 + 1] [i_12] [i_13] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_14 [i_13 + 1] [i_13] [i_13] [i_13 + 1] [i_6])), (min((((/* implicit */unsigned long long int) arr_22 [i_6] [i_7] [i_12])), (var_1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6 - 1] [i_13 + 1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    for (unsigned int i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        {
                            arr_45 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            var_26 |= ((/* implicit */signed char) ((((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)61127))))) % (min((((/* implicit */long long int) (unsigned short)65535)), (-929838611880715606LL))))) == (min((-929838611880715606LL), (((/* implicit */long long int) (unsigned short)58963))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((9223372036854775807LL), (((/* implicit */long long int) 3202433755U)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (int i_17 = 4; i_17 < 9; i_17 += 4) 
                    {
                        for (signed char i_18 = 0; i_18 < 13; i_18 += 4) 
                        {
                            {
                                arr_53 [i_18] [i_6 - 1] [i_6 - 1] |= ((/* implicit */long long int) (unsigned short)4408);
                                var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7 - 3] [i_6 - 1] [i_6]))) > (9223372036854775807LL))))));
                                var_29 = ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
