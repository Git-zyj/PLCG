/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125185
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (_Bool)1)))))) ^ (4611650834055299072ULL))))));
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_9 [i_2] |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
                    var_12 = ((/* implicit */long long int) arr_8 [i_2]);
                }
                for (int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                {
                    arr_12 [(short)20] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((-199441618) * (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0]);
                                arr_17 [i_5] [i_0] [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3] [i_4]);
                                var_14 = ((/* implicit */long long int) (_Bool)1);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                                var_15 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((-8791915736230282669LL) + (8791915736230282681LL)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) 8791915736230282669LL);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_17 = ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((signed char) (_Bool)1))));
                                var_18 = ((unsigned long long int) arr_7 [i_1 + 4] [i_1 + 4] [(signed char)15]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 20; i_9 += 3) 
                    {
                        for (int i_10 = 1; i_10 < 20; i_10 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                                var_20 |= ((/* implicit */int) (_Bool)1);
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-16)) | (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) arr_14 [i_1] [(_Bool)1] [i_1])))));
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */unsigned long long int) var_2);
                }
                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) -8791915736230282676LL)) ? (-8791915736230282661LL) : (-8791915736230282670LL)));
                arr_30 [i_0] = 686828486;
            }
        } 
    } 
}
