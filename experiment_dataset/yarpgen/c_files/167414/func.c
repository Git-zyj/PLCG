/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167414
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
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1752915883049539239LL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_1 [i_0] [i_1])))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (5613657177922674780LL) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))))) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35255)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(arr_2 [i_0] [i_1] [i_3]))), (((/* implicit */unsigned int) ((-1414929719) == (((/* implicit */int) (short)-10872)))))))) ? (((/* implicit */int) (unsigned short)35037)) : (((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_18))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))))) : (((/* implicit */int) (!(var_15))))))));
                            var_22 = ((/* implicit */long long int) (+(((arr_5 [i_1] [i_1 - 1] [i_1] [i_1]) + (arr_5 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_16))))) % (((/* implicit */int) arr_1 [i_0] [i_1]))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) != (var_3)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] = ((/* implicit */int) ((_Bool) (!((_Bool)1))));
                                arr_21 [i_0] [i_4] [i_4] [i_5 - 1] = ((/* implicit */unsigned short) (unsigned char)0);
                            }
                        } 
                    } 
                } 
                var_24 -= ((/* implicit */signed char) var_15);
                var_25 = max(((-(arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1930537073)) ? (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 3; i_7 < 22; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)31)))) != ((+(var_10)))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_35 [i_7] [i_8] [i_10]) <= (466323630U)))) - (((-1) + ((~(((/* implicit */int) (short)-10872))))))));
                                arr_39 [i_7] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */int) -6192948624992255333LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
