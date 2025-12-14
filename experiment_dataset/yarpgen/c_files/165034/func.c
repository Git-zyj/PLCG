/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165034
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            arr_15 [4] |= ((/* implicit */long long int) var_0);
                            var_17 = ((/* implicit */unsigned char) arr_8 [i_3] [i_2] [i_1] [i_0]);
                            var_18 = ((/* implicit */unsigned char) var_2);
                        }
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 8000666830437140354ULL))));
                        var_20 = ((/* implicit */_Bool) var_12);
                        var_21 = ((/* implicit */unsigned int) arr_12 [(short)3] [i_1] [i_2] [(short)3]);
                    }
                } 
            } 
        } 
        var_22 = (!(((/* implicit */_Bool) 1041081799U)));
        var_23 = ((/* implicit */long long int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        var_24 = ((/* implicit */signed char) (+(((long long int) (~(((/* implicit */int) arr_10 [(signed char)0] [i_0] [i_0] [i_0] [9U])))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 3; i_5 < 18; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                var_25 |= ((/* implicit */_Bool) var_2);
                arr_22 [i_6] = ((/* implicit */unsigned char) arr_18 [(_Bool)1]);
                arr_23 [i_6] = ((/* implicit */signed char) var_8);
                var_26 = ((/* implicit */int) min((((/* implicit */long long int) arr_18 [i_5])), (var_6)));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_27 = var_10;
                            var_28 = ((/* implicit */long long int) arr_26 [i_5] [i_5] [i_7] [i_8]);
                            var_29 = ((/* implicit */signed char) arr_21 [i_6]);
                            arr_28 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (unsigned char)13)), (var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_15)), (var_6)));
    var_31 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_6)))) > (var_3)));
}
