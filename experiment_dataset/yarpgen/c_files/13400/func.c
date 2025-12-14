/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13400
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
    var_11 = ((/* implicit */long long int) ((((max((var_3), (((/* implicit */unsigned int) var_4)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3278181810U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)-256))))))))));
    var_12 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((((((/* implicit */int) arr_3 [i_1 - 2])) % (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((min((((/* implicit */long long int) (short)-256)), (arr_0 [i_1] [i_3]))) > (((/* implicit */long long int) ((((/* implicit */int) (short)255)) | (((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))))))))));
                                arr_14 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_13 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3]), (arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 3] [i_3 - 1] [i_3 - 3]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */short) ((arr_0 [i_5 + 1] [i_5 + 1]) < (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (short)259)) <= (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_0] [i_2]))))), ((~(((/* implicit */int) (short)32745)))))))));
                        arr_17 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 1016785481U)), (6644023522426339749LL)));
                        var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_12 [i_0] [4U] [i_2] [i_5 + 2] [(short)10])))))) + (max((arr_1 [i_5 + 2]), (((arr_2 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 3] [i_0] [i_5])))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        for (long long int i_7 = 2; i_7 < 10; i_7 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((arr_0 [i_6] [i_6]) >= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [i_7 + 3] [i_7] [i_7 + 3])))))), ((~(arr_2 [i_6]))))), (((/* implicit */long long int) min((arr_7 [i_6] [i_7] [(short)2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_7]))))))))));
                var_17 = 2371511206U;
                var_18 = ((/* implicit */short) (+(3278181814U)));
                arr_25 [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 2377660110U)), (arr_2 [i_6 - 1]))))))), (((((/* implicit */int) arr_5 [i_6])) - (((/* implicit */int) arr_15 [i_7] [i_6 + 1] [i_7] [i_7]))))));
            }
        } 
    } 
}
