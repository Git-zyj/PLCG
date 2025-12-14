/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188196
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_3) > (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 5820746945343634029LL)))))) : (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_16 = min((((/* implicit */unsigned short) ((min((((/* implicit */int) (_Bool)0)), (-1705918070))) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))), (min((min((((/* implicit */unsigned short) (_Bool)1)), (var_9))), (((/* implicit */unsigned short) arr_0 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = ((((/* implicit */int) min((arr_5 [9U] [1LL] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))))) != (((/* implicit */int) min((((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (short)-24981))))), (var_12)))));
                        arr_12 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) & (((((/* implicit */long long int) var_4)) - (5820746945343634046LL)))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)181))))))) : (min((((((/* implicit */_Bool) (short)-24981)) ? (5820746945343634029LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))), (((/* implicit */long long int) (!((_Bool)1))))))));
                    }
                } 
            } 
        }
        var_17 = var_1;
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_18 += ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_15 [i_4] [i_4] [i_4])), (var_0)));
                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_6] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_5] [i_4]))) : (((((/* implicit */_Bool) (signed char)8)) ? (var_7) : (var_7))))) ^ (var_7)));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)181))) ? (var_4) : (min((min((var_13), (var_0))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))))));
            }
            var_21 = ((/* implicit */short) var_14);
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    arr_24 [i_4] [i_7] [i_8] = ((/* implicit */long long int) arr_23 [i_4] [i_7] [i_8]);
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)107)), ((~(arr_21 [i_4] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((((/* implicit */_Bool) arr_17 [i_4] [i_7] [i_7])) ? (((/* implicit */long long int) var_2)) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (short)31134))))))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)30)), (arr_13 [i_9])))))));
        var_24 -= ((/* implicit */unsigned char) ((var_8) << (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10312))) | (arr_21 [i_9] [i_9])))))));
        var_25 = ((/* implicit */long long int) (unsigned char)72);
    }
    var_26 |= ((/* implicit */unsigned short) (((+((-(var_0))))) << (((/* implicit */int) (_Bool)1))));
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? ((+(var_3))) : (((/* implicit */int) var_6))))), (min((((/* implicit */long long int) var_13)), (var_7))))))));
}
