/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103671
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)7)))) | ((-(var_12))))), (((/* implicit */long long int) (+(((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */short) (unsigned char)249))))))))));
                    var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((signed char) 8656057744531612323LL))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)249)))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_20 [i_3] [i_4] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) arr_1 [i_3 - 1]);
                            var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) arr_17 [i_3 + 1])) : (((/* implicit */int) (unsigned char)6))))), ((~(((unsigned long long int) arr_0 [i_3]))))));
                            var_18 = ((/* implicit */short) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                            arr_21 [i_3] [i_6 - 1] = ((/* implicit */signed char) (short)12852);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) var_12);
                                arr_33 [i_3 + 1] [i_4] [i_3] [i_8] = ((/* implicit */int) (+(max((((/* implicit */long long int) arr_26 [i_3] [i_4])), (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_3] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)12852)))))))));
                                var_20 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_4] [0ULL])) : (((/* implicit */int) arr_14 [2LL] [i_7] [i_8]))))) && (((((/* implicit */_Bool) arr_22 [i_8])) && (((/* implicit */_Bool) (short)-17828))))))), ((~(((/* implicit */int) arr_17 [i_3 + 1]))))));
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((short)12852), (((/* implicit */short) (unsigned char)63))))), (17U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
