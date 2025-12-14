/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121790
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
    var_13 = 0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_14 &= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [0LL])) ? (((/* implicit */int) (unsigned char)1)) : (0)))) ? (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))) : (arr_10 [i_0] [i_0] [i_0] [i_0]))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((((/* implicit */int) (unsigned char)18)) != (((/* implicit */int) (unsigned char)252)))), ((!(((/* implicit */_Bool) -1754257570697630807LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0 - 1] [i_1])), (-1)))))))));
                        }
                    } 
                } 
                var_16 += ((/* implicit */signed char) (~(0)));
                var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) var_7)))))), ((!((!(((/* implicit */_Bool) 16))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_18 *= ((((/* implicit */long long int) 24)) / (max((((/* implicit */long long int) (unsigned short)317)), (max((((/* implicit */long long int) (unsigned short)324)), (-2177793302039262494LL))))));
                            var_19 = ((/* implicit */int) arr_15 [(unsigned char)0] [i_4] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)20156)) ^ (-1))) | (((/* implicit */int) var_6))));
}
