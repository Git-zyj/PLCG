/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103215
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_3)))))) ? (((/* implicit */int) ((((((/* implicit */int) (short)5832)) / (((/* implicit */int) (short)20805)))) >= (((((/* implicit */_Bool) 364767057U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))) : ((+(((/* implicit */int) var_9))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) 16635071051401278821ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */short) ((min((((/* implicit */unsigned int) max((var_12), (var_12)))), (max((((/* implicit */unsigned int) (unsigned char)131)), (var_6))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-13121)))));
                    arr_10 [3U] [9ULL] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1] [5U])) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_20 [i_3] [i_4] = ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_3] [i_4] [i_5]))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1958133665U))))) : (((/* implicit */int) arr_19 [i_5])))))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) (+(((unsigned int) var_7))));
        var_18 = ((/* implicit */short) (unsigned char)125);
    }
    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    arr_28 [6U] [6U] [i_6] [6U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_24 [i_6] [i_6] [i_8]), (((/* implicit */unsigned int) (short)13772))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)13009))))) : (max((0U), (((/* implicit */unsigned int) (unsigned short)52526))))))) <= (var_7)));
                    arr_29 [i_6] [(signed char)15] [i_6] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) (unsigned short)52526)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) max((var_0), ((short)32743)))))), (((/* implicit */long long int) ((short) arr_21 [i_8])))));
                }
            } 
        } 
        arr_30 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)102)), ((unsigned short)13009)));
        arr_31 [i_6] = ((/* implicit */signed char) var_7);
        arr_32 [(unsigned short)16] |= ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)13009)))) > (((/* implicit */int) max((((/* implicit */short) (unsigned char)83)), ((short)-4453))))));
        var_19 *= ((/* implicit */short) (+(((((((/* implicit */int) (short)-10345)) + (2147483647))) << (((242946271U) - (242946271U)))))));
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55176)) ^ (((/* implicit */int) arr_33 [i_9] [(_Bool)1]))))) % (var_7)));
        var_21 = ((/* implicit */unsigned char) (+(137065557U)));
    }
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((signed char) var_9))), (max((var_11), (((/* implicit */short) (signed char)-110)))))))) : (max((((((/* implicit */_Bool) -1891634742)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (-2111852657) : (((/* implicit */int) var_10)))))))));
}
