/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170730
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
    var_12 = ((/* implicit */unsigned short) ((2292391689U) % (((((/* implicit */_Bool) (+(10634712672706933767ULL)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))))));
    var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_2))));
    var_14 = ((/* implicit */_Bool) ((unsigned long long int) var_4));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_15 -= ((/* implicit */_Bool) (unsigned short)65535);
        var_16 *= ((/* implicit */unsigned short) arr_0 [i_0 - 2]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (var_4))))))));
                    var_18 -= ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0] [5])))) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (3967287395U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1]))))) : (min((min((1342071591U), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)26154))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_13 [i_0] = ((/* implicit */unsigned long long int) (-((+((-(-895960640)))))));
                    var_19 = ((/* implicit */unsigned short) arr_12 [i_0 - 1] [i_0 - 2] [7]);
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_4] [i_3] [i_4])), (arr_4 [i_0 - 4] [i_0] [i_0])));
                }
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_5 [i_5 - 3] [i_5 + 1]))))));
        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_5] [i_5]))))) : ((~(arr_14 [i_5 - 3] [i_5])))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (_Bool)1))));
                    arr_24 [i_6] = ((/* implicit */_Bool) arr_9 [i_5 - 3] [i_7]);
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -631690400)) * (((((unsigned int) 3235288859U)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)11768)) : (((/* implicit */int) arr_5 [i_7] [i_8])))))))));
                        var_24 *= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)65535)), ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2437087463U)))));
                        arr_30 [i_6] [i_6] [i_7] [(unsigned short)2] = ((/* implicit */int) (~(var_4)));
                        var_26 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_6] [i_6] = ((((/* implicit */_Bool) (unsigned short)60886)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [i_10] [i_5 - 1] [i_5 - 3]))) : (arr_3 [i_7] [(_Bool)1] [i_7]));
                        var_27 -= ((/* implicit */unsigned char) ((unsigned int) arr_32 [i_7] [i_6] [i_7] [i_7]));
                    }
                    arr_36 [i_7] [i_6] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_6] [i_5 + 1] [i_5 - 2])) ? (arr_20 [i_5] [i_5 + 1] [i_5 + 2]) : (arr_20 [i_7] [i_5 + 1] [i_5 - 2])))));
                    arr_37 [i_5] [i_6] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65534)), (arr_8 [i_5] [i_5] [i_5] [i_5 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [10U] [10U] [i_7] [i_5]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3233867970U))))))))) : (max((((/* implicit */unsigned long long int) (!((_Bool)0)))), (var_10)))));
                }
            } 
        } 
    }
}
