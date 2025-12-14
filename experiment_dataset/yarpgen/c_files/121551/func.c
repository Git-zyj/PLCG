/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121551
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
    var_18 = ((/* implicit */unsigned long long int) var_2);
    var_19 = ((/* implicit */_Bool) var_16);
    var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) 267911168))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (var_2))))) : (max((((/* implicit */unsigned long long int) var_6)), (var_9))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((min((((/* implicit */int) arr_6 [i_1] [i_1 + 3])), (arr_0 [i_0]))), (max((((/* implicit */int) (unsigned char)186)), (265958462)))));
                    var_22 = min((-265958453), (((/* implicit */int) (_Bool)1)));
                    arr_9 [12U] [i_1] = ((/* implicit */int) arr_1 [i_1 - 2]);
                    arr_10 [12ULL] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
                    arr_11 [i_1] = var_17;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_20 [i_5] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42628))) : (max((max((((/* implicit */long long int) (unsigned char)85)), (18012199486226432LL))), (((/* implicit */long long int) (unsigned short)50060))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) arr_5 [i_3]);
                                var_24 = ((/* implicit */unsigned long long int) min((((int) -598819078)), (((/* implicit */int) (unsigned short)3))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(265958440)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), ((unsigned char)231))))) : (min((((/* implicit */unsigned long long int) -265958441)), (min((((/* implicit */unsigned long long int) (unsigned char)7)), (arr_5 [i_3])))))));
                    arr_27 [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned int) min((-5678073650138820536LL), (5776222701653069963LL))));
                    var_26 = ((/* implicit */unsigned short) ((long long int) (+(((((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_4])) ? (18012199486226425LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))))))));
                }
            } 
        } 
    } 
}
