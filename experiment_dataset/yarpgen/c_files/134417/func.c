/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134417
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) min((arr_5 [i_3] [i_2] [i_1] [i_0]), (((/* implicit */unsigned char) arr_6 [i_3] [i_2 + 1] [i_1]))))))));
                            var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-8439)), ((unsigned short)55822)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) arr_13 [i_5] [i_4] [i_1] [i_5])), (var_7))));
                            arr_15 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_5])) % (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46724))))) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_4 + 1] [i_5 + 2] [i_4])) : (((/* implicit */int) arr_1 [i_4] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 4; i_6 < 20; i_6 += 2) 
                {
                    for (int i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */short) arr_16 [i_0 + 1] [i_1] [i_6] [i_6]);
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0 - 1] [i_1] [i_6 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [i_7] [(signed char)4])) ? (((/* implicit */int) arr_13 [i_6] [i_1] [i_6] [i_1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_1] [i_6] [i_0 - 1] [i_0 - 1])))) | (375889007)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 4; i_10 < 18; i_10 += 2) 
                {
                    for (unsigned char i_11 = 1; i_11 < 20; i_11 += 2) 
                    {
                        {
                            arr_29 [i_8] [i_8] [(unsigned short)2] [i_11] = ((/* implicit */signed char) (!(var_0)));
                            var_20 = ((/* implicit */unsigned int) ((unsigned short) 67108862U));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((arr_14 [i_8] [i_9] [i_9] [i_8 + 1]), (arr_14 [i_9] [i_9] [i_9] [i_8 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 4; i_12 < 20; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_9 [i_8 - 1] [i_9] [i_12 + 2]))));
                            var_23 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        {
                            arr_43 [i_8] [i_8 - 3] [(short)17] [i_8] = ((/* implicit */int) (short)8438);
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((unsigned int) arr_30 [i_8] [(_Bool)1] [i_14] [i_15]))) | (var_10))) >> (((var_7) + (1834755551470837570LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
