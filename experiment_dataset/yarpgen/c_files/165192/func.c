/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165192
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_10 |= min((((/* implicit */unsigned long long int) min((arr_9 [i_3 + 1] [i_3] [i_3] [i_0 + 1]), (arr_9 [i_3 - 2] [i_3] [i_3] [i_0 + 1])))), (((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3] [i_3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 2] [i_3] [i_3] [i_0 - 1]))) : (var_3))));
                        arr_11 [i_0] [i_3] |= ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) ^ (var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-21259))))))))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3] = ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [5LL] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_0))), (((/* implicit */long long int) min((arr_6 [i_0 + 1] [i_1] [i_0 + 1] [(unsigned short)18]), ((unsigned char)87))))))) ^ (((max((((/* implicit */unsigned long long int) (short)5625)), (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [14LL])))))))));
                        var_11 -= ((/* implicit */unsigned short) ((min((min((((/* implicit */long long int) (unsigned char)148)), (var_5))), ((-(var_0))))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [i_3])))))), ((unsigned char)130)))))));
                        var_12 = ((/* implicit */long long int) arr_10 [i_0] [i_2] [i_1 + 1] [i_0]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 4; i_4 < 17; i_4 += 3) 
        {
            for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        arr_22 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_1 [i_4])))), (((((/* implicit */int) arr_0 [i_0] [0LL])) + (((/* implicit */int) arr_6 [i_0] [i_4] [i_5] [i_6 - 1]))))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)41254))))), (((239065374488633567ULL) >> (((((/* implicit */int) (unsigned short)41259)) - (41242))))))));
                        arr_23 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_0])), ((~(((/* implicit */int) (unsigned char)243))))));
                        arr_24 [i_0] [i_4 + 2] [i_5 + 1] [11LL] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5404366096853347896ULL)) && (((/* implicit */_Bool) 4236120453879319265LL))))), (((((/* implicit */_Bool) var_7)) ? (13042377976856203709ULL) : (var_8))))), (((arr_4 [i_6] [i_0] [i_6]) / (((/* implicit */unsigned long long int) arr_14 [i_4 + 1] [i_5 + 3] [i_6 - 1]))))));
                        var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_4] [i_5] [i_0])), (arr_15 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (short)-19025))))));
                        arr_25 [i_0] [9] [i_0] [9] [i_5 + 1] [i_6 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)6997))));
                    }
                    var_14 += (short)2047;
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 16; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_1), (arr_0 [i_7 - 4] [i_8 + 1])))) + (2147483647))) << (((max((16715860871045611899ULL), (((/* implicit */unsigned long long int) var_9)))) - (16715860871045611899ULL)))))), (((((/* implicit */_Bool) min((-8452146872716465843LL), (((/* implicit */long long int) (short)3132))))) ? (((((/* implicit */_Bool) -4255196854039419564LL)) ? (13492650962596858361ULL) : (((/* implicit */unsigned long long int) 2233865267707978031LL)))) : (((/* implicit */unsigned long long int) -4255196854039419588LL))))));
                                var_16 = ((/* implicit */int) (unsigned char)151);
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_4 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 4255196854039419588LL)) & (5404366096853347896ULL))), (((/* implicit */unsigned long long int) arr_20 [i_0]))))) ? (((((/* implicit */_Bool) 4255196854039419614LL)) ? (arr_27 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_0]) : (arr_27 [i_5 + 3] [i_5] [i_5 - 1] [i_0]))) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)135)), ((short)32767)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)4] [i_0]))))) : (arr_28 [i_0])))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-20985)), (var_5)))) ? ((-(((/* implicit */int) (short)8435)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) var_6))))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_6))) != (var_4))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (max((((/* implicit */unsigned long long int) (unsigned char)253)), (8656728080797742027ULL)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_4), (4255196854039419588LL)))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_7)));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_4))));
}
