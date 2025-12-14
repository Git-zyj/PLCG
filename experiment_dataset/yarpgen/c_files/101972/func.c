/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101972
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
    var_12 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((min((((/* implicit */int) ((unsigned char) var_7))), ((~(((/* implicit */int) (short)2633)))))), ((-((~(var_0)))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_4 [(signed char)9]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_18 [i_1] [i_2] = ((/* implicit */short) (+(max((((/* implicit */long long int) max((((/* implicit */int) (signed char)63)), ((-2147483647 - 1))))), (max((-5807545669994409229LL), (var_9)))))));
                                arr_19 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)29856), (((/* implicit */unsigned short) max(((short)2633), (((/* implicit */short) (_Bool)0)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_6])), (var_10)))) ? (max((16217147U), (((/* implicit */unsigned int) arr_14 [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)2633)) ^ (((/* implicit */int) arr_14 [i_1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 4; i_7 < 8; i_7 += 2) 
                    {
                        for (int i_8 = 2; i_8 < 8; i_8 += 1) 
                        {
                            {
                                arr_27 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_7 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 1])) != (((/* implicit */int) (_Bool)1))))), (((long long int) ((arr_3 [i_7 - 2]) ? (1404738091224982661LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                                arr_28 [i_0] [i_1] [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551610ULL))))), ((-(((1404738091224982661LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_10)))));
    var_15 = ((/* implicit */int) var_8);
}
