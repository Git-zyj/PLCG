/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177993
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
    var_18 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        var_20 = 4212831223U;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) (!(((_Bool) 10U))));
            arr_6 [(short)0] [i_1 + 1] = ((/* implicit */int) ((unsigned int) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)17096))) ^ (arr_1 [i_0]))))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (short)18008)) + (((/* implicit */int) var_1)))) : ((+(((((/* implicit */int) arr_2 [i_0] [i_1])) + (((/* implicit */int) (unsigned char)101))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
            var_23 += ((/* implicit */int) min((((/* implicit */unsigned int) ((short) arr_9 [i_2] [i_0]))), (((var_7) ^ (((/* implicit */unsigned int) var_6))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (short i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    {
                        arr_23 [i_3] [i_4 - 1] [i_3] [i_6] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) min((-205357332968492047LL), (((/* implicit */long long int) (unsigned char)101))))) && (((/* implicit */_Bool) var_7)))))));
                        arr_24 [i_3] [i_5] [i_3] = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((16777200) / (((((/* implicit */_Bool) (-(arr_22 [i_3] [i_3] [i_3 + 2] [i_3 + 2])))) ? (var_4) : (((/* implicit */int) ((unsigned short) var_11)))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_8 [i_3]))))) ? (((((/* implicit */_Bool) arr_22 [i_3 + 1] [0] [i_3] [i_3])) ? (arr_22 [i_3] [i_3] [(unsigned short)2] [i_3]) : (var_14))) : (((((/* implicit */int) (short)-9549)) ^ (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 9223372036854775806LL)))))) : (((/* implicit */int) arr_13 [i_3 + 1]))));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (int i_9 = 1; i_9 < 16; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_26 *= ((/* implicit */signed char) var_7);
                            arr_37 [i_3] = ((/* implicit */signed char) ((unsigned short) arr_17 [i_3] [i_10] [i_8]));
                            var_27 = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) 16777195))));
            arr_38 [i_3] [i_7] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 1])), (arr_28 [i_3 + 2]))))));
        }
    }
}
