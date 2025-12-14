/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139731
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
    var_11 = ((/* implicit */short) (((-(((/* implicit */int) var_9)))) <= (((/* implicit */int) ((unsigned short) -1092365184160631373LL)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_8);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) >= (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (var_10)))));
                        arr_13 [(unsigned char)7] [i_0] = ((/* implicit */long long int) (((-(18089452691376008172ULL))) * (((((((/* implicit */_Bool) 8585740288ULL)) ? (var_0) : (((/* implicit */unsigned long long int) 1117821467U)))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))))));
                        arr_14 [(_Bool)1] [i_1] [i_1] [i_0] [6LL] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (short i_6 = 4; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_24 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)240)));
                            arr_25 [i_6] [i_1] [i_6] = ((/* implicit */unsigned int) (~(1072693248)));
                            arr_26 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)240)))), (((/* implicit */int) var_8))))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4] [i_6] [i_4 - 1])) ? (((/* implicit */int) arr_23 [i_0] [i_5] [i_4 - 1] [i_6 + 1] [i_6] [9] [i_0])) : (((/* implicit */int) arr_16 [i_0] [(unsigned short)21] [i_4 - 1])))))));
                            arr_27 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-31447))));
                        }
                    } 
                } 
            } 
            arr_28 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 9000863745331576793LL))))), (((((/* implicit */int) (unsigned char)74)) % (((/* implicit */int) (unsigned char)166))))));
            arr_29 [i_1] [i_1] |= ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]);
        }
        arr_30 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)14))));
        arr_31 [6] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    }
}
