/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13296
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
    var_14 &= ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((((!((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : ((-(var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) (!((_Bool)1))))));
                var_15 += ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_11)))) < (((/* implicit */int) ((_Bool) var_10))))) ? (3063097317U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_1] [i_2] [i_3])), (1450763542))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_0]))))));
                            var_16 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))));
                            var_17 = ((/* implicit */unsigned char) arr_0 [i_2] [i_2]);
                            var_18 += ((/* implicit */unsigned int) min((min((((/* implicit */int) (!((_Bool)1)))), (min((var_13), (((/* implicit */int) var_3)))))), (((/* implicit */int) max(((unsigned short)19969), (((/* implicit */unsigned short) arr_4 [i_0] [i_3] [i_2])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19981)) << (((((/* implicit */int) arr_13 [i_4])) - (40871)))))), (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1])))));
                            var_20 = ((/* implicit */unsigned short) arr_7 [i_5] [i_5]);
                            arr_17 [i_5] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) ((arr_3 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((1484138555196013336LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_5]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
