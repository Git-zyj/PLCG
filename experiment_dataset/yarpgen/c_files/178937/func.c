/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178937
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
    var_18 |= (~(((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */short) var_9)))))) : (min((2621057447924888818ULL), (var_11))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 &= min((((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_1])))) : ((~(11042832697409589327ULL))))), (((/* implicit */unsigned long long int) (unsigned char)12)));
                            var_20 = ((/* implicit */unsigned long long int) (+(var_10)));
                            var_21 = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_3 [i_0] [i_2]))), (((/* implicit */unsigned long long int) ((arr_5 [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15825686625784662798ULL))), ((+(arr_8 [i_0] [i_1] [i_0] [7LL] [i_1]))))));
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */signed char) ((arr_7 [i_2 - 1] [i_2 - 1] [i_1]) > (((/* implicit */unsigned long long int) (((_Bool)1) ? (((arr_4 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))))))));
                        }
                    } 
                } 
                arr_11 [0] [0] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-82)) ? (var_2) : (((/* implicit */int) ((arr_8 [8ULL] [i_1] [i_0] [i_0] [8ULL]) <= (15825686625784662798ULL)))))) ^ (-1)));
                var_22 = ((/* implicit */long long int) ((var_5) ? ((-(((arr_3 [i_1] [i_0]) + (var_3))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */short) var_9))))))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (min((arr_4 [i_0]), (arr_4 [i_1])))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((15825686625784662808ULL), (((/* implicit */unsigned long long int) (signed char)-82)))))));
            }
        } 
    } 
    var_25 = var_16;
    var_26 |= ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_6)) : ((+(1946148555))))))));
}
