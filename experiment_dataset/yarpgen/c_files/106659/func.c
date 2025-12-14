/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106659
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
    var_16 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) min(((((_Bool)0) ? (7983907000309731909LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_12)))))));
                                var_18 = (short)28299;
                            }
                        } 
                    } 
                } 
                var_19 ^= ((/* implicit */_Bool) (short)(-32767 - 1));
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    for (int i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                            arr_19 [i_1] [i_1] [4] [i_6] [(signed char)10] [i_6] = ((/* implicit */_Bool) var_11);
                            var_21 = ((/* implicit */_Bool) (unsigned char)194);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_27 [i_8] [i_8] [i_8] [i_8] [i_1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) -974278501)) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (signed char)-25))))));
                                var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(-2051024404)))) ? (((/* implicit */int) var_1)) : ((~(var_4)))))));
                                var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -6243616713872371123LL)) ? (((/* implicit */int) var_9)) : (var_4))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
