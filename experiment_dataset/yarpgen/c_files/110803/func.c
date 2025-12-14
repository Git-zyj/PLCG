/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110803
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
    var_12 = ((/* implicit */unsigned short) (unsigned char)1);
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2665700273300486301ULL) << (((((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)118)))) + (30288)))))) && (((/* implicit */_Bool) 5512270731162832305LL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */signed char) (~(var_1)));
                            var_15 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (short)-26137)) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 - 1])))));
                            arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)118)) ? (arr_6 [i_0] [i_1] [i_2] [i_3 - 1]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_6))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_1 - 1])))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)147)), (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (_Bool)1)) : (max((var_6), (((/* implicit */int) (signed char)-125))))))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)120)), (1348985471U)));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-118)) + (((/* implicit */int) (short)16)))) % (arr_10 [i_6 + 1] [i_5] [i_4] [i_1])))) ? (max((min((((/* implicit */unsigned long long int) (short)16)), (var_0))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1457132487)) ? (2945981829U) : (((/* implicit */unsigned int) var_6)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) 2331906072U)))))), (((/* implicit */unsigned long long int) var_6))));
}
