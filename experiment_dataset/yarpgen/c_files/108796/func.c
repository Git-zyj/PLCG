/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108796
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
    var_16 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */long long int) min((1277618297U), (2130291150U)))) : (((long long int) (unsigned short)22841))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22861))) % (var_3))), (((/* implicit */long long int) ((arr_5 [i_0] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42687)))))))));
                            var_18 = ((/* implicit */short) arr_1 [i_0]);
                            var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22850)) | (((/* implicit */int) (unsigned short)22844))))), (4294967295U)));
                            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) max((var_1), (((/* implicit */int) arr_3 [i_0] [i_0])))))) % (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3])))))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) var_6);
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42710)) && (((/* implicit */_Bool) 9223372036854775807LL))));
                arr_14 [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) max((((arr_10 [i_0 - 1] [i_0] [i_1]) - (arr_5 [i_0 + 2] [i_1]))), (((/* implicit */unsigned int) (unsigned short)42710))))) : (((((((/* implicit */_Bool) (unsigned short)42704)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0])))) ? (max((arr_7 [i_0]), (arr_1 [i_0]))) : (7599594996505879863LL)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_21 = var_7;
                            var_22 = max((((/* implicit */long long int) (signed char)(-127 - 1))), (arr_7 [i_0 - 1]));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (max((((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_0])) ? (arr_8 [i_0] [i_1] [(unsigned short)14] [(unsigned short)14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22847))))), (min((arr_4 [i_4] [i_5]), (arr_1 [i_0]))))) : (((/* implicit */long long int) var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
}
