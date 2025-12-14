/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146665
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
    var_12 *= ((/* implicit */_Bool) var_8);
    var_13 -= ((((/* implicit */int) (unsigned short)26935)) * (((/* implicit */int) (_Bool)1)));
    var_14 = var_8;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [(_Bool)1] [i_0] = arr_2 [i_0];
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = arr_6 [(short)1] [i_0] [i_0] [i_2];
                    arr_9 [i_2] &= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) min(((short)-8915), (((/* implicit */short) arr_7 [i_0] [4LL] [i_0])))))) / (-2236610110362245339LL))) % (max((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (arr_8 [i_2])))), (var_10)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) 1759361319153943777LL)) : (6292483378146622947ULL)));
                                var_16 -= ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_17 += ((/* implicit */signed char) ((((((/* implicit */int) var_5)) | (((/* implicit */int) min((arr_8 [i_1]), (((/* implicit */short) arr_11 [i_0] [i_1]))))))) + ((-(arr_13 [i_0] [i_1] [i_1] [i_1] [i_2])))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */int) min((((/* implicit */long long int) (((-(14091650043786220125ULL))) >= (((3837358834647926266ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))), (max((((/* implicit */long long int) ((3727593897U) << (((var_4) - (6563471291458761732LL)))))), (var_10)))));
}
