/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139569
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) (-(-970963966)));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-((-(1530547141297425493ULL))))))));
        var_17 |= ((/* implicit */unsigned int) (+((+((+(14)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
                    var_19 = ((/* implicit */unsigned char) (~((+((-(arr_6 [i_2 - 1] [16ULL] [i_1] [i_0])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 18; i_6 += 1) 
                {
                    {
                        arr_17 [i_3 + 2] [i_5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (+((+(var_1)))));
                        var_20 *= ((/* implicit */_Bool) (-((+(-970963966)))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_0 [i_3] [i_4])))))))));
                        var_22 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_11))))));
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    var_24 &= ((/* implicit */unsigned short) (-((+(970963971)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_8))))));
                                var_26 = ((/* implicit */unsigned long long int) (+((-(-15)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) max((var_27), ((-((-(1328249005582514235LL)))))));
        var_28 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
    }
    var_29 = ((/* implicit */unsigned int) min((var_29), ((-((+((-(var_7)))))))));
    var_30 = (~((+((-(1328249005582514235LL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) (+(5733511373203240181LL)));
        var_32 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)-9237))))));
    }
    var_33 = ((/* implicit */unsigned int) min((var_33), ((-((+(2147482624U)))))));
}
