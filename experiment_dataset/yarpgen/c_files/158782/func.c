/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158782
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
    var_11 = ((unsigned long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-114)), (2280235709U)))) : (var_5)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (max((max((((/* implicit */unsigned int) ((((/* implicit */int) (short)489)) + (((/* implicit */int) (_Bool)1))))), ((-(866530811U))))), (((/* implicit */unsigned int) (short)28810))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 *= ((/* implicit */signed char) ((3768690356U) / (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)-75)))))));
                                arr_13 [0ULL] = (unsigned char)185;
                                arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (unsigned short)65159);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_14 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_5 [2U] [2U] [i_0 + 1])))), (((((/* implicit */int) ((signed char) (signed char)115))) ^ ((((_Bool)1) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_5] [i_5]))))))));
                    arr_17 [i_0] [i_1] = ((/* implicit */_Bool) var_8);
                }
            }
        } 
    } 
}
