/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158166
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_1] [i_0] [i_2 - 1]) : (arr_5 [i_0] [i_0] [i_1] [i_2 + 2]))) / (((((/* implicit */_Bool) var_13)) ? (arr_5 [i_2] [i_2 + 2] [i_2 + 1] [i_0]) : (arr_5 [i_2] [6U] [i_2 + 1] [8LL])))));
                    var_14 -= ((/* implicit */unsigned short) min((((long long int) (~(var_4)))), (((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) ((short) min((((/* implicit */long long int) arr_0 [i_1])), (var_1))));
                        var_16 *= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [(_Bool)1]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)4064))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_0] [i_0]))) / (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_9 [2] [i_1] [2] [i_4])))))))))));
                        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 288230376151703552LL)) && (((/* implicit */_Bool) (unsigned short)50276)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_2 + 2] [i_2]))))) : (var_12)));
                    }
                    arr_14 [i_1] [5] [i_1] = ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned char)10] [i_0] [(short)6])) && (((/* implicit */_Bool) var_13)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) -288230376151703553LL);
}
