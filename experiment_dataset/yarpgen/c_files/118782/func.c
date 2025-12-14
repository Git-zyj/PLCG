/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118782
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((max((((unsigned long long int) (unsigned char)88)), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_5))))))), (((((/* implicit */_Bool) arr_4 [(short)2] [i_1] [i_1] [i_2])) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_13 = -908877610;
                        var_14 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1]);
                        var_15 = ((/* implicit */short) var_2);
                        var_16 = ((/* implicit */unsigned char) min((var_16), (arr_1 [i_1] [i_2])));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2356207717610039761ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_2))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) * (15))), (-6))))));
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_7);
                    }
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) != (((/* implicit */int) var_9))))), (((411657627) << (((((/* implicit */int) (signed char)36)) - (36)))))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [19ULL] [i_1])) : (-411657628)))), (arr_10 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */signed char) (~(min((arr_3 [i_0] [i_0]), (arr_3 [i_2] [i_2])))));
                                arr_17 [i_0] [i_0] [i_2] [i_2] [18LL] [18LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -411657628)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 794044987083627368ULL)))))))) ? (((16090536356099511876ULL) << (((((/* implicit */int) (unsigned char)197)) - (145))))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) ((signed char) 0U))))) >= (((/* implicit */int) var_1)))))));
}
