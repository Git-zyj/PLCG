/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1749
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (signed char)-33)), (max((((/* implicit */long long int) 1875199757U)), (1327256022172541354LL))))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)33)))))));
                            var_19 += ((unsigned char) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])) > (((((/* implicit */int) (signed char)3)) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3])) - (23237)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_17 [i_0]))))) : (max((((/* implicit */unsigned int) (signed char)114)), (1875199757U))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_7 [i_6] [i_0] [i_6] [i_0] [i_6] [i_6]);
                                var_22 = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_4] [i_5])), (arr_15 [1LL] [i_4] [i_5] [i_6])))), ((-(13891161539362016175ULL))))));
                                arr_19 [i_1] = ((/* implicit */int) arr_11 [i_5 - 1] [i_5 - 2] [i_5]);
                            }
                        } 
                    } 
                } 
                arr_20 [16ULL] = ((/* implicit */_Bool) arr_8 [i_1] [i_0] [10] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))))) ? (((long long int) ((unsigned int) var_11))) : (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) ((var_18) < (((/* implicit */unsigned long long int) 2419767538U)))))))))));
}
