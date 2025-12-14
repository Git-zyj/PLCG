/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180200
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
    var_10 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) | (((/* implicit */int) (unsigned short)25908)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_3] = ((/* implicit */unsigned short) ((short) var_1));
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) max((((unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned short) ((_Bool) (_Bool)1))))))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [(unsigned short)1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)19184))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((_Bool) (((~(var_0))) >= (var_5)))))));
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) var_5)))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_13 [i_4] [i_4]))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        arr_17 [i_4] [i_4] = var_3;
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 16; i_7 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            var_15 = ((/* implicit */_Bool) ((unsigned char) arr_13 [i_7 + 1] [i_5]));
                            var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_5) == (((/* implicit */long long int) arr_20 [i_8] [i_5] [i_7])))))));
                            arr_26 [i_4] [i_5] [i_6] [i_7 - 1] [i_8] = ((/* implicit */int) ((var_9) || (var_7)));
                            var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_4] [i_7 + 1]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(signed char)2] [(signed char)2])))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) var_2)))))));
                        }
                    }
                } 
            } 
        } 
    }
}
