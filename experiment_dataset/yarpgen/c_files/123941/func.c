/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123941
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((10268327714239958984ULL) >> (((var_0) - (1456704118))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (var_9))))) : (var_2)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) var_3);
                            var_16 = ((/* implicit */_Bool) (~(((unsigned long long int) 250857109))));
                            var_17 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_2 - 1])) ^ (10268327714239958988ULL)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4))) <= (8500787827329176973ULL)))))));
                arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-12555)) | (((/* implicit */int) ((16172122633759505485ULL) >= (arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            {
                arr_16 [10] [i_5] [i_4] = (-(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_4 + 2] [i_4]))) != (arr_13 [i_4])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12555))))))));
                var_19 = ((/* implicit */int) min((((/* implicit */short) arr_11 [i_4] [(short)14])), (((short) arr_15 [i_4]))));
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_14 [19] [i_7] [i_8]))));
                                arr_25 [i_4] [11] [7] = ((/* implicit */short) ((int) (!((!(((/* implicit */_Bool) var_3)))))));
                            }
                        } 
                    } 
                } 
                var_21 -= ((/* implicit */short) max((((((/* implicit */unsigned int) arr_15 [i_4 + 2])) / (min((arr_13 [10ULL]), (((/* implicit */unsigned int) arr_19 [i_5])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [23LL])))))));
            }
        } 
    } 
}
