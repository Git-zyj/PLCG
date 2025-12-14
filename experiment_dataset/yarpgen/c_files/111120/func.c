/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111120
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
    var_15 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_0)))) > ((~(((/* implicit */int) (unsigned char)213))))))), ((~(min((var_5), (((/* implicit */unsigned long long int) -5803638426384120524LL))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_16 &= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) * (arr_10 [i_4] [i_1] [i_4] [i_2 - 2] [i_4])))));
                                var_17 &= ((/* implicit */unsigned char) ((((long long int) (_Bool)1)) ^ (min((-5803638426384120524LL), (((/* implicit */long long int) arr_3 [i_4 - 1] [i_4 + 1]))))));
                                var_18 -= min(((-(((/* implicit */int) var_7)))), ((-((+(((/* implicit */int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_12)) << (((arr_12 [i_0]) - (5857986014044071208ULL)))))))) ^ (min((min((((/* implicit */unsigned long long int) (short)17400)), (0ULL))), (min((((/* implicit */unsigned long long int) (unsigned short)44442)), (arr_12 [i_0])))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1]) | (min((var_4), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)240)))))))))))));
                    var_21 -= ((/* implicit */long long int) max((max(((-(((/* implicit */int) (unsigned short)3382)))), (((538921675) / (((/* implicit */int) (signed char)-93)))))), (-299924914)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_22 &= ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_10 [7ULL] [i_2 - 3] [i_5] [i_5] [i_6 + 1])))));
                                var_23 &= ((/* implicit */short) -1088345910);
                                var_24 |= var_9;
                                var_25 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_2 - 2] [i_2] [i_2] [i_2 - 1] [i_2] [i_6 - 2])), (((((/* implicit */_Bool) (unsigned short)3382)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2 + 2] [i_2 + 1] [i_5]))) : (-6297413630665208254LL)))))), (max((arr_10 [(_Bool)1] [i_1] [i_2] [i_5] [i_6]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_2] [i_6] [2]))))));
                                var_26 &= ((/* implicit */long long int) arr_2 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-10138)))), (max((-2117018868), (var_1)))))) & (var_4)))));
}
