/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134760
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    arr_7 [(short)8] [(unsigned short)5] = ((/* implicit */signed char) ((unsigned long long int) var_4));
                    var_10 = ((unsigned int) ((short) 931354406U));
                }
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) /* same iter space */
                {
                    var_11 = ((/* implicit */_Bool) var_9);
                    arr_11 [i_1] = ((/* implicit */long long int) var_0);
                    arr_12 [(short)7] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) ((int) 16777216))));
                }
                for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((unsigned short) var_4))));
                    arr_15 [i_0] [(short)3] [(short)3] = ((/* implicit */short) ((_Bool) ((_Bool) ((unsigned int) var_9))));
                }
                var_13 = ((/* implicit */short) ((int) var_3));
                var_14 &= ((/* implicit */short) ((signed char) var_8));
                arr_16 [i_0] = ((short) var_1);
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_15 = var_8;
                    var_16 = ((/* implicit */signed char) ((unsigned short) ((unsigned int) 3363612889U)));
                }
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) var_0)));
                    var_17 = ((/* implicit */signed char) var_1);
                }
                /* vectorizable */
                for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    arr_26 [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) var_4);
                    var_18 = ((/* implicit */unsigned int) var_9);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) var_3)));
}
