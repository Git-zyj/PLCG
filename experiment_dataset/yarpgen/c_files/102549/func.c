/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102549
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 63U)) || (((/* implicit */_Bool) -1LL))))), ((+(((((/* implicit */_Bool) 4294967232U)) ? (((/* implicit */unsigned int) var_18)) : (arr_8 [i_0] [i_0] [i_0] [i_3 - 2])))))));
                            arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 10976537376149242690ULL))))), (max((var_16), (1501472680)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) arr_5 [i_3 - 3] [i_3 - 3] [i_0])) : (((/* implicit */int) (unsigned char)65))))) : (min((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) & (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max(((+(arr_6 [i_0] [i_0] [i_1 + 1] [i_1 + 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 - 1] [i_0]))))))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((signed char) arr_7 [i_0] [i_1 + 2])))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1]))) % (10976537376149242690ULL))) << (((min((((/* implicit */int) (unsigned char)180)), (((((/* implicit */_Bool) 7470206697560308925ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0])))))) - (179))))))));
            }
        } 
    } 
    var_24 &= var_6;
    var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_13)), ((unsigned char)251)))))))) ? (max((((/* implicit */int) ((unsigned short) 1148417904979476480ULL))), (7))) : (((var_1) << (((var_2) - (1166911733)))))));
    var_26 = ((/* implicit */signed char) var_10);
}
