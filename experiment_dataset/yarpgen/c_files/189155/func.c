/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189155
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_19 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 3)), (arr_1 [(short)0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_6 [i_0] [i_0 + 3]), (arr_6 [i_0] [i_0 + 3]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_3])) : ((~(((/* implicit */int) arr_12 [i_0] [i_0 + 3] [i_0 + 3] [i_2] [i_3]))))))));
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)0))))))), ((+(((unsigned long long int) (short)-15860))))));
                        var_21 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_3 [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_19 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 137645993)))))));
                                var_22 ^= ((/* implicit */signed char) ((short) var_13));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((long long int) ((var_16) - ((+(((/* implicit */int) arr_21 [i_2])))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 2; i_7 < 23; i_7 += 2) 
                        {
                            arr_25 [i_0] [(_Bool)1] [(_Bool)1] [i_6] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) var_16))), (min(((~(((/* implicit */int) (unsigned char)90)))), (((/* implicit */int) var_11))))));
                            arr_26 [i_0] [i_0] [(unsigned char)2] [i_7] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) var_3))), (min((arr_0 [i_2]), (((/* implicit */short) (unsigned char)42)))))))));
                        }
                    }
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_11)))) + (max((((/* implicit */int) min(((short)-15859), (((/* implicit */short) var_18))))), ((~(((/* implicit */int) var_2))))))));
    }
    var_24 = ((/* implicit */long long int) ((short) min((((/* implicit */unsigned short) (short)15860)), ((unsigned short)1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)21301), (((/* implicit */unsigned short) var_3))))))));
        var_25 = ((/* implicit */int) arr_7 [(unsigned char)15] [i_8] [i_8] [i_8]);
    }
    for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (long long int i_11 = 3; i_11 < 20; i_11 += 3) 
            {
                for (long long int i_12 = 3; i_12 < 19; i_12 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11 - 2] [i_11 + 1] [i_11 - 3] [i_10])) ? (((/* implicit */int) arr_37 [i_11 - 2] [i_11 + 1] [i_11 - 3] [i_10])) : (((/* implicit */int) arr_37 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_10])))))));
                        var_27 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)44249))), ((~(arr_5 [i_11 - 2] [i_12 + 2])))));
                    }
                } 
            } 
        } 
        var_28 |= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (short)-11931)), (0LL)))));
    }
    var_29 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_0))) * (((/* implicit */unsigned long long int) min((max((var_9), (((/* implicit */int) (short)-6)))), (((/* implicit */int) (_Bool)1)))))));
}
