/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184413
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_17 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)10)) || ((_Bool)1))))));
                        var_18 = ((short) arr_5 [i_3] [i_3] [i_0 - 2] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                arr_19 [(unsigned char)0] [i_1] [i_5] [(unsigned char)0] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0 - 2])))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) arr_6 [i_5] [i_2] [i_2]))))) > (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [6] [i_1] [i_1] [i_1]))))))))));
                                var_19 = ((/* implicit */signed char) 4038580286905467750ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (+(min((((/* implicit */int) ((short) (_Bool)1))), ((-2147483647 - 1))))));
    var_21 = ((/* implicit */_Bool) var_4);
    var_22 = ((/* implicit */int) ((max(((~(17800074173299845608ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)0)), (8101590655607812421LL)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))))));
}
