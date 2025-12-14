/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138815
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) 343549714);
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-24119)) != (((((/* implicit */int) arr_3 [i_2] [i_1])) ^ (((/* implicit */int) arr_3 [i_3] [i_2]))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_8 [i_0] [i_1] [i_1] [i_3])))) ? (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16)))))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (signed char)15))))) : (1031835859U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min(((signed char)(-127 - 1)), ((signed char)77))))))));
                        var_21 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_8 [i_3] [i_2] [i_1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))))))))) < (((((/* implicit */int) arr_5 [i_0 - 1] [i_2])) | (((/* implicit */int) var_6))))));
                    }
                } 
            } 
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
            var_22 = ((/* implicit */unsigned short) ((((max((((/* implicit */int) (_Bool)1)), (-1591422430))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)72))))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1] [i_1] [i_1] [i_0])), ((-(((/* implicit */int) (unsigned short)60538)))))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0 + 3] [i_4 + 2])))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_4] [i_1]))) : ((-(arr_0 [i_1] [i_0 + 3])))));
                var_23 = ((/* implicit */unsigned char) (_Bool)1);
                var_24 = ((/* implicit */short) var_6);
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) | ((+((+(arr_0 [i_0] [i_0])))))));
            }
        }
        arr_17 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */short) arr_10 [i_0])), (arr_3 [i_0 - 1] [i_0])))), (max((arr_8 [(signed char)14] [(signed char)9] [i_0 + 1] [i_0]), (((/* implicit */long long int) (signed char)0))))))) && ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
        arr_18 [i_0] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 3])))));
    }
    for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
    {
        arr_21 [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) var_4))), (((((/* implicit */_Bool) (signed char)-15)) ? (arr_19 [i_5 - 3]) : (var_3)))))) ? ((-(((/* implicit */int) max((arr_20 [i_5] [i_5]), (arr_20 [i_5] [i_5])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5] [i_5])) << (((343549730) - (343549706)))))) ? ((+(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) ((arr_19 [i_5 - 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)15] [(unsigned short)15]))))))))));
        var_25 = ((/* implicit */signed char) arr_19 [i_5 - 1]);
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        arr_24 [i_6] &= ((/* implicit */_Bool) (signed char)30);
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-84)))) + ((-(((/* implicit */int) (signed char)-77))))));
                        arr_33 [(signed char)18] [i_8] [i_7] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (511) : (((/* implicit */int) (signed char)-120))))) || ((!(((/* implicit */_Bool) 84263935)))))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (unsigned char)19))));
                        arr_34 [i_9] [i_9] [i_8] [i_7] [i_6] = ((/* implicit */unsigned char) (+(((min((((/* implicit */unsigned long long int) (signed char)2)), (arr_32 [i_6] [i_7] [i_8] [i_9] [i_6]))) >> (((11389067009865479599ULL) - (11389067009865479593ULL)))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) (signed char)-2);
    }
    var_29 *= ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        arr_37 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_10] [i_10] [i_10])) - (-1552617451)))) ? ((-(((/* implicit */int) (signed char)117)))) : ((((_Bool)0) ? (((/* implicit */int) arr_10 [i_10])) : (((/* implicit */int) arr_20 [i_10] [i_10])))));
        var_30 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10])) ? (2070721297195573980ULL) : (((/* implicit */unsigned long long int) arr_23 [i_10]))));
    }
}
