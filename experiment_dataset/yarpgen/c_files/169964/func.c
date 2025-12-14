/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169964
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(unsigned short)8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((arr_1 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516))) : (((unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_2);
                            arr_11 [i_0] [i_0] [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) ((int) ((short) arr_6 [i_0] [i_1] [i_0] [i_0]))))));
                            arr_12 [i_0] = ((/* implicit */int) ((unsigned short) max((arr_3 [i_0]), (min((var_9), (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((1U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))) : (var_9)))));
                arr_14 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_0])))) * (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_27 [i_6] [i_6] = (unsigned short)60654;
                    arr_28 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((+(arr_25 [i_6] [i_6] [i_6] [i_4]))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_6] [i_4] [i_4] [i_4]))))))))));
                    arr_29 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_23 [i_4] [(_Bool)1] [i_4] [i_4])) / (((/* implicit */int) var_1)))) + (((/* implicit */int) var_6)))) >> (((/* implicit */int) min((((var_11) && (((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) var_13)))))))));
                }
            } 
        } 
    } 
}
