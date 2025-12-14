/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150200
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (+(arr_2 [i_0 + 2])));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */signed char) ((arr_8 [i_0 - 2] [i_0 - 3] [(_Bool)1] [i_2 - 1] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1] [i_0 + 2] [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 1] [i_0])) : (var_6)))));
                        arr_10 [3] [(_Bool)1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) (unsigned short)18507))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)18490)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_5 [9ULL] [i_4 - 1] [i_5]))));
                    arr_17 [(unsigned short)14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (((arr_13 [i_0] [i_4 + 1]) / (((/* implicit */long long int) 273108859))))));
                }
            } 
        } 
    }
    for (short i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        arr_20 [i_6 + 1] = ((/* implicit */signed char) ((long long int) (short)-32757));
        var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_7) : (3546822633U)))) : (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_6 + 2]))) ? (((/* implicit */int) ((short) var_13))) : (((arr_18 [i_6]) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) arr_18 [i_6 + 3])))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_21 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)92)))) >= (((/* implicit */int) var_13)))) ? (((/* implicit */int) ((unsigned short) -273108874))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_3))) && (((((/* implicit */_Bool) (short)32757)) || (var_1))))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 3; i_9 < 21; i_9 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (signed char)-68);
                    arr_28 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */signed char) ((1599791854375030788LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-103)))));
                    arr_29 [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)109)) + (-681708454)))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_7] [i_9 + 1] [i_9]))))), (((unsigned char) arr_26 [i_7] [i_9 - 1] [i_9 + 2])))))));
                }
            } 
        } 
        arr_30 [i_7] = arr_27 [i_7] [i_7] [i_7];
    }
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) var_7);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                arr_44 [i_12] [i_12] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) max(((signed char)44), ((signed char)-89)))))), (((((unsigned int) 273108860)) == (arr_25 [i_11 - 1] [3ULL])))));
                                var_25 = 4294967282U;
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)4813))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)64))))) : ((-(min((((/* implicit */unsigned int) var_3)), (var_11)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) max((var_27), (((((arr_26 [(_Bool)1] [i_11] [i_11 - 1]) | (arr_26 [12U] [12U] [i_11 - 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-114))))))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 2; i_15 < 10; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 3; i_16 < 10; i_16 += 3) 
                        {
                            {
                                var_28 |= ((/* implicit */short) (-((+(((/* implicit */int) (_Bool)1))))));
                                var_29 -= ((/* implicit */long long int) min(((signed char)-60), ((signed char)-114)));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-63))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_11] [i_11] [i_11 - 1]))))) : (var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
    {
        for (short i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            {
                var_31 = ((/* implicit */int) (!((!(arr_53 [i_17] [i_18])))));
                var_32 &= ((/* implicit */_Bool) max((arr_24 [i_17]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_6)))))))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 4294967284U)) | (6950653457470010368ULL)));
            }
        } 
    } 
}
