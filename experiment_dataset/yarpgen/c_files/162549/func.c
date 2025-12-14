/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162549
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
    var_18 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45152)))))))))));
                    var_20 = ((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? (((/* implicit */long long int) (-(3675983665U)))) : (arr_4 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1])) || (((((/* implicit */_Bool) 9822227417265444555ULL)) && (((/* implicit */_Bool) 9822227417265444555ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((1023LL), (((/* implicit */long long int) var_2))))))) : (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */short) arr_8 [i_3] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_10)) ? (4716669979080486158LL) : (-1023LL))))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) || (((/* implicit */_Bool) -1386841221))))) : (min((((/* implicit */int) (unsigned char)87)), (1386841220)))));
                                var_23 = ((/* implicit */long long int) (signed char)84);
                            }
                        } 
                    } 
                }
                var_24 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned short) (short)17676)), (var_14))))), (max((max((1265115051U), (((/* implicit */unsigned int) (short)21096)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-61)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (240727811823558891LL)))) ? (((/* implicit */long long int) max((3675983665U), (((/* implicit */unsigned int) min((2028177338), (((/* implicit */int) (_Bool)0)))))))) : (var_0)));
    var_26 = var_3;
}
