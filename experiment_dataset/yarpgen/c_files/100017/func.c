/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100017
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
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (3610898741U))))))), (var_0)));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((((var_7) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)229))))) ? (max((var_5), (((/* implicit */int) (unsigned char)232)))) : (((/* implicit */int) ((_Bool) var_1)))))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) var_9)), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) max(((unsigned char)26), ((unsigned char)26))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3007923363914683764ULL)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1454))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) 3007923363914683764ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)207))))))));
        var_14 += ((/* implicit */long long int) max((((((/* implicit */_Bool) 3007923363914683764ULL)) ? (max((1430395623U), (((/* implicit */unsigned int) (unsigned char)18)))) : ((~(1430395614U))))), ((+(2252364003U)))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_5))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [3U] [i_1] = ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)228))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) 0U)) : (10924275500381663884ULL)))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1 - 1])) : ((-(((/* implicit */int) (unsigned char)40))))));
    }
    for (int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        var_16 *= ((/* implicit */_Bool) var_2);
        var_17 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [(short)2])) ? (var_5) : (((/* implicit */int) var_9)))), ((+(((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned short)65529))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 13; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_24 [10LL] [i_3] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)9))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)65525)) * (((/* implicit */int) (unsigned char)0)))))))));
                    var_19 &= ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) & (arr_19 [i_3] [i_3])))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_1)));
                    arr_25 [i_3] [i_4 - 3] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
        arr_26 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -8556646106164651875LL)) ? (2864571681U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3])))));
        arr_27 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (1430395607U))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) var_4)))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)20))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            for (short i_7 = 3; i_7 < 14; i_7 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2491937271U)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)12)))) >> ((((~(8556646106164651875LL))) + (8556646106164651880LL)))));
                    arr_35 [i_3] [i_3] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
}
