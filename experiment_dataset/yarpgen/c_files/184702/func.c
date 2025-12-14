/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184702
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((int) var_11));
                        var_12 = ((/* implicit */_Bool) (+(max((max((-2474004009999219455LL), (((/* implicit */long long int) (unsigned char)3)))), (((((/* implicit */long long int) var_4)) / (-2474004009999219453LL)))))));
                        var_13 = ((/* implicit */unsigned int) (~((-(arr_7 [i_0] [i_0])))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) max((max(((~(2474004009999219455LL))), (((/* implicit */long long int) var_6)))), ((-(3564189452489759319LL)))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((int) (-(max((2474004009999219437LL), (((/* implicit */long long int) 3544278408U)))))));
        var_16 = ((/* implicit */unsigned long long int) var_1);
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) 1487846423130708876ULL)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [(short)18])) ? (var_0) : (var_10))) + (481725823))))))));
        var_18 = ((/* implicit */unsigned short) (~(var_6)));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_19 = ((var_3) || (((/* implicit */_Bool) min((var_10), (-1906494093)))));
                        var_20 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) (short)-23112)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) : (3564189452489759319LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U))))))));
                        var_21 = ((((/* implicit */int) ((signed char) arr_13 [i_6]))) + (((((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) | ((-(((/* implicit */int) arr_14 [i_7])))))));
                        var_22 = ((/* implicit */_Bool) ((((var_3) ? ((~(2474004009999219449LL))) : (((/* implicit */long long int) arr_22 [i_5] [i_6] [(unsigned char)13] [i_8])))) - (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)253)))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) var_6);
    var_24 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (min((((/* implicit */int) (unsigned char)123)), (var_6))))));
    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((+(var_0))) > (((/* implicit */int) var_3)))))));
    var_26 = ((/* implicit */short) var_9);
}
