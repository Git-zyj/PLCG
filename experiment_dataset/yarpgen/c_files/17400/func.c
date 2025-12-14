/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17400
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
    var_10 = ((/* implicit */short) max((((unsigned long long int) 6725724124025474666LL)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -2147483647)), (((unsigned int) 9223372036854775803LL)))))));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((unsigned char) -4388650095283030892LL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)101));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((short) arr_4 [i_0] [i_1]));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_14 = arr_7 [i_3] [i_2] [i_1] [i_0];
                    }
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) min((((unsigned short) (short)-4308)), (((/* implicit */unsigned short) (unsigned char)6))));
                        arr_14 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)32522)), (-3863013654338039610LL)));
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((min((arr_15 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_1] [i_0] [i_5]))))), (min((max((arr_15 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_5] [i_1] [i_5] [i_5])))), (((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_2])))))));
                        arr_17 [i_0] [i_0] = min((min((((/* implicit */long long int) ((unsigned short) arr_2 [i_1]))), (max((((/* implicit */long long int) (_Bool)0)), (200092881603122653LL))))), (((/* implicit */long long int) arr_3 [i_0])));
                        var_16 *= ((/* implicit */unsigned long long int) ((int) min((min((arr_3 [i_2]), (((/* implicit */unsigned short) arr_6 [i_5] [i_2] [i_0])))), (((/* implicit */unsigned short) arr_6 [i_1] [i_2] [i_5])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) max((5098154118733038314LL), (-5731726536273603504LL))))), (((unsigned long long int) ((int) arr_0 [i_2])))));
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_1 [i_2]), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]))))), (max((min((arr_4 [i_0] [i_0]), (((/* implicit */int) arr_11 [i_0] [i_5])))), (((/* implicit */int) min((((/* implicit */short) (signed char)-15)), ((short)0))))))));
                            arr_20 [i_0] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max(((unsigned short)44848), (((/* implicit */unsigned short) (unsigned char)253))))), (arr_0 [i_1])))), (min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_15 [i_0] [i_6] [i_2]))), (min((8498251672980966055ULL), (((/* implicit */unsigned long long int) 1554136979940095901LL))))))));
                            var_19 = ((/* implicit */int) min((max((arr_9 [i_2] [i_6]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2147483636)), (4388650095283030891LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_18 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6]), (arr_18 [i_0] [i_0] [i_6] [i_5] [i_0] [i_0] [i_1])))), (((unsigned int) arr_12 [i_6] [i_5] [i_1] [i_1] [i_0])))))));
                            var_20 += ((/* implicit */unsigned long long int) min((arr_2 [i_0]), (arr_2 [i_0])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            var_21 = min((((/* implicit */long long int) ((int) ((unsigned short) arr_1 [i_7])))), (arr_5 [i_5]));
                            var_22 = ((/* implicit */short) arr_2 [i_7]);
                        }
                    }
                    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)61556));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((((unsigned long long int) (short)0)), (((/* implicit */unsigned long long int) var_4))));
}
