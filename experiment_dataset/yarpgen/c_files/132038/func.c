/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132038
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
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = ((/* implicit */_Bool) min((var_17), (((_Bool) ((_Bool) (~(-642386185)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) min((min((min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (min((arr_3 [i_0 + 3] [i_1]), (((/* implicit */unsigned long long int) arr_4 [8U] [i_1] [i_1 - 1] [i_0])))))), (((/* implicit */unsigned long long int) min((arr_1 [i_0 + 2] [i_0 + 3]), (arr_1 [i_0 + 2] [i_0 + 3]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0 + 3] [i_0] [i_1] [i_1] [i_2] [(unsigned char)10] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_10 [i_3] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [11LL] [i_2] [i_3]), (((/* implicit */short) (signed char)90)))))))), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (signed char)0))))))));
                                arr_12 [i_4] [6U] [i_2] [i_0] [i_0] = -418435593;
                                var_19 = (signed char)-91;
                                var_20 += ((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_21 = arr_7 [i_0] [i_0 + 1] [i_1 - 1] [i_1 + 1];
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((max((arr_8 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]), (((/* implicit */int) (signed char)-91)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_8 [(_Bool)1] [i_0] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_8 [11] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))))));
                }
            } 
        } 
        var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)0)), ((short)5326)))))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-104))))) / (var_15))));
        var_24 = ((/* implicit */short) (+(arr_5 [10U] [i_0 + 2] [i_0 + 2])));
        arr_13 [i_0 - 1] [i_0 + 1] |= ((/* implicit */unsigned short) (-(226661754U)));
        var_25 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1762232766U))));
    }
}
