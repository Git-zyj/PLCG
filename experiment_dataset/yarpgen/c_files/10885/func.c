/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10885
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_10 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((unsigned long long int) (signed char)110))))));
                arr_6 [i_0] [14ULL] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13912))) > (var_6)))))), ((+(((0LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 768656999U))) | ((-(((/* implicit */int) arr_1 [i_0]))))));
                                arr_15 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((unsigned int) arr_0 [i_2] [i_3])))));
                                var_11 = ((/* implicit */long long int) ((max((max((var_3), (((/* implicit */unsigned long long int) (unsigned char)164)))), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_2])))) % ((~(min((var_4), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_6] [(unsigned short)8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (-(-2089840059)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (max((127ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [(signed char)23])))));
                                var_12 *= ((/* implicit */unsigned int) max((arr_12 [i_0] [i_0] [i_5] [i_5] [i_6] [i_7]), ((-(((int) var_0))))));
                                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [13LL] [i_1] [i_7])))))));
                                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)127)), (((unsigned long long int) var_3))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */long long int) var_4);
            }
        } 
    } 
    var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) var_6))) >= ((~(var_4)))))), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (var_1)))));
    /* LoopSeq 1 */
    for (unsigned int i_8 = 1; i_8 < 12; i_8 += 1) 
    {
        var_17 = ((/* implicit */short) (unsigned char)167);
        var_18 *= ((/* implicit */_Bool) ((((max(((+(var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) 14640274648202249659ULL)) ? (((/* implicit */int) (signed char)-50)) : ((-2147483647 - 1))))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((arr_24 [i_8]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        arr_26 [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (short)-31628)) != (((/* implicit */int) var_0)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                var_19 = ((/* implicit */long long int) var_2);
                var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [7LL] [i_10])) ? (((/* implicit */long long int) -1501528415)) : (-21LL))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_36 [(unsigned char)7] [i_9] [i_9] [i_10] [i_11] [i_11] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (-8956728479956043305LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            arr_37 [i_12] [i_11 - 1] [i_10] [i_9] [i_8] = ((/* implicit */unsigned char) (+(arr_19 [i_12 - 2] [i_8 - 1])));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
                            arr_38 [i_12] [i_11 - 1] [i_10] [i_8] [i_8] = ((/* implicit */_Bool) ((-861277187) / (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */long long int) ((/* implicit */int) (short)32761))) % ((~(arr_19 [i_8 + 1] [8U]))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((unsigned int) (signed char)22)))))));
                arr_41 [i_13] [i_9] [3ULL] [i_8 + 1] = ((/* implicit */unsigned long long int) var_1);
            }
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((((/* implicit */long long int) 0)) > (-6039304861870202877LL))))));
            arr_45 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) var_4);
        }
    }
}
