/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133808
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6))))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) var_1)), (var_0)))));
                    var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (var_7)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
                    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_7), (var_2)))) : ((~(((/* implicit */int) var_7)))))), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_14 = var_7;
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
            var_17 = var_4;
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                            var_19 |= ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_0)))));
                        }
                    } 
                } 
            } 
            var_20 ^= ((/* implicit */unsigned short) (+(523776U)));
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
        }
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            var_23 = ((/* implicit */int) (+((-(var_0)))));
            var_24 -= ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) min((max((var_7), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) var_4)))))) : (var_0)));
        }
        var_25 -= ((/* implicit */unsigned short) ((signed char) max((min((var_7), (((/* implicit */unsigned short) var_8)))), (var_7))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) min((((/* implicit */long long int) var_9)), (var_0))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8)))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((-(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_4)))))));
        var_28 |= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
        arr_26 [i_9] = ((/* implicit */int) var_4);
    }
    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 33292288)) ? (1924955863) : (-1732381841))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_2)))))))))));
    var_30 = ((/* implicit */short) var_0);
}
