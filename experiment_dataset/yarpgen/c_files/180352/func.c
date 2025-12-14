/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180352
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_0] [i_1] [i_2] [i_1]), (((/* implicit */unsigned short) arr_0 [i_0])))))) : (((((/* implicit */_Bool) min((134152192U), (((/* implicit */unsigned int) (signed char)-20))))) ? (arr_1 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20)))))));
                    var_16 ^= ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1048560LL))));
        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (4501400604114944LL) : (((/* implicit */long long int) (-2147483647 - 1))))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-8)))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_3])) % (((/* implicit */int) arr_8 [i_3]))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (~(var_12)));
                    arr_18 [i_3] [i_4] [i_5] = arr_15 [i_4] [i_4] [i_3] [i_4];
                    arr_19 [i_3] [i_4] [i_4] [(unsigned char)10] = ((/* implicit */_Bool) (+(-1048560LL)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1048563LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */unsigned int) arr_0 [i_3]);
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    arr_30 [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_9] [i_9] [i_7] [i_7])) ? (((/* implicit */int) arr_6 [i_7] [16ULL] [i_8] [i_9])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_6 [i_7] [i_7] [i_8] [i_9]))));
                    arr_31 [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) (_Bool)0);
                    var_24 = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned int) (short)32766)), (arr_23 [i_7] [i_7]))));
                    arr_32 [i_9] [i_8] [i_7] [i_7] = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) arr_23 [i_9] [i_9])) > (max((((/* implicit */unsigned long long int) arr_27 [i_7] [i_9])), (arr_3 [i_8] [i_7])))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_25 = min((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)16128)), ((+(arr_34 [i_8] [i_8] [i_8])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16128)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_36 [i_7] [i_8])), ((unsigned char)236))))))));
                    var_26 = arr_33 [i_10] [i_8] [i_7] [i_7];
                }
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    arr_39 [i_7] = ((/* implicit */signed char) (+(min((arr_23 [i_7] [i_8]), (arr_23 [i_7] [i_8])))));
                    var_27 = ((/* implicit */signed char) var_10);
                    var_28 = ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (7830229560039847724ULL)))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26973)))))) : (((((/* implicit */_Bool) (unsigned short)63343)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_11] [i_7])))))) : (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(short)17] [i_8]))) : (var_9))))));
                }
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_27 [i_7] [i_8])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [19U]))))) : (min((((/* implicit */long long int) arr_36 [i_7] [i_8])), (arr_1 [i_7] [i_8]))))))))));
                var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_8])) || (((/* implicit */_Bool) 1048557LL))))), ((-(1048557LL)))));
            }
        } 
    } 
}
