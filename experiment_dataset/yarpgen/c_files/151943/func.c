/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151943
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
    var_13 = ((/* implicit */_Bool) max(((unsigned char)255), (var_1)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51302))) : (arr_0 [i_2])))));
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (min((((/* implicit */unsigned long long int) 260046848)), (arr_6 [i_0] [(unsigned short)7] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65512)) + (arr_3 [22ULL])))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (var_5) : (0U)))))) ? (min((arr_8 [i_1] [i_3] [i_4]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [10LL] [i_2] [(unsigned short)5])) / (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))))))));
                                arr_16 [i_0] [i_1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */unsigned short) arr_6 [i_4] [i_1] [i_1] [i_1]);
                                var_17 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_10 [i_0] [i_2] [i_2] [i_3])), (var_11))), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_10);
}
