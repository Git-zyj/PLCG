/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171638
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1945792564)))) && ((_Bool)1))))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((arr_9 [i_0] [i_1] [i_2] [i_3 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) -1945792564)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1945792564))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_16 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */int) ((((max((arr_14 [i_0] [i_0] [i_5]), (arr_7 [i_0] [i_4] [i_4] [i_4]))) <= (var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_14)) << (((1226869784) - (1226869762))))) : (var_15)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (max((18ULL), (((/* implicit */unsigned long long int) var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_7);
                                arr_22 [i_0] [8ULL] [i_4] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                                var_22 *= ((/* implicit */unsigned int) ((unsigned short) (~(-1226869792))));
                            }
                        } 
                    } 
                    arr_23 [i_4] = (-(((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_5] [i_4])) && (var_12)))) : (max((var_1), (((/* implicit */int) (unsigned char)177)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)49)), ((~(((int) (_Bool)1))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (_Bool)1))));
                                arr_29 [i_0] [i_0] [4ULL] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) (~((+(1945792562)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */int) var_17);
        arr_30 [i_0] = ((/* implicit */_Bool) ((signed char) var_15));
        var_26 = ((/* implicit */_Bool) (unsigned char)58);
    }
    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
    var_28 = ((/* implicit */unsigned int) max((max(((~(((/* implicit */int) (signed char)70)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (_Bool)1)))))), (((max((var_2), (((/* implicit */int) var_14)))) / (((/* implicit */int) (unsigned char)198))))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_29 = ((/* implicit */signed char) ((arr_31 [i_10 + 1]) ? (((/* implicit */int) arr_31 [i_10 + 2])) : (((/* implicit */int) (signed char)-59))));
                arr_36 [i_10 - 1] [i_10 + 3] [i_10 - 1] = ((/* implicit */unsigned short) (~(max((((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_5)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 15; i_12 += 1) 
                {
                    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_30 *= -1;
                            var_31 = ((/* implicit */unsigned char) arr_37 [i_10] [i_10] [(_Bool)1]);
                            arr_41 [(_Bool)1] [(_Bool)1] [i_13] = ((/* implicit */unsigned int) ((max(((+(2072498868U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_13] [i_11] [i_12]))))))) >= (((/* implicit */unsigned int) ((arr_31 [i_13 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_13 + 2])))))));
                            arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2072498868U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                            var_32 *= ((/* implicit */_Bool) (-((((+(2700113552U))) << (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 14; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_33 += ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2222468439U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65531))))), (((((/* implicit */_Bool) var_18)) ? (4294967295U) : (((/* implicit */unsigned int) var_18))))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 773755407)))))) : ((((_Bool)1) ? (5779496482924564916ULL) : (((/* implicit */unsigned long long int) arr_44 [i_10] [i_11] [i_11]))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_2)) + (((arr_44 [i_15] [i_15] [i_14]) >> (((((/* implicit */int) var_10)) - (70)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
