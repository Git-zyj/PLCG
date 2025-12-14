/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106091
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
    var_10 = ((/* implicit */_Bool) min((var_10), ((!(((/* implicit */_Bool) var_6))))));
    var_11 ^= ((/* implicit */unsigned short) ((unsigned char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-70))))));
    var_12 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (2147483647)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)-74))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9)))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_15 -= ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) ((signed char) (unsigned char)255))) : (((((/* implicit */int) arr_6 [i_3] [6] [7] [7])) >> (((7254472932105866534LL) - (7254472932105866513LL))))));
                        var_16 += ((/* implicit */unsigned short) (signed char)69);
                        var_17 -= ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_1]);
                        var_18 += var_8;
                        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) arr_8 [i_3] [i_2 + 2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)2160)) : (((/* implicit */int) arr_8 [(unsigned short)15] [i_2 + 1] [i_1] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_20 -= ((/* implicit */signed char) ((((unsigned int) 4194303U)) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                        var_21 = ((/* implicit */int) (((-(2147221504U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                    }
                } 
            } 
        } 
        arr_19 [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)192))))) : ((+(((/* implicit */int) arr_4 [i_4] [15] [i_4]))))))) : ((-(((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))))))));
    }
    var_22 -= ((/* implicit */short) ((((((/* implicit */int) var_6)) != (((/* implicit */int) var_7)))) ? ((((-(((/* implicit */int) (signed char)-63)))) ^ (((((/* implicit */int) (short)31)) + (-1))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
}
