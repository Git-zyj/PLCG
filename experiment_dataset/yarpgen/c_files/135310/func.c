/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135310
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_2] = (~(((int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])));
                    arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -730604653)) : ((((_Bool)1) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1] [i_2 - 1]))))) : (((/* implicit */int) ((signed char) (unsigned char)201))))) : (((int) arr_0 [i_2 - 1]))));
                    var_13 -= ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4 + 1] [i_2] [i_2 - 1] [i_2] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) 730604635)) ? (((unsigned long long int) 2097151)) : (((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [i_2 - 1] [i_1])));
                                var_14 *= ((/* implicit */unsigned char) (((~(3861423832U))) / (((/* implicit */unsigned int) 730604650))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_3] [i_2] = ((/* implicit */int) arr_15 [i_2 - 1] [i_3 + 4] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [(_Bool)1] [(unsigned char)17] [(_Bool)1] [i_2] = ((/* implicit */signed char) max((11U), (((/* implicit */unsigned int) ((((int) 4294967289U)) + (arr_10 [i_6] [i_2] [i_0] [i_2 - 1]))))));
                                var_15 = ((/* implicit */unsigned char) ((unsigned int) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (18161826569367243004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)21])))))));
                            }
                        } 
                    } 
                }
                var_16 &= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_15 [i_0] [i_0] [(short)14])))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (~(4294967288U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
    {
        for (signed char i_8 = 4; i_8 < 14; i_8 += 2) 
        {
            {
                arr_30 [i_7 + 3] [i_8 - 2] = (-((-(((/* implicit */int) ((730604649) >= (-730604644)))))));
                arr_31 [i_7] [i_8] = ((/* implicit */unsigned char) arr_26 [i_7]);
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned short) ((long long int) arr_13 [i_7 + 4]))))));
                var_20 = ((/* implicit */unsigned short) 1977651339);
                var_21 = ((/* implicit */unsigned int) min(((-(max((((/* implicit */unsigned long long int) var_10)), (var_2))))), (((arr_5 [i_7 - 2]) - (min((arr_0 [i_7]), (((/* implicit */unsigned long long int) arr_4 [i_8 - 1]))))))));
            }
        } 
    } 
    var_22 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_0)))))) ? (-1977651353) : ((+(((/* implicit */int) var_7)))));
}
