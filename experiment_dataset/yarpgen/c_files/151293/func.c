/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151293
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
    var_17 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (15474504532580050720ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16137)))))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1] [i_0])))) * (((((/* implicit */int) ((arr_10 [i_0] [i_4] [i_2] [i_3] [i_3] [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49399)))))) / (((var_0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_11 [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) & (4895478145659745037ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_18 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_5] [i_0 - 1] [i_0 - 1]))) : (arr_6 [i_0 + 1]))) == (((/* implicit */unsigned long long int) 1544184329U))));
                            arr_19 [i_5] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16123))))), (((/* implicit */unsigned long long int) (_Bool)0))));
                            var_19 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0 - 1])) || (((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 2]))))));
                            arr_20 [i_0 + 1] [i_0] [i_5] [i_5] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3491686652U)), (arr_13 [i_5] [i_0] [i_0] [i_0 - 2])))) ? (max((((/* implicit */unsigned int) ((signed char) arr_17 [i_6]))), (((var_14) ? (var_15) : (1544184329U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (var_2)))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)-69)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_17 [i_0 + 1]))))));
                        }
                    } 
                } 
                arr_22 [i_1] [12ULL] = ((/* implicit */unsigned int) arr_12 [i_0] [8ULL] [i_0] [i_0 + 2]);
            }
        } 
    } 
}
