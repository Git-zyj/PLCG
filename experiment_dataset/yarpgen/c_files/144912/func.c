/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144912
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2809184369941803887ULL)))) ? ((-(15637559703767747725ULL))) : (((((/* implicit */_Bool) -4318635016188665121LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (2809184369941803870ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)0))))) ? (((-3066523872215061601LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))))) : (((0LL) >> (((/* implicit */int) (unsigned char)13))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) ? (arr_2 [i_2]) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) (short)-13059)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (1U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_2])))))));
                    var_19 |= ((((/* implicit */_Bool) ((int) ((_Bool) 0U)))) && (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) + (var_0)))))));
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)233)))) << (((((((/* implicit */int) (_Bool)1)) << (((4376030631527516565ULL) - (4376030631527516554ULL))))) - (2046)))))) | (2LL)));
                    arr_8 [i_1] [i_1] |= ((/* implicit */unsigned int) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) > (4605443269331825174ULL)))) & (((/* implicit */int) ((((/* implicit */long long int) 3125568894U)) == (-6594783363158406374LL))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) (-((-((-(3125568894U)))))));
        var_21 = ((/* implicit */_Bool) ((((5947940093961901736ULL) ^ (1373581454124911848ULL))) | (((/* implicit */unsigned long long int) ((((_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) : (var_11))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), ((-((-(5781401995873833080ULL)))))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_3] [i_3]))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)20))))) : (arr_15 [14])));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) arr_16 [1U] [i_4])))))));
        var_24 = ((/* implicit */unsigned long long int) ((((arr_17 [i_4 + 1]) + (9223372036854775807LL))) >> (((((7038963532185481666ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2248))))) - (7038963532185481421ULL)))));
        arr_19 [i_4] [i_4] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (var_11));
        arr_20 [i_4] [i_4 + 1] = ((/* implicit */_Bool) (-(1066059299U)));
    }
    for (long long int i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) max((min((8381037897792574423LL), (((/* implicit */long long int) (unsigned char)192)))), (((/* implicit */long long int) 2442792426U))));
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_34 [i_8] [(_Bool)1] [(_Bool)1] [i_5 - 1] |= ((/* implicit */unsigned int) (-((-(((((/* implicit */int) arr_13 [i_5] [i_5])) % (((/* implicit */int) var_12))))))));
                        var_25 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 3554883012442208603LL)) || (((/* implicit */_Bool) -1LL)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                        arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((554153860399104ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */int) (((-(((/* implicit */int) var_4)))) == (((/* implicit */int) ((_Bool) var_5)))))) & (((/* implicit */int) var_2))));
                    }
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
        {
            arr_43 [i_5] = ((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (4208130937225023172LL)));
            var_28 ^= ((/* implicit */signed char) var_6);
        }
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            arr_46 [14ULL] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) 2964670157U)) ^ (1742946082171375020LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((var_11) % (((/* implicit */long long int) var_8))))))));
            var_29 = ((/* implicit */short) max((((((/* implicit */_Bool) 2442792426U)) ? (((/* implicit */long long int) 1330297138U)) : (-780183196643911526LL))), (((/* implicit */long long int) arr_10 [i_5] [i_5]))));
            arr_47 [i_5 + 1] [(short)11] [i_5] = (-((-(arr_37 [i_5 - 1] [i_5 - 1] [0LL] [i_5]))));
        }
    }
    var_30 = ((/* implicit */unsigned long long int) var_14);
}
