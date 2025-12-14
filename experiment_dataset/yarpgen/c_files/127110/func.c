/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127110
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 &= ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_0))))), (min(((+(((/* implicit */int) var_5)))), (arr_5 [i_0] [14ULL] [i_1] [i_2])))));
                    var_20 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) -1668840089)) ? (arr_1 [4LL]) : (((/* implicit */int) (unsigned char)88)))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!((_Bool)0))) ? (((/* implicit */int) var_5)) : (65408)))) ? (arr_16 [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            arr_19 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) (signed char)49);
                            var_22 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_9 [i_3 + 1] [i_4 - 2])) << (((((((/* implicit */_Bool) arr_17 [i_0] [i_3 + 1] [i_4] [i_5] [i_3 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) - (60282)))))));
                            arr_20 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((((/* implicit */int) var_13)) + (2147483647))) << (((((((/* implicit */int) (short)-19347)) + (19355))) - (8)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) -1479777385)))))))) : (((((/* implicit */_Bool) -1668840068)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))) : (6299210363645878173LL)))));
                            var_23 = ((long long int) ((((/* implicit */_Bool) max((6670359968952984943ULL), (((/* implicit */unsigned long long int) 3262527362463100013LL))))) || (((/* implicit */_Bool) (signed char)77))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) arr_6 [i_0] [i_3] [i_3] [i_3]);
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
        {
            arr_24 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-62)) ? (((((/* implicit */_Bool) var_2)) ? (-6299210363645878173LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_16), (var_3))))))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [i_0] [i_7])), (2858024600U))))));
            var_25 = ((/* implicit */signed char) var_13);
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
        {
            arr_28 [i_0] [i_8] = arr_27 [i_8];
            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_27 [i_0]) : (min((arr_27 [i_8]), (arr_27 [i_0])))));
            var_27 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_25 [i_0])), (arr_23 [i_0] [i_0] [i_8])));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
        {
            arr_31 [i_0] [i_0] [i_9] &= ((/* implicit */short) var_3);
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)-50))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_27 [3U])));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_32 [i_11] [i_10] [11U] [i_0]))));
                    }
                } 
            } 
        }
    }
    for (int i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_30 ^= ((/* implicit */unsigned char) (~((-(-8123915175875628210LL)))));
        arr_39 [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
    }
    var_31 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (var_6) : (-6299210363645878173LL))) << (((/* implicit */int) (_Bool)0)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? ((-(((/* implicit */int) var_18)))) : (((/* implicit */int) var_15)))))));
    var_32 = ((/* implicit */unsigned int) var_2);
}
