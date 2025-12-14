/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145465
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
    var_17 *= ((/* implicit */unsigned char) (-(var_5)));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 2])) ? (((/* implicit */int) arr_10 [i_0 - 1])) : (((/* implicit */int) (signed char)33))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_3] [i_2]) : (((/* implicit */int) (signed char)25))))) <= (min((((/* implicit */unsigned int) var_10)), (var_12))))))) : (var_6)));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_12 [i_2] [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2]))) * (((/* implicit */int) arr_4 [i_4 - 2] [i_0]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((arr_4 [9U] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) < (var_15))))));
                    var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_9 [i_0] [i_0]) : (((/* implicit */int) (signed char)33)))));
                    var_21 = ((/* implicit */long long int) arr_5 [i_0 + 1]);
                    var_22 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 13888177647764840445ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_2])))))) >= (((/* implicit */int) ((_Bool) var_3)))));
                }
            } 
        } 
        var_23 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (arr_9 [i_0 + 1] [8U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_0 + 1] [i_0] [20LL] [i_0])))) : ((+(var_7))))) < (arr_11 [i_0] [i_0] [i_0] [i_0])));
        arr_16 [i_0] [4] |= var_6;
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) 3261507024U)) || ((_Bool)0)));
            arr_19 [6U] [i_5] [i_0] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1])))), (((/* implicit */int) ((unsigned short) -889651591699611360LL))))), (((/* implicit */int) max((((var_14) >= (var_15))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (10485688142092275962ULL))))))));
        }
        for (short i_6 = 4; i_6 < 20; i_6 += 2) 
        {
            arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)0))) : (min((var_6), (((/* implicit */unsigned long long int) -4382381179357984371LL))))))) ? (((int) arr_4 [i_0 + 1] [i_0])) : (((/* implicit */int) var_3))));
            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0 - 3])))) - (((arr_8 [i_0] [i_0 + 1] [i_6] [(unsigned char)12]) + (var_6)))));
        }
    }
}
