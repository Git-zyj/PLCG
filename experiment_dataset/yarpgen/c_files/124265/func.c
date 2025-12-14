/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124265
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((-(593044679U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), ((+(min((var_11), (1815203183812184221LL)))))));
    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)153)), (var_2)))) ? (var_3) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4064U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) var_6))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) 593044653U)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) 1582725382324425590ULL)) ? (arr_1 [i_0]) : (arr_1 [6LL]))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_0])) > (((/* implicit */int) ((unsigned short) ((arr_3 [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153)))))))));
                        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)153))));
                        var_19 += ((/* implicit */long long int) ((_Bool) min((arr_6 [(unsigned short)2] [i_3] [i_0]), (arr_6 [i_0] [i_1] [(_Bool)1]))));
                    }
                } 
            } 
            var_20 = ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */long long int) arr_5 [i_1])) : (((((/* implicit */_Bool) (unsigned char)106)) ? (794644411491768111LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((11022754118447236581ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25726)))))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (arr_3 [i_0] [i_0])));
            var_22 = ((/* implicit */unsigned long long int) (+(((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_15)))))));
            var_23 += ((/* implicit */unsigned long long int) (-(min((arr_1 [i_1]), (arr_0 [i_1])))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_24 += ((/* implicit */signed char) (~((~(arr_0 [i_4])))));
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_13))));
            var_25 = ((/* implicit */unsigned char) var_6);
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_20 [i_0] [i_5] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) -7552764642879487556LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_8 [i_5] [i_5] [i_5])));
            var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))));
        }
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((6701068839875911622ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])))) == (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 2) 
    {
        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)109)) ^ (((/* implicit */int) var_15)))))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_6 + 1]))));
    }
}
