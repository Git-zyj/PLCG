/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173467
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
    var_13 = (short)16;
    var_14 = ((/* implicit */short) var_10);
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)21))))), (var_2)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_4 [i_0]);
                            var_16 = (!(((/* implicit */_Bool) arr_9 [i_0] [i_3 - 1] [i_4 - 1] [i_1] [i_1] [i_2] [i_3])));
                            var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) (short)-16)) + (18))))) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_2])) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4])))))));
                            arr_12 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_3 - 1] [i_0]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            var_18 += ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3]);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_5] = arr_0 [i_0];
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]))) >= (((unsigned int) 15147148594721528214ULL))));
                            var_20 = ((/* implicit */signed char) ((_Bool) arr_9 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) (~((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))))));
                            var_22 ^= ((((/* implicit */_Bool) arr_8 [i_6] [i_3 - 1] [i_1] [i_0 + 1])) ? (arr_8 [i_3] [i_3 - 1] [i_2] [i_0 - 1]) : (arr_8 [i_6] [i_3 - 1] [i_1] [i_0 - 2]));
                        }
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_7] [i_3] [i_2] [i_1] [i_0]));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((int) (unsigned short)22087)))));
                            arr_21 [i_0] [i_2] [i_0] = ((short) arr_14 [i_0 - 2] [i_0] [i_0 - 1] [i_0] [i_0]);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_26 [i_0] [i_0] = ((/* implicit */long long int) arr_22 [i_0] [i_8] [i_0]);
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((signed char) ((signed char) (short)18)));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)-23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) : (1182710416U)))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) arr_6 [i_8 + 1] [i_8 + 1] [i_0 - 1]);
            arr_32 [i_0] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8] [i_0])) + (((/* implicit */int) var_6))));
        }
        var_28 = ((/* implicit */long long int) (+(arr_8 [i_0] [i_0] [i_0] [i_0 - 1])));
    }
}
