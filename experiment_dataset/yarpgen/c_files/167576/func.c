/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167576
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)49688))))) || (((/* implicit */_Bool) (unsigned short)31040))));
        var_21 = ((/* implicit */_Bool) (-(((int) (unsigned short)34480))));
        var_22 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) max((arr_2 [i_1]), (arr_3 [i_1])));
        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52778))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) arr_6 [i_2] [i_2]);
        var_26 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_0 [i_2]) : (((/* implicit */int) (unsigned char)186))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                arr_11 [6ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_7)))));
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)180)) && (((/* implicit */_Bool) (unsigned short)52780)))) ? (((((/* implicit */int) var_13)) / (var_10))) : (((/* implicit */int) (unsigned short)34504))))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (((-1) / (((/* implicit */int) (unsigned char)63))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_5] [i_6] [i_6] [i_7]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)52786)), (3414346177U)))) : ((+(var_7)))));
                    var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_6]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        var_31 ^= ((/* implicit */unsigned int) ((unsigned short) var_17));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_20 [i_8] [i_8])));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_21 [i_8] [i_8])) / (((/* implicit */int) (unsigned short)52789)))))))));
        var_34 = ((/* implicit */unsigned int) -919059029);
    }
    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_35 &= ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */int) arr_13 [i_9] [i_9])) & (((/* implicit */int) arr_14 [i_9]))))) | (((/* implicit */long long int) (-(((/* implicit */int) ((var_14) < (-856781854)))))))));
        var_36 = ((/* implicit */_Bool) (-((+(7462732091570225191ULL)))));
        var_37 = ((/* implicit */unsigned int) ((signed char) 282430027424568786ULL));
    }
}
