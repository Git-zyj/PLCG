/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168379
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
    var_12 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_4)))) : (((((/* implicit */long long int) 1295254419)) | (2147475456LL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (min((var_11), (((/* implicit */unsigned long long int) ((_Bool) var_0))))));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))), (((var_10) - (var_11))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned short) var_3));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) var_11);
                                var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) min((2147483647), (1295254432)))) ? (var_2) : (((((/* implicit */_Bool) 72057594037927935ULL)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))))) : (((int) ((((/* implicit */_Bool) (short)1133)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2147475448LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
