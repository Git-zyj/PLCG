/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121879
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
    var_16 = ((/* implicit */unsigned short) ((((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_7)), (var_14))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (arr_4 [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_2] [i_2 + 1])))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2 - 1])) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_3])) < (arr_11 [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 3] [i_3] [i_3 + 1] [i_3 + 1] [i_2 - 1])) : ((-(((/* implicit */int) (short)28828))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((_Bool) ((int) (short)26244));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) 5892604989352606056LL);
        var_21 = ((/* implicit */long long int) (unsigned char)0);
    }
}
