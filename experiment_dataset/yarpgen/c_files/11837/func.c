/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11837
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
    var_12 = ((/* implicit */signed char) var_0);
    var_13 = ((/* implicit */unsigned int) (~(max((min((((/* implicit */long long int) var_6)), (-1LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) <= (var_11))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) (~(((/* implicit */int) (signed char)8)))))) & (((((/* implicit */_Bool) -19LL)) ? (2617945162770069386LL) : (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 - 2]))))));
        var_14 = ((/* implicit */signed char) arr_0 [i_0] [(unsigned char)6]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) (+(7LL)));
            var_16 = ((/* implicit */unsigned char) (+(var_0)));
            var_17 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_4) <= (-19LL))))) <= ((~(22LL)))));
            var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (10938451907081513672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_17 [(_Bool)1] [i_0] = ((/* implicit */long long int) arr_9 [i_4] [i_2] [i_2]);
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_11)));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 3857908002798660527LL)) || (((/* implicit */_Bool) arr_7 [i_2]))))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (int i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            arr_33 [i_5] [i_5] [i_7] [i_8] [i_7] [i_7] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2617945162770069386LL)) ? (385267054) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 25LL)) : (var_11))))));
                            var_21 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1881796572)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)169))))) <= (min((var_1), (((/* implicit */unsigned long long int) var_5))))));
                            var_22 = ((/* implicit */_Bool) max((((long long int) var_9)), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_27 [i_5] [i_7] [i_5] [i_7]))))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+((+(5LL)))))) <= (min((var_11), (((/* implicit */unsigned long long int) 1336816084U))))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 2) 
                        {
                            arr_38 [i_5] [i_6] [i_6] [i_7] [i_5] [i_8 + 1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1522898650521814289LL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (-1522898650521814272LL)))) : (467170639)))) ? (((((/* implicit */_Bool) (signed char)18)) ? (-2617945162770069387LL) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-10LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                            arr_39 [i_5] [i_6] [i_6] [i_7] [i_8] [i_10] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_7] [i_8 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_1)) ? (10553308140784478011ULL) : (((/* implicit */unsigned long long int) -2617945162770069386LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 211525677)), ((+(1LL))))))));
                            arr_40 [i_5] [i_10] = ((/* implicit */int) arr_34 [i_5] [15] [i_5]);
                        }
                        arr_41 [i_8] [i_5] [i_6] [i_6 - 1] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_19 [i_5] [i_5])))) <= (min((((/* implicit */unsigned long long int) arr_27 [i_5] [i_6] [i_5] [i_7])), (var_11)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                {
                    arr_49 [i_5] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((-(var_1))) <= (((unsigned long long int) 16777088U)))))) <= (-10LL)));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 4850857418366166015LL))));
                }
            } 
        } 
        var_25 = min((max((((((/* implicit */_Bool) 5LL)) ? (var_1) : (1979833412101936370ULL))), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5] [i_5]))) | (arr_27 [i_5] [i_5] [i_5] [i_5])))));
        var_26 = ((/* implicit */short) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((1336816077U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))))))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 24; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            {
                var_27 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_50 [i_13 - 1])) && (((/* implicit */_Bool) 4294967295U))))));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_4))));
                arr_55 [i_14] [i_14] = ((/* implicit */unsigned long long int) var_9);
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53412)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(17LL)))) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2287828610704211968ULL)))))) : (((/* implicit */int) var_5))));
            }
        } 
    } 
}
