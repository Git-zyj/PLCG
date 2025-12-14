/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106620
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)113))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((-528600735198589352LL) > (-528600735198589364LL))) || (((/* implicit */_Bool) var_3))));
    }
    var_10 = ((/* implicit */unsigned short) (+(-528600735198589367LL)));
    var_11 = ((/* implicit */_Bool) max((var_9), (var_9)));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (((~(528600735198589370LL))) <= (528600735198589326LL))))) : (max((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) - (-528600735198589349LL))), (((((/* implicit */_Bool) -528600735198589365LL)) ? (-528600735198589390LL) : (-528600735198589367LL)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (+((+(528600735198589364LL)))));
        var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 528600735198589402LL)) ? (((/* implicit */int) arr_6 [i_1] [(unsigned char)13])) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) 528600735198589391LL)) ? (528600735198589406LL) : (528600735198589392LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) arr_5 [i_1] [16ULL])))) ? ((-(-528600735198589403LL))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (528600735198589380LL)))))));
        arr_9 [i_1] [i_1] &= ((/* implicit */short) ((long long int) min((528600735198589323LL), (((/* implicit */long long int) arr_7 [11])))));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_14 += ((/* implicit */unsigned char) (((+(((arr_11 [i_2]) << (((528600735198589347LL) - (528600735198589324LL))))))) > (((/* implicit */unsigned long long int) (+(((-528600735198589352LL) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
            var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (-528600735198589336LL)))) ? (((((/* implicit */_Bool) 528600735198589335LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_11 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_3])))))));
            arr_15 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 528600735198589410LL)) ? (528600735198589335LL) : (-528600735198589402LL)))) || (((/* implicit */_Bool) var_9))));
        }
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 528600735198589366LL)) ? (-528600735198589336LL) : (528600735198589347LL))))));
            var_17 = ((/* implicit */signed char) 528600735198589347LL);
        }
        for (short i_5 = 4; i_5 < 22; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 3; i_6 < 23; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) var_3);
                        arr_27 [i_2] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) arr_10 [i_2]);
                        var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_10 [i_6 + 2]) << (((((/* implicit */int) arr_22 [i_5] [i_5 - 1] [i_5] [i_5])) - (41642)))))), (((((/* implicit */_Bool) -528600735198589358LL)) ? (((/* implicit */long long int) arr_10 [i_6 - 1])) : (528600735198589402LL)))));
                        var_20 = ((/* implicit */_Bool) (-(var_2)));
                    }
                } 
            } 
            var_21 *= ((/* implicit */unsigned int) arr_24 [i_5] [i_5 + 3] [i_5 + 2] [4U]);
        }
        var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [6LL] [6LL] [i_2] [i_2]))) : (-528600735198589349LL)))))) ? (var_1) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_2] [i_2])))))));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) 528600735198589366LL))), (max(((-(528600735198589383LL))), (max((528600735198589353LL), (-528600735198589329LL)))))));
    }
}
