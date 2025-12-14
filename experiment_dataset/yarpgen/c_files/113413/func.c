/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113413
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) var_15)) / (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) 206105593)) : (var_17)))));
                        var_21 = ((/* implicit */long long int) var_9);
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((var_17) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */int) (!(var_0)));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        arr_19 [(unsigned short)1] = ((/* implicit */short) var_1);
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((_Bool) 9007199254740991ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (short)15111)))))) : (var_19))) <= (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-15111))))), (((var_1) ^ (((/* implicit */unsigned long long int) var_15))))))));
        /* LoopNest 3 */
        for (long long int i_5 = 4; i_5 < 19; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
                {
                    {
                        arr_30 [i_4] [i_5] [i_6 - 1] [i_4] [i_5] = ((/* implicit */_Bool) var_13);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((18437736874454810625ULL), (((/* implicit */unsigned long long int) var_15)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))))) ? (((((((/* implicit */int) var_11)) > (((/* implicit */int) var_10)))) ? (min((var_17), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_8)))))))));
                        var_23 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (18437736874454810625ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))) : (18437736874454810616ULL))));
                        var_24 = var_12;
                    }
                } 
            } 
        } 
        var_25 = var_15;
    }
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
    {
        arr_35 [i_8] [(short)12] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14)))) : (min((max((var_19), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_12)))))))));
        arr_36 [i_8] [17ULL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((var_14), (((/* implicit */int) ((9943350034584802196ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))), (var_4)));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_43 [i_9] = var_1;
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
        }
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_6))));
        var_28 += ((/* implicit */unsigned long long int) min((((unsigned int) ((int) var_8))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (1290186460) : (((/* implicit */int) var_12))))) ? (max((((/* implicit */unsigned int) var_14)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (var_1)))))))));
    }
    var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((var_4), (((/* implicit */unsigned int) (unsigned char)109))))))), (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9))))) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned short i_11 = 4; i_11 < 8; i_11 += 2) 
    {
        for (int i_12 = 2; i_12 < 10; i_12 += 2) 
        {
            {
                arr_49 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-15111), (((/* implicit */short) var_13)))))) / ((-(var_18)))))) && ((_Bool)0)));
                arr_50 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1781943679)))))))), (min(((~(var_2))), (((/* implicit */long long int) min((132134251), (((/* implicit */int) var_8)))))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 1; i_14 < 7; i_14 += 4) 
                    {
                        {
                            var_30 *= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)6575)) : (((/* implicit */int) var_10)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6570))) == (var_6)))), (var_6)))));
                            var_31 *= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (var_15)))) || (((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)115))))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (var_14)))), (((((/* implicit */_Bool) 3021282543U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)))))));
                            arr_55 [i_11 - 2] [i_11 - 2] [i_13] [i_13] [i_13 - 1] [i_14 + 4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_10), (var_10)))) >= (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)-29321)))))))), (((((var_1) / (((/* implicit */unsigned long long int) 1620361739U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (unsigned char)175)), (var_1))), (((/* implicit */unsigned long long int) (~(var_14))))));
            }
        } 
    } 
    var_33 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) (+(var_14))))), (min((((/* implicit */unsigned long long int) ((int) var_2))), ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
}
