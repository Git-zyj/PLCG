/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167111
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)108))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_18 = var_10;
                    var_19 ^= 931161588U;
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_6 [i_1] [i_2 + 1]));
                }
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_20 = ((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) / (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 50331648)) : (var_7)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112)))));
                    var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) (unsigned short)58736))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) var_3)))));
                                arr_20 [i_0] [i_1] [i_1] [i_4] [i_4] [i_1] = ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)6)), ((short)-25160)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (short)112))));
                        arr_23 [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) var_0);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        var_24 *= ((/* implicit */signed char) ((((11776759359891941353ULL) >> (((((/* implicit */int) (signed char)127)) - (80))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) * (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (signed char)121)) : (min((((/* implicit */int) arr_22 [i_3])), (arr_1 [i_0]))))))));
                        arr_27 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_5) & (((/* implicit */int) (signed char)0))))))) ? (min((((/* implicit */unsigned long long int) arr_25 [i_7 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1])), (((((/* implicit */_Bool) var_13)) ? (16257726474495697743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1 + 1] [i_3] [i_3] [i_7 + 3]))))))) : (min((((/* implicit */unsigned long long int) arr_24 [i_1 - 1] [i_1] [i_1] [i_7 - 1] [i_7])), (var_14)))));
                        var_25 |= ((unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)11489))))), (var_7)));
                        arr_28 [i_0] [i_0] [i_7 + 3] |= ((/* implicit */unsigned long long int) max(((unsigned short)11468), (((/* implicit */unsigned short) (unsigned char)62))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((arr_26 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) > (((/* implicit */int) arr_18 [i_1 - 1]))))))))));
                        var_27 += ((/* implicit */signed char) ((var_5) < (min(((+(((/* implicit */int) (unsigned char)79)))), (((/* implicit */int) var_0))))));
                        arr_32 [i_8] [i_3] [i_3] [i_0] &= ((/* implicit */unsigned long long int) (!(((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1]) <= (((/* implicit */int) (unsigned short)65037))))));
                    }
                    arr_33 [i_1] = var_9;
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
    {
        for (int i_10 = 2; i_10 < 19; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                {
                    var_28 = (+(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54067)) || (((/* implicit */_Bool) (unsigned short)54060))))), (arr_37 [i_10 + 1])))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_9 + 1])))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned char) max((var_12), ((~((+(((/* implicit */int) var_17))))))));
}
