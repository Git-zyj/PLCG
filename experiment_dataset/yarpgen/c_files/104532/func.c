/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104532
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) / (var_10)))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_2 + 1]);
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) != (min(((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))), (((/* implicit */long long int) 689414779))))));
                            arr_15 [14LL] [i_0] [(short)14] = ((/* implicit */short) ((((/* implicit */_Bool) 1394599565)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)2))));
                            var_13 = ((short) arr_1 [i_0 + 2]);
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)50))))), (8110468047315183396ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)8)), (max((((/* implicit */int) arr_4 [i_0])), (var_1)))))) : ((~(arr_0 [i_0])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1394599565)) && ((_Bool)1)));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (min((((/* implicit */int) (unsigned char)98)), (var_2)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 23; i_4 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_16 [i_4 - 3] [i_4 + 1])))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)250))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_18 [i_4] [i_4])) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_18 [i_4] [i_4 + 1]))))));
    }
}
