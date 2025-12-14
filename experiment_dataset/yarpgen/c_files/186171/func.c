/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186171
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
    var_18 *= ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
        var_20 = ((_Bool) arr_0 [i_0]);
        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) 2065983125580360656ULL);
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7U))));
                                var_24 = ((/* implicit */int) 684826966614215278ULL);
                                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 22U))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-5047))))) > (min((((/* implicit */long long int) var_13)), (arr_5 [i_3 + 1] [(short)2])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 2) 
                {
                    {
                        arr_20 [i_1] [i_1] [14] [i_8] = (((((!(((/* implicit */_Bool) (unsigned char)112)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)94)) < (((/* implicit */int) (_Bool)1)))))) : (var_6))) >> (((unsigned int) (_Bool)1)));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (((-(arr_22 [i_1] [i_1] [i_7 + 3] [i_8 - 1] [i_8 - 1] [i_1]))) == (4294967288U)));
                            var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) arr_19 [i_7] [i_7 - 2] [i_7 + 3] [i_8 - 3] [i_9] [i_9])));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(0U))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)161))))));
                            var_31 = ((/* implicit */unsigned char) max((((arr_4 [i_8 + 1] [0] [i_10]) - (arr_4 [i_8 - 1] [i_10] [i_10]))), (((/* implicit */long long int) (-(2137834855U))))));
                            arr_27 [i_1] [i_1] = -500755765;
                        }
                        for (int i_11 = 1; i_11 < 19; i_11 += 4) 
                        {
                            var_32 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18446744073709551615ULL)))));
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((int) max(((unsigned char)255), (((/* implicit */unsigned char) var_15)))));
                        }
                        var_33 = ((/* implicit */unsigned int) (unsigned char)237);
                        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) 2137834855U))));
                    }
                } 
            } 
        } 
        var_35 *= ((/* implicit */unsigned short) var_5);
        var_36 = ((/* implicit */unsigned int) min((arr_6 [i_1] [i_1] [(_Bool)1]), (((/* implicit */unsigned short) (unsigned char)161))));
    }
    for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 1) 
    {
        var_37 = ((((/* implicit */int) (unsigned char)9)) >> (7U));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            for (short i_14 = 2; i_14 < 19; i_14 += 2) 
            {
                {
                    arr_41 [i_12] [i_12] [i_14] = ((/* implicit */int) (~(max((4294967288U), (((/* implicit */unsigned int) (unsigned char)125))))));
                    var_38 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59735)))))));
                    arr_42 [i_12] [i_12] [i_13] [i_14] = ((/* implicit */signed char) (unsigned char)61);
                }
            } 
        } 
        var_39 &= ((/* implicit */unsigned char) (_Bool)1);
    }
    var_40 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)155)) ? (((long long int) (unsigned char)244)) : (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) (unsigned char)62))));
}
