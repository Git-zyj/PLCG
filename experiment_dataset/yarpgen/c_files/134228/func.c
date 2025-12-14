/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134228
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) > (((long long int) var_7))));
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) : (arr_3 [(unsigned char)10])));
                    arr_10 [i_0] [i_0] [i_0] [13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_1] [22] [i_0]))) : (((long long int) var_2)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((long long int) (!((!(((/* implicit */_Bool) var_18)))))));
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((int) arr_3 [i_3]));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((330536335U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_22 [(_Bool)1] [i_4] [i_5 + 1] [i_4] [(signed char)3] = ((/* implicit */long long int) arr_7 [i_3] [(unsigned char)16] [(unsigned char)16] [i_3]);
                        var_23 &= ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) - (((unsigned long long int) var_18)))));
                        var_24 = ((/* implicit */short) (((-(((long long int) var_11)))) >> (((((/* implicit */int) var_11)) + (25680)))));
                        var_25 *= ((/* implicit */unsigned short) arr_5 [(_Bool)1] [i_5]);
                    }
                    arr_23 [i_3] [2] [i_5] &= ((/* implicit */unsigned char) 0ULL);
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        arr_26 [i_3] [i_3] [11ULL] [i_4] [13U] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (2693702479U)));
                        arr_27 [i_7] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */signed char) (-((-((-(arr_19 [i_7] [i_4] [i_4] [i_4] [i_3])))))));
                        var_26 = ((/* implicit */short) 4294967295U);
                    }
                    var_27 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_8))))));
                    arr_28 [i_4] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_0 [i_5]))) >> (((((/* implicit */_Bool) arr_24 [i_5 + 2] [0LL] [i_5 + 2] [(signed char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 + 2] [i_4] [i_4] [i_4]))) : (10071934666543442350ULL)))));
                }
            } 
        } 
        arr_29 [(signed char)0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */int) (signed char)-106)) / (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_6)))))));
        var_28 = ((/* implicit */_Bool) (unsigned char)151);
    }
}
