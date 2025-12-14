/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107733
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
    var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)21424)) ? (((/* implicit */int) (short)11596)) : (((/* implicit */int) (short)21451))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)20] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                arr_7 [i_0] = 1800838394902823504LL;
                arr_8 [(unsigned short)17] [15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5350)) ? (((/* implicit */int) (short)-21456)) : (1293407933)));
                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) max((0LL), (-8100186247442003679LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */int) -2450523767452905973LL);
                arr_14 [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 4])) ? (arr_3 [i_2 + 2]) : (arr_3 [i_2 + 2])))) ? (arr_13 [(unsigned short)1]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2 + 3])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_20 [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 0LL)) ? (595486572) : (((/* implicit */int) (short)21451))))));
                            var_18 = ((/* implicit */long long int) arr_5 [i_2 + 2] [i_2]);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 + 2] [i_2 - 3] [i_2 + 4] [i_2 + 4]))) : (arr_4 [i_2 + 1] [i_5])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) + (max((arr_18 [i_2] [i_3] [i_4] [7LL]), (((/* implicit */long long int) (short)-21461)))))) : (((/* implicit */long long int) 914277224))));
                        }
                    } 
                } 
            }
        } 
    } 
}
