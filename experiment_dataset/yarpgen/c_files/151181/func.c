/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151181
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551615ULL)))) ? ((+(max((178672918729430005LL), (((/* implicit */long long int) (short)-26694)))))) : ((-(178672918729430005LL))))))));
                            arr_9 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) var_0)) ? (70367670435840LL) : (var_4))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_11)))))));
                            var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -178672918729430006LL)) ? (var_4) : (((/* implicit */long long int) -770400440))))), (min((11764084171548919224ULL), (6682659902160632395ULL)))))) ? (((/* implicit */unsigned long long int) (((+(var_12))) / (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) (-(1938561491)))) ? (((/* implicit */unsigned long long int) (+(-178672918729430016LL)))) : (((unsigned long long int) arr_3 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_6] [i_4] [i_5] [i_6] &= ((/* implicit */unsigned long long int) arr_11 [i_1] [i_4] [i_5]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (770400432) : (((/* implicit */int) arr_11 [(unsigned char)1] [i_1] [i_1]))))) + ((((_Bool)0) ? (var_12) : (((/* implicit */long long int) arr_1 [(unsigned short)7] [(unsigned short)7])))))));
                                arr_21 [i_0] [i_0] [i_0] [i_6] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) > (((/* implicit */int) min((var_5), (var_5))))));
                                arr_22 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) * (var_8)))) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0] [(short)14] [i_5] [i_5 + 2] [i_6] [i_5] [i_1])))))))) <= (178672918729430005LL)));
                                arr_23 [(short)1] [i_1] [i_4] [i_4] [i_1] [i_1] [(unsigned short)11] = ((/* implicit */_Bool) (+(((unsigned long long int) arr_14 [i_0] [i_1] [i_4] [i_5]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 3) 
    {
        for (long long int i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_9 = 3; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) (-(3086611342834637614LL)));
                                arr_39 [(_Bool)1] [i_8] [i_9] [i_9] [6ULL] [i_11] [i_9] &= ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_13))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            arr_46 [i_8] = ((/* implicit */long long int) arr_42 [i_8]);
                            var_21 += ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-26694)))))));
                            arr_47 [i_7] [i_8 - 1] [i_8] [i_7] [(_Bool)1] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_2 [i_8])))));
                            var_22 += (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [(unsigned char)6] [i_13]))))));
                            arr_48 [i_8] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) + (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1942750210)) ? (123812057) : (2147483647)))), ((-(arr_40 [i_8] [i_13] [(_Bool)0] [i_13])))))));
                        }
                    } 
                } 
                arr_49 [i_8] = ((/* implicit */short) min((min((((((/* implicit */int) arr_13 [i_7])) * (((/* implicit */int) var_9)))), ((+(((/* implicit */int) (short)-19395)))))), (arr_34 [11U] [i_8 + 1] [i_8 + 1] [i_7] [i_8 + 1] [8])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
    {
        for (short i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            {
                arr_56 [i_14] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_3)) / ((~((~(var_7)))))));
                /* LoopNest 3 */
                for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        for (long long int i_18 = 4; i_18 < 10; i_18 += 4) 
                        {
                            {
                                arr_65 [i_14] [i_15] [i_15] [i_16] [i_17] [i_18] = ((/* implicit */long long int) ((_Bool) min((min((4192254722330800155ULL), (((/* implicit */unsigned long long int) -178672918729429991LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_66 [i_15] [i_14] = ((/* implicit */long long int) 973519207);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
