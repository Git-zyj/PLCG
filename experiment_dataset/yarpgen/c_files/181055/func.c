/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181055
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
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
    var_12 += ((/* implicit */unsigned short) (~(max((max((var_7), (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((var_4) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((~(((/* implicit */int) var_10))))))) : (min((arr_3 [i_0]), (((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
        arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (((arr_3 [i_0]) << (((arr_1 [i_0] [i_0]) - (237411907U)))))));
        arr_6 [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0]))))))))));
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_1), (var_4))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (var_7) : ((+(var_2))))))));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) (((-(var_9))) > (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) ^ (((/* implicit */int) var_4)))))))) | (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) == (((/* implicit */int) arr_7 [i_1]))))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_7 [i_1])))) > (((/* implicit */int) ((_Bool) ((signed char) (unsigned char)7))))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    {
                        arr_21 [i_3] [i_3] [i_4] = ((/* implicit */signed char) var_1);
                        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) % (max((var_2), (((/* implicit */unsigned long long int) arr_17 [i_2] [i_3] [i_2] [i_5])))))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_5 + 1] [i_3]))))) ? (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_3] [i_4])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_5] [i_3] [i_5] [i_5]))))) : (min((arr_18 [i_5 + 1]), (arr_18 [i_4])))));
                        arr_22 [i_5] [i_3] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) max((max((var_3), (((/* implicit */signed char) var_1)))), (max((var_3), (((/* implicit */signed char) var_4)))))))));
                    }
                } 
            } 
            arr_23 [i_3] = ((/* implicit */unsigned long long int) (((~(arr_13 [i_2] [i_3]))) & ((-(arr_13 [i_2] [i_3])))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_2] [i_3] [i_6] [i_3]))) : (var_7))))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_19 ^= ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_6] [i_2] [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((signed char) max((arr_17 [i_2] [i_3] [i_6] [i_7]), (arr_27 [i_2] [i_3] [i_6] [i_6] [i_7])))))));
                    var_20 *= ((/* implicit */int) var_1);
                }
                arr_28 [i_2] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) max((var_5), ((short)20659)))), ((+(((/* implicit */int) (_Bool)1))))));
            }
        }
        arr_29 [i_2] [i_2] = ((((((/* implicit */_Bool) (-(var_9)))) || (((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_6)), (var_2))) > (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) < (((/* implicit */int) var_0))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])) > (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2]))))));
    }
}
