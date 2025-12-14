/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184274
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (max((min((((/* implicit */unsigned long long int) var_8)), (9577251033469879662ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (short)23861)) : (((/* implicit */int) (unsigned short)32767))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned short)29054))) ? (arr_8 [i_1 - 1] [i_1] [i_2 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)44060))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((signed char) arr_4 [i_2 - 1]));
                                var_17 = ((/* implicit */unsigned char) arr_2 [i_0]);
                            }
                        } 
                    } 
                    var_18 |= arr_12 [i_0] [i_0] [i_1] [i_2 - 1] [i_2];
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_6))));
                                var_20 = ((/* implicit */short) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1] [(unsigned short)2] [i_1 - 2] [i_2 - 1] [i_6 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [14] [i_0] [i_0]))));
    }
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */signed char) ((unsigned char) ((unsigned short) ((_Bool) (short)15972))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 4; i_10 < 15; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-15966)), (arr_0 [i_9] [i_10 - 3]))))));
                            var_24 = max((arr_23 [i_7]), (min((arr_23 [i_11]), ((short)15972))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) max(((short)15977), ((short)15977)));
        }
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) max((-1279508327), (arr_14 [0LL] [i_7] [(signed char)4] [i_7] [i_7]))))), ((+(((/* implicit */int) (_Bool)1)))))))));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), ((unsigned short)36153))))))))))));
        var_28 = ((/* implicit */unsigned short) var_6);
    }
    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
    {
        var_29 = ((((/* implicit */int) ((_Bool) (-(4875550522724031346LL))))) & ((~(((/* implicit */int) (unsigned char)243)))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((arr_28 [i_12] [i_12] [i_12] [i_12]), (arr_28 [i_12] [i_12] [i_12] [i_12])))) : (((((/* implicit */int) arr_28 [i_12] [i_12] [i_12] [i_12])) * (((/* implicit */int) arr_28 [i_12] [(short)0] [i_12] [i_12]))))));
    }
    var_31 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-15984))))) + (((((/* implicit */_Bool) (short)25699)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (3484249477U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)15972)) + (((/* implicit */int) (_Bool)1)))))));
    var_32 = min((((/* implicit */unsigned long long int) ((1273563714U) != (((/* implicit */unsigned int) ((var_7) ? (var_5) : (var_10))))))), (max((((/* implicit */unsigned long long int) (unsigned char)215)), (((12917049147430228917ULL) + (((/* implicit */unsigned long long int) var_8)))))));
}
