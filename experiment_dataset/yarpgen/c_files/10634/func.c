/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10634
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2]);
                                var_17 = ((/* implicit */long long int) ((unsigned long long int) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_15)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((((((/* implicit */long long int) ((var_1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_18 [(_Bool)1]))))) / (((((/* implicit */_Bool) arr_16 [i_6])) ? (var_7) : (var_15))))) / (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)7059))))))));
                var_18 += ((/* implicit */unsigned char) ((long long int) (~(arr_19 [i_5] [i_6]))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned short i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        {
                            arr_28 [i_5] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_7] [(unsigned short)3] [i_7] [(unsigned short)11]))))), (((long long int) (signed char)-37)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((int) 70368744177663ULL)) : ((~(((/* implicit */int) arr_26 [i_5] [i_6] [i_7 - 1] [(signed char)16])))))))));
                            var_19 &= ((/* implicit */unsigned long long int) var_5);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(arr_23 [(signed char)10]))))));
                            var_21 -= ((/* implicit */short) min((((/* implicit */signed char) (_Bool)0)), (var_3)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_11)))) ? (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_12))))))));
}
