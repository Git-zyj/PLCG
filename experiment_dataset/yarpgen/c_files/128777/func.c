/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128777
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
    var_17 |= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_2 [i_1])))) == (((((/* implicit */_Bool) (unsigned char)241)) ? (((((/* implicit */int) (_Bool)0)) + (936750718))) : ((-(((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_0]))))))));
                                var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (var_10) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)241)), ((short)4852)))) : (((/* implicit */int) (_Bool)1))))));
                                arr_14 [i_4] [i_0] [i_2] [(signed char)1] [i_0] [i_0] = ((/* implicit */int) max(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)0))));
                                arr_15 [15ULL] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((-228211287), (((/* implicit */int) (_Bool)0))))) && ((_Bool)1)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) ((min((arr_6 [i_1]), (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */int) (unsigned char)248)) << (((/* implicit */int) (_Bool)1))))));
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)-19803)), (((arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) ? (max((arr_3 [4LL]), (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))));
            }
        } 
    } 
}
