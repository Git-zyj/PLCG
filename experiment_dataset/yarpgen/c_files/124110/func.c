/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124110
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((((/* implicit */int) (short)-14468)) ^ (((/* implicit */int) (_Bool)1)));
        var_14 = (-(((/* implicit */int) (short)6396)));
        var_15 += ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [15LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19802))) : (2819382616U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (3381319177505852025ULL)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_4 [i_1] |= ((/* implicit */int) (_Bool)1);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)114)) : (arr_2 [i_1]))))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((short) arr_1 [i_1])))));
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1]))));
    }
    var_20 = ((/* implicit */int) (((-((~(var_8))))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_21 *= ((/* implicit */long long int) ((((/* implicit */int) (short)19801)) > (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) (signed char)-67)) ? (arr_6 [i_2]) : (((/* implicit */int) arr_5 [i_2]))))))));
        var_22 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_6 [i_2])), (min((((/* implicit */long long int) (unsigned char)255)), (var_0)))));
        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1900128107954826537LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_2])))) : (((3ULL) & (((/* implicit */unsigned long long int) arr_6 [i_2]))))))) ? (min((arr_6 [i_2]), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (short)19802)) : (((/* implicit */int) (short)-19774)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_2]))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_24 = ((/* implicit */long long int) var_5);
        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))))))));
    }
}
