/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134426
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
    var_17 = min((max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))), (((/* implicit */long long int) var_10)));
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_19 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)-102))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) + (arr_1 [i_0])))) ? (((((/* implicit */long long int) var_2)) / (var_13))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)7))))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                                arr_16 [i_0] [(_Bool)1] [i_1] [3ULL] [i_1] [i_3] [(short)18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) var_13)))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 162523281)) ? (arr_8 [i_1] [10U] [10U]) : (arr_8 [i_1] [i_0] [i_1 + 1])))));
                    var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) && (((((/* implicit */int) arr_10 [i_1 - 1] [i_1] [(unsigned char)16] [i_0] [i_1])) > (((/* implicit */int) arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0] [i_1]))))));
                }
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((arr_13 [i_0] [i_0] [16LL] [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [12LL] [i_0]))))));
        arr_18 [i_0] &= ((/* implicit */long long int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((-(((/* implicit */int) var_1)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)10] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
}
