/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125321
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
    var_14 = ((/* implicit */int) (+((~((+(var_1)))))));
    var_15 = (+((-((~(var_2))))));
    var_16 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) var_11))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0])))))))));
        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)32117))))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((+(arr_3 [i_0] [i_1]))))))));
            arr_6 [i_0] [i_0] [i_1] |= ((/* implicit */long long int) (-((-((~(((/* implicit */int) (unsigned char)200))))))));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_2] |= (~((~((+(((/* implicit */int) var_0)))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (+(885854981U)))))))))));
        }
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3]))))))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~((-((+(var_7))))))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~((~((~(((/* implicit */int) var_10)))))))))));
                        }
                        arr_24 [i_4] [i_4] [i_3] [i_6] = ((/* implicit */unsigned long long int) (+((~((+(arr_11 [i_3])))))));
                        var_22 -= ((/* implicit */short) (-((+((~(((/* implicit */int) var_13))))))));
                    }
                } 
            } 
            arr_25 [i_3] [i_4] [i_4] = (-((+((-(((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3])))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_24 = (+((~(8395036220367412541ULL))));
        }
        arr_28 [i_3] = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) var_6))))))));
        var_25 -= ((/* implicit */_Bool) (+((-((+(((/* implicit */int) var_6))))))));
    }
    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
    {
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))));
        arr_34 [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(var_8))))))));
    }
    for (long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
    {
        arr_38 [i_10] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) (-((+((+(4294967283U)))))));
                    var_27 -= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_2)))))))));
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_3)))))))))));
                        arr_48 [i_10] [i_11] [i_12 + 1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (+(var_7))))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                        arr_51 [i_10] [i_11] [i_12 + 1] [i_14] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_12 + 1] [i_11])))))))));
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)252)))))))));
                    }
                    for (unsigned short i_15 = 4; i_15 < 16; i_15 += 1) 
                    {
                        arr_55 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) arr_31 [i_10] [(unsigned char)10]))))))));
                        arr_56 [i_10] [i_11] [i_11] [i_12 + 1] [i_15 - 4] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)250)))))))));
                    }
                    arr_57 [i_10] [i_11] [i_11] [i_12 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-28484))))))))));
                }
            } 
        } 
        arr_58 [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_27 [i_10] [i_10] [i_10])))))))));
        var_31 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))));
        var_32 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
    }
    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
}
