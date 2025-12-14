/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17522
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_9))))) / (9602458181794920765ULL)));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (-7094120896664695374LL) : (((/* implicit */long long int) ((/* implicit */int) ((-7094120896664695374LL) <= (7094120896664695378LL))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                            arr_10 [i_3 - 2] [i_3 + 2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 2151343374U)) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_2] [i_1] [i_0])) : (max((var_6), (((/* implicit */int) (_Bool)1)))))) << (min((var_12), (((/* implicit */unsigned int) (_Bool)1))))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 + 2] [i_1]))) * (((((/* implicit */long long int) arr_2 [i_0] [i_0])) / (2459127959685694354LL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((short) arr_3 [i_6 - 1] [i_6 + 1])))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_6 + 1])) || ((!(((/* implicit */_Bool) ((unsigned char) 16383U)))))));
                            }
                            for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                            {
                                var_18 -= ((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_7 - 1] [i_5] [i_5] [i_7 - 2]) && (max((arr_8 [i_4] [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 2]), (arr_8 [i_0] [i_1] [i_4] [i_5] [i_7 + 1])))));
                                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                                arr_22 [i_4] = ((/* implicit */_Bool) (unsigned char)243);
                            }
                            arr_23 [i_4] [i_5] [i_4] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned short) (~((-(((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_9] [i_8])))))))));
                            var_22 = ((/* implicit */long long int) ((unsigned short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_28 [i_8])) ? (2111062325329920ULL) : (2111062325329920ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))) | (((/* implicit */unsigned long long int) ((((long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) << (((((/* implicit */_Bool) arr_25 [i_9] [i_8] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1]))))))))))));
                            var_24 &= ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_8])) > (var_12)))), (((((/* implicit */unsigned long long int) var_10)) + (var_4))))) >> (((((/* implicit */int) ((short) arr_0 [i_0] [i_1]))) - (3133))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((_Bool) min((((unsigned int) 7094120896664695374LL)), ((((_Bool)0) ? (var_12) : (3044290932U))))));
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned int) var_2)))));
}
