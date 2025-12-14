/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164547
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
    var_10 *= ((/* implicit */unsigned int) var_9);
    var_11 *= ((/* implicit */signed char) (-((~((~(var_4)))))));
    var_12 = ((/* implicit */short) ((var_7) / (((((/* implicit */_Bool) min((var_5), ((signed char)-115)))) ? (8191) : (((/* implicit */int) min((var_6), (var_5))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 6; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) var_7)))), (max((((1308708902679790112ULL) < (1308708902679790101ULL))), (((((/* implicit */_Bool) 4077160063913252259ULL)) && (((/* implicit */_Bool) (unsigned char)238))))))));
                                arr_13 [i_0] [(signed char)6] = ((/* implicit */int) max(((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 444618610)))), (((/* implicit */unsigned long long int) (~(444618610))))));
                                var_13 = ((/* implicit */short) max((((unsigned char) (+(((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_1] [6U])))), ((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [8ULL])))))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1660452055))))) * (((((/* implicit */_Bool) 1660452055)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) ((unsigned short) arr_7 [i_4 + 2] [i_2] [i_2] [i_3])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_3 [i_0]);
                }
            } 
        } 
    } 
}
