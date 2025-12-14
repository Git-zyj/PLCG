/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105120
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
    var_20 = ((/* implicit */short) var_17);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_21 = (-(((((/* implicit */_Bool) 8U)) ? (-2570819176867775999LL) : (((/* implicit */long long int) 3840644728U)))));
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1632178386)), (14515040587189253964ULL)));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)27)), (0LL)))) + ((-(((((/* implicit */_Bool) 1028111609U)) ? (9007199252643840ULL) : (((/* implicit */unsigned long long int) 2413690833U)))))))))));
                    }
                    var_24 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 11LL)) ? (12967411631259213931ULL) : (15179982701074788894ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-30565)) : (arr_8 [i_0 + 1] [i_2] [i_2] [i_0 + 1]))))));
                    arr_9 [i_0] [(signed char)8] [7LL] [i_2] = ((/* implicit */short) ((unsigned int) (signed char)-82));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_25 = ((/* implicit */int) var_18);
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        arr_16 [i_0] [i_4] [i_0] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_20 [i_0] [i_6] [i_5] [i_4] [i_6] [i_0] |= ((/* implicit */long long int) (-(max((1251632157U), (19U)))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_19))));
                            arr_21 [i_0] = ((/* implicit */unsigned char) (+(((((((/* implicit */int) arr_4 [i_5] [i_5])) > (arr_10 [10LL]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_4] [i_4] [i_6] [i_7])) & (((/* implicit */int) arr_6 [i_4] [i_4] [5U] [i_0]))))) : ((-(var_5)))))));
                        }
                        var_27 ^= ((/* implicit */int) min((((/* implicit */long long int) 1251632157U)), (6888043127990161421LL)));
                        arr_22 [2LL] [i_0] [i_5] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) arr_1 [i_4]);
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) max((((((/* implicit */int) ((short) var_12))) / (var_7))), (arr_10 [i_0 - 2])));
        }
        arr_23 [i_0] = ((/* implicit */unsigned int) ((signed char) (short)-30908));
    }
    for (long long int i_8 = 3; i_8 < 16; i_8 += 2) /* same iter space */
    {
        arr_26 [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)-82)) & (((((/* implicit */_Bool) 1886731737U)) ? (((/* implicit */int) var_9)) : (2147483647)))))));
        arr_27 [i_8] = ((/* implicit */long long int) ((((((var_11) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_8 - 3] [i_8] [i_8] [2])) + (((/* implicit */int) arr_2 [(signed char)2])))) - (5900))))) / (-904994271)));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 4; i_12 < 12; i_12 += 4) 
                {
                    {
                        var_29 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */int) arr_18 [(unsigned short)16] [9U] [i_11] [(unsigned short)16] [i_12])) : (((((/* implicit */_Bool) -8LL)) ? (((/* implicit */int) var_15)) : (arr_10 [i_12]))))));
                        arr_36 [i_12] [i_12] |= (-(((/* implicit */int) (signed char)82)));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 5940570029831826099ULL)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) var_4))))) ? (max((((/* implicit */long long int) arr_17 [i_9] [i_12] [i_9] [i_9] [i_9])), (var_0))) : (((/* implicit */long long int) ((int) (signed char)44))))))))));
                        arr_37 [i_12] [i_10] [6] [i_12] [i_12] [(_Bool)1] &= ((/* implicit */_Bool) min(((-(2097151LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(1099243192320LL)))) ? (max((var_2), (((/* implicit */int) arr_30 [i_11])))) : (((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_13 = 1; i_13 < 14; i_13 += 4) 
        {
            arr_40 [i_9] [i_13 - 1] = ((/* implicit */int) (unsigned short)6776);
            var_31 = ((/* implicit */unsigned long long int) (unsigned char)240);
        }
        arr_41 [i_9] = ((/* implicit */short) var_17);
    }
    var_32 = ((/* implicit */unsigned long long int) var_2);
}
