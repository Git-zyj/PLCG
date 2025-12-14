/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107823
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
    var_11 = ((/* implicit */unsigned long long int) min(((-(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (short)14815)) % (((/* implicit */int) (signed char)-41)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)9)), (var_8)))))))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-19825)) & (((/* implicit */int) (signed char)34)))) ^ (((/* implicit */int) (short)10851))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((arr_0 [8U] [8U]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))), (max((0ULL), (((/* implicit */unsigned long long int) var_7)))))) + (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-19825))))))))))));
                var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (short)14815))))) ? (max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [3U]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_1]) <= (arr_1 [i_0] [i_1])))))));
                var_16 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2128129819U)) ? (min((((/* implicit */unsigned int) (short)10851)), (var_0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (arr_0 [i_0] [i_0])))))), (((var_7) & (((/* implicit */long long int) arr_1 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2359138275U))))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17193553157509337320ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1]))) : (arr_1 [i_2] [i_1])))) || (((/* implicit */_Bool) var_6)))))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) 5357502833280927201LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (var_8)));
}
