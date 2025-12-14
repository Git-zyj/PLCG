/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156137
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
    var_13 &= ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)163)) == (((/* implicit */int) (unsigned short)10013))));
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            var_14 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_5 [i_0] [i_1 - 1] [i_1]))) > (((int) var_9))))), ((unsigned short)41771)));
            arr_7 [i_1 - 4] |= ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)32256)))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */int) var_8))))))) < (((/* implicit */int) var_6))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_11 [i_0] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_5 [i_0 - 1] [i_2] [i_2]))) ? (((/* implicit */int) min((((unsigned short) arr_9 [i_0] [i_2])), (min((((/* implicit */unsigned short) var_1)), (var_7)))))) : (((/* implicit */int) ((((/* implicit */int) ((arr_10 [i_0 + 1] [i_0 + 1] [i_2]) != (((/* implicit */unsigned int) 1446716220))))) < (((/* implicit */int) var_5)))))));
            var_15 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) ((unsigned short) arr_2 [i_2] [i_0]))) != ((+(((/* implicit */int) arr_6 [i_2] [i_2] [i_2])))))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1415319960U)), (min((2935468450688105073ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])))))))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_8 [i_0 + 1]))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        var_18 &= ((/* implicit */_Bool) arr_5 [i_3] [i_4] [i_5 - 1]);
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)32256)) ? (((/* implicit */int) (unsigned char)75)) : (arr_5 [i_0] [i_4] [i_5 - 2]))) : (((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_3])))));
                        var_20 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_0] [i_3]));
                        var_21 -= ((/* implicit */_Bool) var_0);
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_9))));
                        var_23 = ((/* implicit */unsigned long long int) var_0);
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_0] [i_3] [i_6] [i_0])) : (((/* implicit */int) arr_20 [i_4]))))) ? (((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)203)))) : (((/* implicit */int) var_9))));
                        var_25 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)10013)))))));
                    }
                    var_26 *= ((/* implicit */unsigned char) ((short) ((int) min((var_2), (arr_9 [i_0 + 2] [i_0 + 2])))));
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_3 [i_4 + 2])))) ? (min((((unsigned int) arr_8 [i_4 + 1])), (((/* implicit */unsigned int) ((((var_4) + (2147483647))) << (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_3)))))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), ((unsigned short)52406)));
        var_29 = ((unsigned char) min((-2042326021), (((/* implicit */int) ((unsigned short) (_Bool)0)))));
    }
    var_30 = (unsigned char)98;
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            {
                var_31 -= ((/* implicit */unsigned long long int) (unsigned char)32);
                var_32 -= ((/* implicit */unsigned long long int) ((unsigned char) (~(((((/* implicit */int) (unsigned short)16257)) & (((/* implicit */int) arr_27 [i_8])))))));
            }
        } 
    } 
}
