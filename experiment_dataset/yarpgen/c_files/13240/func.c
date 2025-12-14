/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13240
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
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))), (((unsigned int) ((((/* implicit */_Bool) (unsigned short)48780)) && (((/* implicit */_Bool) (unsigned short)33119)))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0])) : (arr_1 [i_0 - 3])))) ? (((var_9) ^ (var_4))) : (((/* implicit */unsigned long long int) (~(arr_0 [i_0 - 1] [i_0]))))));
        arr_4 [20ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50464)) ? (((/* implicit */int) (unsigned short)48780)) : (((/* implicit */int) (short)-1498))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0 - 2]) : (var_9))) : (((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 + 1])))));
        var_18 = ((/* implicit */int) ((((var_13) & (((/* implicit */long long int) arr_2 [i_0] [i_0 - 3])))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_13)))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)10243)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])), (arr_1 [i_0])))) ? (var_13) : (((/* implicit */long long int) (~(var_0))))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) ? ((+(((/* implicit */int) (unsigned short)48780)))) : (((/* implicit */int) var_16))));
                arr_13 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_12 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_12 [(unsigned short)10] [i_0 + 1] [i_0 - 2])) : (((int) arr_10 [(unsigned short)20]))))) ? (((long long int) (+(((/* implicit */int) var_1))))) : (((/* implicit */long long int) var_8)));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */int) arr_11 [i_0] [i_0 - 1])), (max(((-(((/* implicit */int) arr_12 [13U] [13U] [i_2])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))))))));
            }
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                arr_16 [i_3] = ((/* implicit */unsigned int) var_13);
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_7 [i_5 - 1] [i_5] [i_0 - 2])))) ? ((+((~(arr_0 [i_5] [i_3]))))) : (((/* implicit */long long int) ((arr_7 [i_4 + 2] [(unsigned char)14] [i_4 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */short) var_15)))))))))));
                            arr_21 [(_Bool)1] [i_4] [i_3] [10U] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_13))))) : ((+(((/* implicit */int) arr_20 [i_0] [(_Bool)1] [i_3] [i_3]))))))), (((long long int) max((var_12), (((/* implicit */unsigned short) var_2)))))));
                            var_23 = ((/* implicit */_Bool) ((((((/* implicit */long long int) arr_19 [i_4 - 3] [i_5 - 1] [i_3] [i_0] [i_4 - 3] [(unsigned short)9] [i_3])) >= (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) ? (max((var_11), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_11))) <= (min((var_9), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_3] [i_1]))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) var_14);
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) var_15);
                            var_26 |= arr_12 [i_6] [i_3] [i_1];
                        }
                    } 
                } 
            }
            arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1])) * (((/* implicit */int) var_14))))));
        }
    }
    var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)1476)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)5605))));
}
