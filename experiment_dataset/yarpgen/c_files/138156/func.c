/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138156
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
    var_14 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((short) (_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((((((((/* implicit */int) (signed char)-95)) - (((/* implicit */int) var_1)))) == (((/* implicit */int) var_6)))) ? (((/* implicit */int) var_5)) : (-997595370)))));
                        var_17 = ((/* implicit */short) (-(min((997595369), (arr_1 [i_1] [i_2 - 2])))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_18 ^= ((/* implicit */short) (_Bool)1);
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_19 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) ((17U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63108)))))) ? (((/* implicit */int) min(((short)-22884), (((/* implicit */short) arr_11 [i_7]))))) : (((arr_18 [i_4] [i_5] [i_4]) - (((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))))))));
                        var_20 = ((/* implicit */long long int) ((signed char) (_Bool)1));
                        arr_21 [i_6] [i_4] [(unsigned short)0] [i_6] [i_7] [8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((unsigned int) var_8)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)155)) == (var_3))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))));
                        var_21 = -997595388;
                        var_22 = ((/* implicit */int) (((+(((/* implicit */int) var_9)))) > (((/* implicit */int) (unsigned short)52098))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) ((max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)13425)) : (((/* implicit */int) (short)22509)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)999)))))) != (((/* implicit */int) var_1))));
}
