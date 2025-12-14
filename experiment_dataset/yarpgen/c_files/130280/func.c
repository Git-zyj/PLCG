/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130280
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
    var_10 += ((/* implicit */unsigned char) ((unsigned int) (signed char)117));
    var_11 = ((/* implicit */_Bool) ((unsigned char) var_0));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] [i_3] [10LL]);
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((arr_7 [i_4 - 4]) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 2] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) ((((((/* implicit */int) var_8)) % (((/* implicit */int) (signed char)-119)))) != (((/* implicit */int) var_3))))) : (((/* implicit */int) var_8)))))));
                                arr_13 [i_0] [i_1] [17] [i_3] [11U] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) var_0)))));
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) / (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) % (((long long int) var_5)))));
                    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_7))))))))) ^ (((((long long int) arr_0 [i_1] [i_2])) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), (var_0)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (var_4) : (var_4))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (signed char i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    for (signed char i_8 = 2; i_8 < 7; i_8 += 4) 
                    {
                        {
                            arr_25 [i_5] [i_6 - 2] [i_8] [i_8] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-7243))));
                            var_17 = ((/* implicit */signed char) ((((8796093022207LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-18))))) << (((max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)92)), (arr_6 [(signed char)2])))), (((unsigned int) var_7)))) - (4294967276U)))));
                            var_18 = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 7; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            arr_30 [i_10] [i_5] [i_6] [i_9] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (arr_29 [i_5] [i_5] [i_9 + 1] [i_10])));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_8 [i_6 + 2] [i_6] [i_6 + 2]))) >> (((((/* implicit */int) (signed char)117)) - (93)))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] [5] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_10 [i_6 - 3] [i_6 - 3] [i_9] [i_9 + 4]), (arr_10 [i_6 + 2] [i_6] [i_9] [i_9 - 1])))) - ((-(((/* implicit */int) var_2))))));
                            var_20 = ((((/* implicit */int) ((max((var_4), (((/* implicit */unsigned int) arr_11 [i_10] [i_9] [(signed char)18] [(unsigned char)19] [i_5] [i_5] [i_5])))) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))))) ^ (((/* implicit */int) var_9)));
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6] [i_6 - 3] [(unsigned char)17] [i_6] [i_6 + 1] [i_9 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [0LL] [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_6] [(_Bool)1] [i_9 - 1]))) : (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_3)), (arr_12 [i_5] [i_5] [i_6 - 3] [i_6] [i_6 - 2] [i_9] [i_9 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
