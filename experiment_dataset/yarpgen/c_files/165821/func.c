/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165821
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) arr_3 [i_0]))), (max((((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0] [i_0]))), (max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_2 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) max((((short) max((arr_3 [i_0]), (((/* implicit */unsigned char) arr_0 [i_1] [i_0]))))), (((/* implicit */short) ((_Bool) ((signed char) arr_0 [i_0] [i_1]))))));
            var_12 *= arr_1 [i_0] [i_0];
            arr_8 [i_0] = ((/* implicit */_Bool) ((long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) arr_5 [i_0])))));
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */long long int) arr_3 [i_0]);
                        var_14 = min((((/* implicit */unsigned short) ((signed char) max((arr_5 [i_0]), (((/* implicit */short) arr_16 [i_3] [i_0])))))), (arr_15 [i_0] [i_0] [i_0] [(signed char)2] [(signed char)2] [i_0]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_21 [i_6] = ((/* implicit */unsigned int) arr_2 [i_2] [i_0]);
                        var_15 = ((/* implicit */short) ((unsigned int) arr_12 [i_2] [i_2] [i_2]));
                        arr_22 [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */short) arr_13 [i_2] [i_5] [i_6])), (max((((/* implicit */short) ((_Bool) arr_0 [i_0] [i_2]))), (arr_9 [i_2] [i_5] [i_6])))));
                        arr_23 [i_0] [(short)7] [i_6] [i_5] [i_5] [i_6] = ((unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)-28757)));
                        arr_24 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) arr_6 [i_6]);
                    }
                } 
            } 
            arr_25 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_0]);
            var_16 *= ((/* implicit */short) arr_3 [(unsigned char)10]);
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) arr_1 [i_0] [i_7]);
            arr_28 [i_0] = ((/* implicit */short) arr_10 [i_0] [i_7]);
        }
    }
    var_18 = ((/* implicit */_Bool) min((((/* implicit */short) var_8)), (((short) max((((/* implicit */short) var_9)), (var_11))))));
    var_19 = ((short) ((unsigned long long int) max((var_2), (var_6))));
    var_20 = ((/* implicit */long long int) var_11);
}
