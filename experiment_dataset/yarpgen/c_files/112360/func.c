/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112360
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)7461)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) (short)-7461);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_3 - 1]));
                            var_13 += arr_0 [i_0];
                            var_14 = arr_7 [i_0];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_0 + 4] [i_0 + 4])) && (((/* implicit */_Bool) (short)7461)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 3])) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_5 - 2]))))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [14ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_5] [i_6])) && (((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1] [i_4] [(short)8])))))) : (((((/* implicit */_Bool) arr_3 [i_6 + 1])) ? (arr_20 [i_1]) : (((/* implicit */long long int) arr_3 [i_0]))))))));
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? ((~(((/* implicit */int) (short)-7461)))) : (((/* implicit */int) arr_16 [i_0 + 2] [i_0]))))) ? (12117000895645290848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 4] [i_1 + 1])))))));
                                var_16 |= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)7459))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((var_9) * (var_9)));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            {
                var_18 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_8] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2044286315)) ? (((/* implicit */int) arr_19 [i_7] [i_7] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_23 [i_7]))))) : (2782070092548083044ULL)))));
                arr_28 [i_7] [i_8] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7]))))));
            }
        } 
    } 
}
