/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1506
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
    var_18 = ((/* implicit */_Bool) (unsigned char)255);
    var_19 -= (((_Bool)1) && (((/* implicit */_Bool) var_4)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1]))))) + (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_5 [i_1 + 2]))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                    var_21 ^= ((/* implicit */signed char) var_10);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        var_22 *= ((/* implicit */long long int) ((arr_8 [i_3 + 1]) / (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)30))))), (arr_8 [i_3 + 1])))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            for (int i_5 = 3; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_19 [i_3] [12] [i_4] [i_5] [i_6] [12] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (unsigned short)56215)) / (((/* implicit */int) var_9)))));
                                var_23 -= ((/* implicit */unsigned char) (signed char)19);
                                arr_20 [7ULL] = ((/* implicit */short) (-(max((((/* implicit */unsigned int) var_6)), (min((arr_8 [i_3]), (((/* implicit */unsigned int) var_6))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((((unsigned long long int) arr_9 [i_3] [i_3] [i_5])) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_4] [i_4] [i_3]), ((signed char)-31)))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_16 [i_5 - 2] [i_5] [i_5] [i_4] [i_4] [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)133)) || (((/* implicit */_Bool) arr_12 [i_4] [i_5]))))) : (((((/* implicit */int) arr_11 [i_3] [i_3])) / (((/* implicit */int) arr_18 [i_3 - 2] [(unsigned short)14] [i_3] [i_3 - 2]))))))));
                }
            } 
        } 
        arr_21 [13] = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3]);
        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << ((((+(((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3 - 2])))) + (100)))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 19; i_8 += 3) 
        {
            for (int i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 19; i_10 += 4) 
                    {
                        for (int i_11 = 1; i_11 < 22; i_11 += 4) 
                        {
                            {
                                arr_34 [i_3] [i_8] [i_9] [i_10] [(unsigned short)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((4070059929U), (((/* implicit */unsigned int) arr_15 [i_11] [i_10] [i_8] [i_8] [i_3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3478)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (arr_22 [(_Bool)1] [(signed char)8] [i_11 - 1])))) : (arr_8 [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_33 [i_3] [i_3] [i_9] [i_10] [i_11]) > (((((/* implicit */_Bool) arr_27 [i_10 + 4] [i_9] [i_8 + 3])) ? (((/* implicit */int) arr_25 [i_3] [i_9] [i_10] [i_3])) : (arr_33 [i_3] [i_8] [i_3] [i_8] [i_11])))))))));
                                arr_35 [i_3] [14ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1740900218590361313ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39255)) * (((/* implicit */int) (signed char)117))))) : (-775700928214037983LL)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)183)) % (((/* implicit */int) (_Bool)1))))))) : (var_4)));
                                arr_36 [i_3] [i_8] [i_9] [i_10] [i_8] [i_8] = ((/* implicit */int) var_15);
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)183)) << (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_27 -= ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (0LL)))))) ? (((/* implicit */int) arr_18 [i_9] [i_8] [i_3] [i_3 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20995)) & (((((/* implicit */int) arr_24 [i_3 - 1])) + (((/* implicit */int) (unsigned char)238))))));
                }
            } 
        } 
    }
}
