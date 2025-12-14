/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18626
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
    var_16 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) (((~(((/* implicit */int) arr_1 [i_0])))) <= ((~(((/* implicit */int) (signed char)58)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0))))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)15))) >> (((((/* implicit */int) arr_0 [1U])) - (17873)))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_0))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) - (8388607U)));
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2682225334U)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        var_21 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (short)-10791)) : (((/* implicit */int) (short)-1765)))), (((/* implicit */int) ((unsigned short) arr_9 [i_2 + 1])))));
        var_22 = ((/* implicit */short) ((signed char) (~(((((/* implicit */int) (unsigned short)20921)) * (((/* implicit */int) var_4)))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) (+(arr_10 [i_2 - 1] [i_2])));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((3409892300862609466LL), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (short)1762)), (var_8))), (((/* implicit */unsigned int) arr_13 [i_3] [i_3]))))))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_4))) & (-1058528604)));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_3))));
                            var_26 = ((/* implicit */unsigned int) arr_15 [i_3]);
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255))));
                            var_28 = ((/* implicit */unsigned short) 19);
                        }
                        var_29 = ((/* implicit */unsigned short) arr_11 [i_4]);
                        arr_25 [i_6] [i_6] [i_5] [(unsigned short)10] [(signed char)0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_5 - 1]))))) << (((((/* implicit */_Bool) min(((unsigned short)5158), ((unsigned short)0)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [i_6])) && (((/* implicit */_Bool) arr_15 [i_4])))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (short)-1777))))), (max((arr_22 [(signed char)1] [6U] [6U] [i_3]), (((/* implicit */unsigned int) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]))))));
        var_31 = ((/* implicit */signed char) arr_0 [(unsigned short)23]);
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) arr_29 [i_8] [12U]);
        var_32 = ((/* implicit */unsigned int) (signed char)-10);
    }
}
