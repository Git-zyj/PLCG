/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104808
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) < (arr_7 [i_3 + 2] [i_3 - 1]))) ? (((long long int) arr_6 [i_2] [i_3 - 1] [i_2])) : ((+(-350178371719897744LL)))));
                            var_15 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(arr_2 [i_3])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3] [i_1] [i_3 + 3] [i_3] [i_3 - 1] [i_1])) << (((((/* implicit */int) arr_9 [i_3 + 3] [i_1] [i_3 - 1] [i_3] [i_3 + 3] [i_3])) - (47962))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(arr_2 [i_3])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3] [i_1] [i_3 + 3] [i_3] [i_3 - 1] [i_1])) << (((((((/* implicit */int) arr_9 [i_3 + 3] [i_1] [i_3 - 1] [i_3] [i_3 + 3] [i_3])) - (47962))) - (8034)))))))));
                            arr_11 [i_3] [i_1] [i_2] [i_1] [3LL] = ((/* implicit */signed char) max((((/* implicit */long long int) max((1813929014), ((~(((/* implicit */int) arr_9 [i_3 + 3] [i_1] [i_2] [i_2] [i_1] [i_0]))))))), ((~((~(var_11)))))));
                            var_16 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65528)) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [i_2]))))))) && ((!((!(((/* implicit */_Bool) var_6))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) var_7);
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_5)))) : (((/* implicit */int) (_Bool)1))))) < (var_2)));
    var_19 = ((/* implicit */unsigned int) var_5);
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
