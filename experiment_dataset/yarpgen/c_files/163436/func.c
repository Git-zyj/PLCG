/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163436
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
    var_13 = ((/* implicit */unsigned char) ((long long int) -2119748624));
    var_14 = var_7;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(unsigned char)10] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8607852184955322788LL)) || (((/* implicit */_Bool) 8607852184955322788LL)))))) <= ((-(arr_2 [i_2])))));
                    arr_8 [i_0] [i_0] [16ULL] [i_2] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))) / (var_11)));
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (arr_16 [12] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                var_17 = (-(-8992909989237226467LL));
                var_18 -= ((/* implicit */unsigned int) min((arr_14 [i_4]), (((/* implicit */int) max((var_1), (var_1))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_19 = min((((/* implicit */long long int) ((((((/* implicit */_Bool) 1482592099U)) ? (arr_10 [i_4]) : (((/* implicit */long long int) arr_15 [i_6] [14U] [i_6])))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2119748623)) || (((/* implicit */_Bool) var_5))))))))), (((((/* implicit */_Bool) arr_13 [7LL] [7LL])) ? (((/* implicit */long long int) arr_11 [i_4] [20ULL])) : (((arr_17 [i_3]) ? (arr_10 [i_3 + 2]) : (((/* implicit */long long int) arr_14 [15ULL])))))));
                            arr_22 [i_6] [i_3] [i_4] [i_3] [i_5] [i_5] = arr_16 [i_4] [(unsigned char)1] [i_6];
                            arr_23 [i_3] [i_6] [i_5] [i_6] = var_6;
                        }
                    } 
                } 
                arr_24 [i_3 - 1] [i_4] = 9349154869843809126ULL;
            }
        } 
    } 
}
