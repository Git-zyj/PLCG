/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162847
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
    var_11 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0))))) < (((max((var_2), (((/* implicit */unsigned long long int) (short)-21517)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)150)))))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((5511592060289475727ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42)))))));
    var_13 = ((/* implicit */short) min((var_13), (((short) ((((/* implicit */int) max((var_4), (var_1)))) * (((((/* implicit */int) (unsigned char)8)) / (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) & (1511428364U)))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_1 [i_0 - 1]))));
                arr_6 [i_0] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned char) (signed char)9)))))) >= (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (arr_0 [i_0 + 3] [i_1])))), (var_7)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-22)) != (((((/* implicit */int) (short)21510)) ^ (((/* implicit */int) (signed char)-14)))))))) != ((~(((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_0])))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_7 [11U] [i_2] [i_2]))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (signed char)-14)) ? (arr_10 [(short)10] [i_1] [i_0] [(short)6] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1] [i_1 - 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [11U])))))))));
            }
        } 
    } 
}
