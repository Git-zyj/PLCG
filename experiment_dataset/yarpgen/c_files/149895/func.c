/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149895
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
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-114)), (var_12)));
                            arr_10 [i_3] = ((((unsigned long long int) min((-730909654), (arr_7 [i_0])))) >> (((min((arr_7 [i_0 + 1]), (((arr_7 [i_0]) >> (((1582849567284464145ULL) - (1582849567284464141ULL))))))) - (77077073))));
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_7 [i_2 + 1]) : (arr_7 [i_2 - 2]))) << (((arr_1 [i_0 - 1] [i_0 + 3]) - (17261619854139041291ULL)))));
                            var_15 = ((/* implicit */int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) -730909654)) && (((/* implicit */_Bool) var_10))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_4] [i_5] [i_4] |= ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */long long int) arr_3 [i_6] [i_0] [i_0])), (((long long int) 730909653)))));
                                var_16 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)60745)), (730909642)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((long long int) -730909654)) > (((/* implicit */long long int) -730909654))))) >> (((1582849567284464125ULL) - (1582849567284464125ULL)))));
}
