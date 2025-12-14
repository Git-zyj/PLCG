/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161822
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
    var_11 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)172))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) 186307333U);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [3ULL] [i_1] [3ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (186307333U) : (arr_2 [i_0] [i_1 + 1] [i_0]));
                            var_12 -= ((/* implicit */short) (+(((/* implicit */int) max((arr_1 [i_0] [i_1 - 1]), (arr_0 [i_2]))))));
                            arr_11 [(short)7] [(short)7] [(short)7] [4] = ((/* implicit */int) arr_0 [i_2]);
                            var_13 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) == (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (arr_4 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (_Bool)1))));
                            var_15 = ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (unsigned char)137))))) << (((((/* implicit */int) (short)-28845)) + (28854))));
                            arr_18 [i_0] [(unsigned short)3] [(short)12] [(unsigned short)3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_8)))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_1]))))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_20 [i_1] [i_1 + 1] [i_1 + 1] = (_Bool)0;
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (9797129U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) max((((/* implicit */short) var_8)), (var_5)))) : (var_9)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
}
