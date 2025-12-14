/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176187
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), ((+(1134907106097364992ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] [i_2] = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) -631316075)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(arr_8 [i_0] [i_1] [i_0])))) : (((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_3 + 2] [i_4] [i_4] [i_4] [i_4])))));
                                arr_18 [i_4] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(min((arr_3 [i_2 + 1]), (arr_3 [i_2 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_21 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6])))) ? (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */long long int) var_6)) : (((var_2) / (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_6))))))))));
                            var_16 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 16383)))) % (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48256)) ? (5934134489121639644LL) : (var_2)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0])))) : (((arr_14 [i_6] [i_5] [i_0] [i_0]) ? (arr_0 [i_5]) : (((/* implicit */int) var_0)))))))));
                            arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_8 [i_6] [i_0] [i_0]))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) max((var_4), (((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) 5934134489121639644LL)) ? (min((((/* implicit */long long int) var_7)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13)))))) : (((/* implicit */long long int) (+(var_9))))));
    var_18 = min((var_6), (((/* implicit */int) var_0)));
}
