/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174490
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
    var_15 = ((/* implicit */signed char) var_10);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((var_13) < (var_13)))) >= (((var_4) % (((/* implicit */int) var_10))))))) == (((((/* implicit */int) (unsigned char)23)) ^ (((/* implicit */int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_14))))))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_14))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [3])) == (((/* implicit */int) ((898002945765344516ULL) == (((/* implicit */unsigned long long int) 1503491526U)))))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (arr_0 [8LL]))))) / (arr_1 [(unsigned short)8] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) var_5);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_1] [i_1])) / (arr_7 [i_1] [i_1]))) == (((/* implicit */int) arr_2 [i_1]))));
        arr_8 [18U] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_1])))) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) arr_2 [i_1])))))));
        arr_9 [i_1] = (signed char)18;
        var_21 += ((/* implicit */unsigned short) arr_1 [(short)14] [i_1]);
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        var_22 = arr_11 [i_2 + 2];
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(arr_16 [i_2 + 1]))))));
                arr_20 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_10 [i_2]);
                var_24 = (unsigned short)64461;
                arr_21 [i_4] [i_4] [i_2 + 1] = ((/* implicit */unsigned short) 1256700098U);
            }
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                arr_25 [i_5] [i_5] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) (signed char)18))));
                arr_26 [7U] [i_5] [(_Bool)1] = ((/* implicit */short) arr_19 [i_2]);
                arr_27 [i_3] [0] [i_3] [i_3] &= ((/* implicit */int) 8119417145072120365LL);
            }
            var_25 = arr_7 [i_2 + 1] [i_2 + 2];
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) 71776119061217280ULL))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (short)1028))));
                        var_28 *= ((/* implicit */short) ((((/* implicit */int) (signed char)54)) < (((/* implicit */int) (unsigned char)154))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_31 [i_2] [i_2] [i_2] [i_2] [6ULL]))));
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            arr_35 [i_2] [(signed char)10] [i_2] = ((/* implicit */unsigned char) 199895831U);
            arr_36 [i_8] = ((/* implicit */long long int) ((((2136413881) + (((/* implicit */int) arr_2 [i_2])))) == (((/* implicit */int) ((unsigned short) (signed char)-103)))));
            var_30 = ((/* implicit */signed char) (unsigned char)167);
            arr_37 [i_2] [2] [i_8] = ((/* implicit */int) arr_6 [i_2 + 2] [i_2]);
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
            arr_40 [1] [i_2] [i_2] = ((/* implicit */signed char) arr_11 [i_2]);
        }
    }
    for (unsigned char i_10 = 2; i_10 < 17; i_10 += 3) 
    {
        var_32 |= ((/* implicit */long long int) (+(((/* implicit */int) min((min((((/* implicit */unsigned short) arr_2 [13])), (var_7))), (((/* implicit */unsigned short) ((_Bool) 1831626659))))))));
        var_33 = ((/* implicit */int) arr_2 [i_10]);
    }
    var_34 = ((/* implicit */unsigned short) var_11);
}
