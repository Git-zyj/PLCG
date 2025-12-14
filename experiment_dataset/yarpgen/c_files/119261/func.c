/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119261
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_10 = ((/* implicit */short) min((var_7), (((/* implicit */int) (short)-350))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */short) (~(((/* implicit */int) (short)-350))));
                        var_12 = ((((/* implicit */_Bool) 8727242976905121660LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6))))))) : (((((/* implicit */int) var_8)) | (((/* implicit */int) arr_2 [i_0])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (short)2621))))), (((var_6) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))))));
                            var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)62934)) ? (((/* implicit */int) (unsigned short)46539)) : (((/* implicit */int) (unsigned char)118))));
                        }
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_15 = var_4;
                            var_16 = ((/* implicit */int) var_1);
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_18 [i_6] [i_3] [i_2] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) < (((/* implicit */int) ((short) arr_1 [i_0])))))));
                            arr_19 [i_3] [i_6] [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) -6289083436478743516LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-26169)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_6]))))));
                            var_17 = ((/* implicit */unsigned char) var_8);
                            var_18 = ((/* implicit */short) arr_14 [i_3]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_8 [i_7] [i_3] [(unsigned char)19] [i_1] [i_0]))) ? (((/* implicit */int) (short)-26169)) : (((/* implicit */int) ((short) arr_21 [(short)20] [i_1] [i_1] [i_3] [(unsigned char)1])))))) | (((((4630754650464740092LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-15148))))) % (((/* implicit */long long int) ((/* implicit */int) (short)26173)))))));
                            var_19 *= ((((/* implicit */_Bool) (~(((int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62934))) / (var_6)))) || (((/* implicit */_Bool) -1728274754602924635LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_2] [i_3] [i_7])) || (((/* implicit */_Bool) arr_3 [i_1]))))));
                        }
                    }
                } 
            } 
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) (unsigned short)2601);
    }
    var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) == (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (var_7))) >= (((((/* implicit */int) var_0)) << (((926808068) - (926808059))))))))));
}
