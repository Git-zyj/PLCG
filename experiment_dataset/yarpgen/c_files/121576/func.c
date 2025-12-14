/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121576
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)111))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) + ((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-1977769738173040029LL))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)117)) ? (var_0) : (3180170689488143207LL)))) <= (arr_1 [i_1] [i_1])));
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3180170689488143187LL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3180170689488143204LL)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) arr_4 [(unsigned char)3]))))) : (arr_1 [i_1] [i_1]));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_8)) ? (arr_12 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)11])))))));
                        arr_15 [i_2] [i_3] [i_4] [i_2] [i_4] [i_5] = (-(((3180170689488143207LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))));
                        arr_16 [i_5] [i_4] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3 + 3] [i_3 + 1])) ? ((-(((/* implicit */int) arr_5 [i_5])))) : (((((/* implicit */int) (signed char)-95)) + (((/* implicit */int) (signed char)63))))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] = ((/* implicit */_Bool) ((((arr_10 [i_2]) | (-3180170689488143187LL))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-63)))));
        var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (653586251545203406LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) & (min((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3180170689488143208LL)))))));
    var_16 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) -1053862129)), (17451448556060672ULL))), (((/* implicit */unsigned long long int) var_1))));
    var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)1)))));
}
