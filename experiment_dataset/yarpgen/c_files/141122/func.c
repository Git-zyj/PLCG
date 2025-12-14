/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141122
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) -1LL))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) arr_5 [i_3])), (((/* implicit */long long int) (short)-31444))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23283)) ? (arr_2 [i_1 - 2] [6U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27)))))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_15))))))), (((unsigned short) (!(var_8))))));
    var_21 = (~(((/* implicit */int) (!(((/* implicit */_Bool) max((6446965772802257891LL), (((/* implicit */long long int) (short)23283)))))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 4; i_5 < 10; i_5 += 3) 
        {
            {
                arr_20 [i_4] = ((/* implicit */unsigned int) arr_14 [i_4] [i_4]);
                var_22 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_5] [i_5])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [12U])) ? (((/* implicit */int) (short)-31463)) : (((/* implicit */int) arr_13 [(short)10] [0LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_5] [i_5])) && (((/* implicit */_Bool) var_9)))))) : (arr_9 [(unsigned short)2])))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_27 [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) min((arr_18 [i_4] [i_6] [i_6]), (((/* implicit */short) arr_7 [i_4] [i_5] [i_6])))))))));
                            var_23 *= ((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4]);
                            arr_28 [i_4] = (i_4 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_7 + 1] [i_7 + 1] [i_5 + 2] [i_4])) > (((/* implicit */int) (unsigned char)81))))) << (((((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_4 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (3210031138U)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_7 + 1] [i_7 + 1] [i_5 + 2] [i_4])) > (((/* implicit */int) (unsigned char)81))))) << (((((((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_4 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (3210031138U))) - (2408189437U))))));
                            var_24 = ((/* implicit */long long int) arr_18 [i_6] [i_4] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
