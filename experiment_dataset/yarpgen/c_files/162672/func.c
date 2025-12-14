/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162672
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
    var_15 += ((/* implicit */unsigned long long int) ((unsigned char) ((var_2) && (((/* implicit */_Bool) var_4)))));
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)4786)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((short) max(((_Bool)1), ((_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) (!(max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_3 [i_4] [i_1] [i_1]))), ((_Bool)1)))));
                                arr_13 [i_4 + 1] [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((arr_2 [i_2] [i_3 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)181), (((/* implicit */unsigned char) (_Bool)1))))))))));
                                var_19 += ((/* implicit */signed char) ((long long int) ((long long int) (unsigned short)16380)));
                                arr_14 [i_3] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) (unsigned short)7)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_1] [i_1] [4])) >= ((~(((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0] [i_1]))), (max((((/* implicit */unsigned long long int) (unsigned char)75)), (0ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!((_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                arr_29 [i_5] [i_6] [i_5] [i_7] [i_8] [i_9] [i_9 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1058641663468009331ULL)))) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)127)) * (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) (-(-278904153395703412LL))))));
                                arr_30 [i_9 + 1] [(_Bool)0] [i_7] [i_7] [(_Bool)0] [(short)14] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_25 [i_5]))))), (max((((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5])), (2999269265679254631ULL)))))));
                                arr_31 [i_9] [i_6 + 1] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) 2130706432)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) var_7))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_24 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))))));
                                arr_32 [i_5] [i_5] [i_9] [i_9] [i_9] [i_9 + 1] = ((/* implicit */unsigned char) ((((max((var_9), (((/* implicit */unsigned long long int) var_0)))) * (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) 1475971029)) : (arr_22 [i_5] [i_6 + 2] [i_7])))) ? ((-(((/* implicit */int) (signed char)41)))) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-42))))))))));
                                var_22 = ((/* implicit */unsigned char) max((((max((var_11), (((/* implicit */long long int) 0)))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))), (((/* implicit */long long int) (-(arr_22 [i_9] [i_9 + 1] [i_6 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_23 = -1191374528435002452LL;
                                arr_39 [i_5] [i_6] [i_7] [(signed char)20] [i_11] [i_11] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) * (33554431LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 22; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(2147483647))), (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)65529))))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (unsigned short)30776)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) arr_37 [i_12 + 1]))))));
                                var_25 = ((/* implicit */short) ((17388102410241542285ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1475971029)) ? (arr_42 [i_5] [i_6] [i_5] [i_12] [i_13]) : (-4702161273118240208LL))))));
                                arr_44 [i_5] [i_6 - 3] [i_7] [i_12 + 2] [i_13] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -33554452LL)) ? (-1462837003) : (-1261855173)))) && (((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_5] [i_5] [i_5])))))) * (max((((/* implicit */unsigned long long int) -15LL)), (15663808314901601470ULL))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) / (-8945662934815476702LL))))));
                                var_27 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-42)) ? (var_11) : (arr_36 [10U] [i_6 - 4] [i_6 + 1] [i_7] [i_12 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 923138613)) ? (max((18140852105190229968ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((((/* implicit */_Bool) -1347674719)) ? (305891968519321621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41)))))))) ? ((+(((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))) & (var_11))))));
                                var_29 = ((/* implicit */long long int) var_12);
                                arr_49 [i_5] [i_5] [i_5] [i_15] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                                arr_50 [i_5] [i_5] [i_5] [16ULL] [(_Bool)1] [i_5] [i_5] |= ((/* implicit */signed char) (~((+(134213632LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
