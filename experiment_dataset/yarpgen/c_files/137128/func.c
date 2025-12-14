/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137128
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((int) 341355601))) != (var_4))))) <= (((((/* implicit */_Bool) 1767394183)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (7981414971508281723LL))))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (759718193U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))))))));
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */short) (((+(var_3))) != (var_3)))), (min((var_7), (var_9)))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) var_7)) : (max((var_3), (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((var_2), (arr_2 [i_0] [i_0])))), (max((40537056U), (((/* implicit */unsigned int) (short)2048))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) var_10);
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_19 [i_4] [i_3] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) 341355601)) : (1998844535U)))));
                        var_15 = ((/* implicit */int) arr_7 [i_4]);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_16 ^= ((/* implicit */long long int) ((int) max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_1)))));
                            var_17 = var_7;
                            arr_23 [i_1] [i_2] [(unsigned short)6] [i_4] [(unsigned short)6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (var_4))))) % (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)25874))))), ((~(var_4)))))));
                        }
                        for (signed char i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((((/* implicit */_Bool) arr_14 [(unsigned short)9] [i_3 + 1] [i_3 - 1])) ? (arr_5 [i_1] [i_3 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)25874))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_2)), (var_10)))) ? (((((/* implicit */int) arr_3 [i_1] [i_1])) + (341355601))) : ((+(((/* implicit */int) var_9)))))))));
                            var_19 -= ((/* implicit */unsigned char) var_0);
                            var_20 = ((/* implicit */unsigned short) var_0);
                        }
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned char) ((signed char) max((((/* implicit */unsigned short) (unsigned char)169)), (arr_3 [i_3 - 1] [i_2]))))))));
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_22 [i_1] [i_2] [5U] [i_4] [i_7]), (((/* implicit */short) var_0)))))))) ? (((unsigned int) ((755316739U) >= (((/* implicit */unsigned int) 12))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_28 [i_1] [i_1] [(unsigned char)7] [0])))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_3 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (arr_13 [i_3 + 1] [i_3] [i_3 - 1])))))))));
                            var_24 = ((/* implicit */signed char) arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2] [i_2] [6U]);
                        }
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) var_7);
    var_26 = ((/* implicit */signed char) ((unsigned int) ((unsigned short) (-(((/* implicit */int) var_5))))));
}
