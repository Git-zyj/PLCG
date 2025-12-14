/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104300
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (-(arr_4 [i_2 + 2] [i_0] [i_0])));
                    var_14 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 1403723682U))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_3] [i_3]))) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_3] [i_3]))))));
        var_16 = ((max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-6526))))), (arr_8 [i_3] [i_3]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
        var_17 -= ((/* implicit */unsigned char) max((arr_8 [i_3] [i_3]), (((int) 10539924128759668876ULL))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 3; i_7 < 24; i_7 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) (~(arr_14 [23] [(short)20] [(short)20] [i_7 - 2] [i_7 - 1] [i_7 - 2])));
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                        }
                        for (short i_8 = 3; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_3] [(signed char)9] [i_8 - 2] [i_6]))));
                            arr_23 [i_3] [i_3] [i_4] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2891243613U)) ? (((((/* implicit */_Bool) arr_15 [i_3] [i_4])) ? (((/* implicit */int) arr_10 [(short)0] [(short)0] [i_8])) : (((/* implicit */int) var_4)))) : (arr_8 [i_5] [i_3])))));
                            var_21 = ((/* implicit */int) ((signed char) arr_22 [i_3] [i_4] [i_5] [i_3]));
                        }
                        var_22 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [(_Bool)1] [i_3] [i_3])) ? (var_12) : (arr_21 [i_3] [i_4] [i_5] [i_6] [i_6] [i_3])))) ? (((/* implicit */long long int) arr_8 [i_3] [i_4])) : (((((/* implicit */_Bool) (signed char)-101)) ? (34359738367LL) : (((/* implicit */long long int) 1881081151U))))));
                        var_23 = max((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_4 - 1] [i_4])) ^ (arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))), (((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 1] [i_3]))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_5] [(_Bool)1]))) | ((~(arr_7 [i_4])))));
                    }
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_25 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (2413886144U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9646)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [(signed char)4] [i_4 - 1] [i_4] [i_4 - 1] [i_3] [i_3])) ? (var_10) : (((/* implicit */int) (short)32767))))) : ((+(max((((/* implicit */unsigned long long int) arr_24 [i_3] [i_3] [i_3] [i_3])), (6017364035879799647ULL))))));
                        var_26 = ((/* implicit */unsigned char) arr_21 [i_3] [i_4] [i_5] [i_5] [i_9] [i_9]);
                        var_27 = ((/* implicit */signed char) (+(min(((+(arr_13 [i_3] [i_4] [13ULL] [i_5]))), (((/* implicit */unsigned int) (-(arr_14 [i_3] [i_3] [i_4] [24ULL] [i_5] [i_9]))))))));
                    }
                    arr_28 [i_5] [(short)8] [(_Bool)1] [(short)8] = ((/* implicit */signed char) arr_21 [i_3] [i_3] [i_3] [i_4] [i_5] [i_3]);
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) var_7);
    }
}
