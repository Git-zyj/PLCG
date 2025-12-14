/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163328
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((long long int) var_7)))) ? (((/* implicit */int) max((((unsigned char) arr_0 [i_0])), (((/* implicit */unsigned char) ((_Bool) arr_0 [i_0])))))) : (((/* implicit */int) (short)25636))));
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 2]) | (arr_0 [i_0 - 2])))) ? (((/* implicit */long long int) ((unsigned int) (_Bool)1))) : (arr_0 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 14; i_3 += 2) 
            {
                var_19 += ((/* implicit */unsigned short) min((var_6), (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_16)), (var_15)))))))));
                var_20 = ((/* implicit */unsigned short) ((short) ((int) ((2301339409586323456LL) + (-1304795937322279629LL)))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_2]), (min((-1304795937322279626LL), (-1304795937322279622LL)))))) && ((!(((/* implicit */_Bool) var_9))))));
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 1])), ((~(arr_10 [i_1] [i_2] [i_3]))))))));
            }
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max(((((_Bool)1) ? (min((1304795937322279628LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) min((var_14), (((/* implicit */int) var_2))))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2])))))));
            arr_15 [i_1] = ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-1304795937322279606LL))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            var_22 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_5)))));
            var_23 = ((/* implicit */unsigned short) var_1);
        }
        for (unsigned short i_6 = 4; i_6 < 12; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (short i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_32 [i_4] [i_6] [i_7] [i_4] [i_7] [i_4] = ((/* implicit */int) ((unsigned char) var_9));
                            var_24 = ((/* implicit */unsigned int) (((-(var_0))) == (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) arr_24 [i_9] [i_8] [i_7] [i_6])) ? (((((/* implicit */_Bool) 3651683685449355830LL)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_30 [i_4] [i_6] [i_6] [i_8] [i_8] [i_8] [i_9]))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -1304795937322279623LL)) : (var_11)));
        }
        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    for (short i_13 = 2; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_28 = ((/* implicit */short) var_8);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3667901391U)) / (-1304795937322279629LL)))) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) var_16))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_4 - 1] [i_10] [i_4] [i_4] [i_4])) ? (7023297931501046105ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4 + 1] [i_10] [i_4] [i_4] [i_4])))));
        }
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((signed char) 1304795937322279622LL)))));
    }
    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1304795937322279610LL) : (((/* implicit */long long int) var_14))));
    var_33 += ((/* implicit */unsigned char) ((long long int) var_2));
}
