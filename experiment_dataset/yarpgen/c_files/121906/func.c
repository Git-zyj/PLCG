/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121906
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) 2209485683776923026LL);
                var_16 = ((/* implicit */long long int) ((((((/* implicit */int) min(((short)1), (arr_1 [i_1])))) <= (((/* implicit */int) arr_5 [i_0])))) ? (((/* implicit */int) ((((((/* implicit */int) (short)17265)) & (((/* implicit */int) arr_1 [i_0])))) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_12) != (((/* implicit */int) var_1))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_4 [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1691704792)) ? (((/* implicit */int) var_13)) : (var_0)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_3 [i_2] [i_4])))))), (((((/* implicit */_Bool) max(((short)-5318), (((/* implicit */short) (_Bool)0))))) ? (max((-1691704772), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max(((short)4149), (((/* implicit */short) arr_11 [(unsigned char)17]))))))))))));
                    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_16 [i_2] [i_3 + 1] [i_4]), (((/* implicit */int) (_Bool)1)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_2] [i_3 + 1])) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_13))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)133))))) ? (((/* implicit */int) arr_12 [i_2] [i_3 + 1] [i_4])) : ((-(((/* implicit */int) arr_12 [i_2] [i_3 - 1] [i_4]))))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */int) var_6)) >= (((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_4))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_10)) | (((/* implicit */int) var_14)))))));
}
