/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178095
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (~(112495067)));
                                arr_11 [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)-96);
                                var_19 = ((/* implicit */_Bool) (signed char)-118);
                                arr_12 [i_0] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_3] [i_3] [1LL] [i_4])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */long long int) arr_7 [13LL])))) : ((((_Bool)0) ? (((/* implicit */long long int) -1506850040)) : (3413889325390383441LL)))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [(unsigned char)4] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2]))))) && (((/* implicit */_Bool) (+(3756501501016383784LL)))))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (((16155023141446918002ULL) - (((/* implicit */unsigned long long int) -3031849561589822469LL))))))));
                }
            } 
        } 
    } 
    var_20 = max(((((!(((/* implicit */_Bool) 0U)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-2299606849352149469LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 112495077)) ? (((/* implicit */int) (unsigned char)166)) : (-1192545494)))))), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_17)), (var_7)))))));
}
