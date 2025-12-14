/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167313
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
    var_11 = ((/* implicit */unsigned char) ((long long int) var_3));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) & (((((arr_0 [i_0] [i_0]) == (((/* implicit */unsigned int) 0)))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-21688))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [11] = (-(5787999149759913395LL));
                        var_13 &= ((/* implicit */long long int) ((((/* implicit */int) (short)-30610)) <= ((-((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2 + 1] [i_3]))))))));
                        var_14 = arr_8 [i_2];
                        arr_12 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (((~(min((-139305598), (((/* implicit */int) var_5)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) + (16877982229011501133ULL)))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) (+(((arr_3 [i_0] [i_0] [i_0]) - (arr_3 [i_0] [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)45626);
            var_15 = ((/* implicit */short) arr_5 [i_4]);
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0]))));
                arr_23 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) var_7);
                var_17 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)45642))));
            }
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4] [(short)7])) & (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (-((-(((/* implicit */int) var_3)))))))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_19 = ((/* implicit */_Bool) var_8);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(arr_1 [i_6]))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((arr_0 [i_6] [i_6]), (((/* implicit */unsigned int) arr_19 [i_6] [i_6] [i_6]))))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_6])) : (139305598)))))) : (((((/* implicit */_Bool) arr_24 [(short)1] [(short)1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6])) && (((/* implicit */_Bool) arr_14 [i_6] [i_6]))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_2)))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((_Bool) var_0)))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_10))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_2 [i_7]))))))))));
        arr_30 [i_7] = min(((-(((var_7) >> (((((/* implicit */int) var_5)) + (14946))))))), (var_7));
    }
    for (int i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            arr_37 [i_8 - 1] = ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_14 [i_8 - 1] [i_8])) - (1706))))) >> (((((-6724324336524562128LL) & (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (28903LL)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -227302835)), (8192964629842250411ULL)))));
            arr_38 [7U] [7U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8] [i_8])) ? (((/* implicit */int) arr_8 [i_8 + 2])) : (((/* implicit */int) ((536870911LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_14 [1LL] [i_9]))))))))) ? (max((((var_1) ? (arr_17 [(_Bool)1] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9] [i_9] [i_8 + 2]))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            var_22 = ((/* implicit */_Bool) arr_2 [i_8]);
        }
        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            arr_42 [i_8] [4LL] [i_10 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_36 [i_10] [i_10])), (arr_14 [i_8] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_10] [i_8])) && (((/* implicit */_Bool) (short)-20777))))) : (((((/* implicit */_Bool) (signed char)-106)) ? (arr_10 [i_8] [i_8] [i_10]) : (((/* implicit */int) (unsigned char)0)))))) != (((/* implicit */int) arr_8 [i_8]))));
            arr_43 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1073741696U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)17105)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-(arr_39 [i_10 - 1] [i_8 + 2] [i_8 - 1])))));
        }
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8] [i_8]))))))))));
    }
}
