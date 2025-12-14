/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158116
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_1 + 3] [i_2] = ((/* implicit */_Bool) ((unsigned int) var_8));
                                arr_15 [2] [i_4] [(short)10] [(short)6] [i_4] = var_5;
                                arr_16 [i_2] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) var_1);
                                arr_17 [(_Bool)1] [(unsigned char)6] [i_2] [i_2] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1 + 2] [i_1 - 1] [i_0] [2LL])), (arr_4 [i_1 + 2]))))));
                                arr_18 [i_2] [i_1] [9U] [i_1] [i_1] [(short)0] [i_1] = ((/* implicit */unsigned short) (-(var_8)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_24 [1] [i_2] [1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) 8020931272687471598LL)) ? (8020931272687471598LL) : (8020931272687471598LL))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_11))))))))));
                                arr_25 [i_0] = ((/* implicit */int) (-(min((-2047087863050619395LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] = var_13;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_32 [i_2] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_1 - 1])))));
                                arr_33 [i_0] [(_Bool)1] [5U] [i_2] [i_8] [i_2] = ((/* implicit */unsigned int) 8020931272687471598LL);
                                arr_34 [i_0] [(short)10] [i_2] = ((/* implicit */short) ((int) min((-8020931272687471599LL), (((/* implicit */long long int) -1770151552)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
}
